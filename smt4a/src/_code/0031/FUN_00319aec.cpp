#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef DAT_0057f110;

void FUN_00319aec(u8 value)
{
    OverlayObj *overlay = DAT_0057f110.instance;

    if (overlay != NULL) {
        overlay->unk1A4 = value;
        overlay->unk1A0 = 1;
    }
}

} /* extern "C" */
