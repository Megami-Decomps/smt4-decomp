#include "shard/Shard0031.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern OverlayRef g_campCec;

/* True unless the overlay exists and its panels are sliding out or in. */
u32 overlayIsNotBusy(void)
{
    if (g_campCec.instance == NULL || (g_campCec.instance->slidePhase != 1 && g_campCec.instance->slidePhase != 2)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
