#include "map/LmapViewGlobals.h"

extern "C" {

s32 FUN_003f9e6c(Obj557af8 *clip);


bool FUN_003958cc(void)
{
    if (DAT_005806a0.view->unk304 == 0 || FUN_003f9e6c(DAT_005806a0.view->clip) == 0) {
        return true;
    }
    return false;
}

} /* extern "C" */
