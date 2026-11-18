#include "Widgets.h"

// =============================================================
Label::Label(int X, int Y, int W, int H, const char* Title)
    : Fl_Box(X, Y, W, H, Title)
{
    align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE); //  | FL_ALIGN_TOP
    // labelfont(FL_FREE_FONT);
    labelsize(10*Fl::screen_scale(0));
}

void Label::draw()
{
    //int cw = 20 * Fl::screen_scale(0) + fl_width(label());

//    fl_push_clip(x(), y(), w(), h());

    Fl_Box::draw();

    // --- Hintergrund ---

    // Fl_Color border_blue = fl_rgb_color(0,120,215);     // Windows blue
    // fl_color(border_blue);
    // fl_rect(x(), y(), w(), h());
    // fl_pop_clip();
}

