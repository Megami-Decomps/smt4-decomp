#include "map/lmapMain.h"

extern "C" {

s32 FUN_003f9e6c(u32 value);

extern LmapExtraGlobalsA DAT_005806a0;

bool FUN_003958cc(void)
{
    if (DAT_005806a0.extra->unk304 == 0 || FUN_003f9e6c(DAT_005806a0.extra->unk2BC) == 0) {
        return true;
    }
    return false;
}

} /* extern "C" */
