#include "shard/Shard0031.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern OverlayRef g_campCec;

/* True unless the overlay exists with unk1A0 equal to 1 or 2. */
u32 overlayIsNotBusy(void)
{
    if (g_campCec.instance == NULL || (g_campCec.instance->unk1A0 != 1 && g_campCec.instance->unk1A0 != 2)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
