#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef DAT_0057f110;

/* True unless the overlay exists with unk1A0 equal to 1 or 2. */
u32 overlayIsNotBusy(void)
{
    if (DAT_0057f110.instance == NULL || (DAT_0057f110.instance->unk1A0 != 1 && DAT_0057f110.instance->unk1A0 != 2)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
