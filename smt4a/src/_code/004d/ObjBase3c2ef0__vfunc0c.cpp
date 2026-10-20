#include "classes/ObjBase3c2ef0.h"

extern "C" int FUN_002e2848(void *screen, Obj422594Pair pair, int width, int left, int top, int c, int d);

/* Hands the window's rectangle to the screen; true when the screen accepted it. */
bool ObjBase3c2ef0::vfunc0c()
{
    bool accepted = false;

    if (FUN_002e2848(region.screen, region.pair, region.width, region.left, region.top, 0, 1) != 0) {
        accepted = true;
    }
    return accepted;
}
