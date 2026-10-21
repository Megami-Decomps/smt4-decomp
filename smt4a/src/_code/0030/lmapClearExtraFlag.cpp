#include "map/lmapMain.h"

extern "C" {

extern LmapExtraGlobalsA DAT_005806a0;

void lmapClearExtraFlag(void)
{
    DAT_005806a0.extra->unk2A8 = 0;
}

} /* extern "C" */
