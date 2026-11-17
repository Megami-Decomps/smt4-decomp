#include "map/LmapViewGlobals.h"

extern "C" {

s32 FUN_003f9e6c(Obj557af8 *clip);


bool FUN_003958cc(void)
{
    if (g_lmapViewHolder.view->unk304 == 0 || FUN_003f9e6c(g_lmapViewHolder.view->clip) == 0) {
        return true;
    }
    return false;
}

} /* extern "C" */
