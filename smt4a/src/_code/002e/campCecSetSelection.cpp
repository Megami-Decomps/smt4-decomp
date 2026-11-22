#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef g_campCec;

/* Records the menu entry chosen in the camp's StreetPass overlay, if there is one. */
void campCecSetSelection(u32 value)
{
    if (g_campCec.instance != NULL) {
        g_campCec.instance->selection = value;
    }
}

} /* extern "C" */
