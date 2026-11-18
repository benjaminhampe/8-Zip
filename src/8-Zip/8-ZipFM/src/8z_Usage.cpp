#include "8z_Usage.h"
#include "8z_Install.h"
#include <FL/Fl_Menu_Bar.H>
// #include <FL/Fl_Native_File_Chooser.H>

// #include <de/win32/win32_Set_Window_Icon.h>

namespace EightZip {
namespace Usage {

class Body : public Fl_Widget {
public:
    Body(int X, int Y, int W, int H) : Fl_Widget(X, Y, W, H) {}

    void draw() override
    {
        int X = x();
        int Y = y();
        int W = w();
        int H = h();

        fl_font(FL_HELVETICA_BOLD, 18);

        int x1 = X + 5;
        int y1 = Y + 5;
        bool bInstall = EightZip_isInstalled();
        Fl_Color cInstall;
        std::string sInstall;
        if ( bInstall )
        {
            cInstall = fl_rgb_color(0, 200, 0);
            sInstall = "Explorer ShellExtension 8z.dll is installed.";
        }
        else
        {
            cInstall = FL_RED;
            sInstall = "Explorer ShellExtension 8z.dll not installed.";
        }

        fl_color(cInstall);
        int h = fl_height();     // Gesamte Zeilenhöhe der Schriftart
        int d = fl_descent();
        //int w = fl_width(sInstall.c_str());
        fl_draw(sInstall.c_str(), x1,y1+h-d); y1 += 2*h;
        if ( bInstall )
        {
            fl_draw("Use 8-Zip over WinExplorer Context Menu by selecting", x1,y1+h-d); y1 += h;
            fl_draw("files and folders and press right mouse click to open", x1,y1+h-d); y1 += h;
            fl_draw("the Windows Explorer context menu.", x1,y1+h-d); y1 += 2*h;
            fl_draw("Look out for the 8-Zip icon in context menu.", x1,y1+h-d); y1 += h;
        }
        else
        {
            fl_draw("To delete 8-Zip from your computer you need to delete .exe + .dll.", x1,y1+h-d); y1 += h;
            fl_draw("If the .dll can't be deleted then it is still in use by explorer.", x1,y1+h-d); y1 += h;
            fl_draw("In that case restart the windows explorer and try again.", x1,y1+h-d); y1 += h;
        }

        fl_color(fl_rgb_color(5, 128, 230));
        y1 += h;
        fl_draw("8-Zip can compress *.tar and *.zst, later new *.bzip3 format.", x1,y1+h-d); y1 += h;
        fl_draw("NT LongPath supported, only slightly tested.", x1,y1+h-d); y1 += 2*h;

        fl_rectf(x1,y1,W,2*h,FL_BLACK);
        fl_color(fl_rgb_color(255, 255, 0));
        fl_draw("Extracting Archives not implemented yet.", x1,y1+h-d); y1 += h;
        fl_draw("Use 7-zip for extracting archives.", x1,y1+h-d); y1 += 2*h;

        fl_color(fl_rgb_color(255, 0, 0));
        fl_draw("ATTENTION: This is an early development state.", x1,y1+h-d); y1 += h;
        fl_draw("No liability for data losses or damages of any kind.", x1,y1+h-d); y1 += 2*h;

        fl_rect(X,Y,W,H,cInstall);

    }
};

// =============================================================
struct UI
// =============================================================
{
    Window* window = nullptr;
    Fl_Menu_Bar* menuBar = nullptr;
    Button* btnInstall = nullptr;
    Button* btnUninstall = nullptr;
    Button* btnKillExplorer = nullptr;
    de::Recti rcBody;
    Body* lblBody = nullptr;
};

static UI ui;

// ---------------- callbacks ----------------
static void install_cb(Fl_Widget*, void*)
{
    EightZip_Install();
    ui.window->redraw();
}

static void uninstall_cb(Fl_Widget*, void*)
{
    EightZip_Uninstall();
    ui.window->redraw();
}

static void restartExplorer_cb(Fl_Widget*, void*)
{
    EightZip_restartExplorer();
    ui.window->redraw();
}

void onMenuFile_Quit(Fl_Widget*, void*)
{
    Fl::first_window()->hide();   // clean FLTK exit
}

EightZip_Usage::EightZip_Usage(int W, int H, const char* title)
    : Window(W, H, title)
{
    begin();

    const float zoom = Fl::screen_scale(0);
    const int d = 5 * zoom;
    const int h1 = 30 * zoom;
    const int hR = H - 3*h1 - 5*d; // hRemain
    const int h2 = 2 * hR / 3;
    const int h3 = hR - h2;
    int x = d;
    int y = d;

    ui.menuBar = new Fl_Menu_Bar(0, 0, 400, 25);

    //ui.menuBar->add("&File/&Open", 0, onMenuFile_Open);
    ui.menuBar->add("&File/&Exit program", 0, onMenuFile_Quit);

    // ui.menuBar->add("&Help/&Install", 0, onMenuHelp_Install);
    // ui.menuBar->add("&Help/&Deinstall", 0, onMenuHelp_Unistall);

    // ui.menuBar->add("&Help/&About", 0, onMenuHelp_About);

    ui.btnInstall = new Button(0,0,0,0,"Install");
    ui.btnUninstall = new Button(0,0,0,0,"Uninstall");
    ui.btnKillExplorer = new Button(0,0,0,0,"Restart Explorer");

    ui.btnInstall->tooltip("Install 8z.dll Explorer Shell Extension to use 8-Zip over Explorer context menu like 7-zip.");
    ui.btnUninstall->tooltip("Deinstall 8z.dll Explorer Shell Extension. Call restartExplorer() afterwards if explorer did not unload 8z.dll");
    ui.btnKillExplorer->tooltip("Restart Explorer to close handle to 8z.dll (which prevents deletion of 8z.dll since it is still in use by explorer).\n"
                                "\nWarn: Closes all open explorer windows, no restore (yet).");

    // =============================================================
    ui.btnInstall->callback(install_cb);
    ui.btnUninstall->callback(uninstall_cb);
    ui.btnKillExplorer->callback(restartExplorer_cb);

    ui.lblBody = new Body(0,0,0,0);
    end();

    ui.window = this;
}

void EightZip_Usage::resize(int X, int Y, int W, int H)
{
    Fl_Window::resize(X, Y, W, H);

    const float zoom = Fl::screen_scale(0);

    const int d = 5 * zoom;
    int x = d;
    int y = d;
    int w = W - 2*d;
    int h = H - 2*d;
    const int hMenu = 24 * zoom;
    const int hInst = 32 * zoom;
    const int hBody = h - hMenu - hInst - 2*d;

    ui.menuBar->resize(x,y,w,hMenu);
    y += hMenu + d;

    int x1 = x;
    int w4 = (w / 4) - d;
    ui.btnInstall->resize(x1,y,w4,hInst); x1 += w4 + d;
    ui.btnUninstall->resize(x1,y,w4+2*d,hInst); x1 += w4 + 3*d;
    ui.btnKillExplorer->resize(x1,y,2*w4,hInst);
    y += hInst + d;

    ui.rcBody = de::Recti(x,y,w,hBody);
    ui.lblBody->resize(x,y,w,hBody);
}

} // end namespace FM.
} // end namespace EightZip.
