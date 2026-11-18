#pragma once
#include <de/Core.h>
#include <gui/Widgets.h>

namespace EightZip {
namespace Usage {

// =============================================================
class EightZip_Usage : public Window
// =============================================================
{
public:
    EightZip_Usage(int W, int H, const char* title);

    void resize(int X, int Y, int W, int H) override;
};


} // end namespace Usage.
} // end namespace EightZip.
