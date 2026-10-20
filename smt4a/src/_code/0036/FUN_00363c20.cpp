#include "map/lmapMain.h"

extern "C" {

extern LmapExtraGlobalsA DAT_005806a0;

void FUN_00363c20(void)
{
    LmapExtraA *extra = DAT_005806a0.extra;

    extra->unk2B8 = 1;
    extra->unk304 = 1;
}

} /* extern "C" */
