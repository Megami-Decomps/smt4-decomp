#include "camp/CampState.h"

extern "C" {


int ifTouchRegionRemove(void);
s32 FUN_0029d644(u32 arg);

/* Removes the camp screen's touch regions: the fixed ones, each used slot's, and (when `keepExtra` is 0) two more. */
void campReleaseScreenTouchRegions(u32 arg, s32 keepExtra)
{
    CampState *camp = g_camp;
    s32 i;

    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    camp->touch.scrollRegions[0] = -1;
    camp->touch.scrollRegions[1] = -1;
    camp->touch.scrollRegions[2] = -1;
    camp->touch.scrollRegions[3] = -1;
    camp->touch.scrollRegions[4] = -1;
    for (i = 0; i < FUN_0029d644(arg); i++) {
        if (camp->touch.rowRegions[i] >= 0) {
            ifTouchRegionRemove();
            camp->touch.rowRegions[i] = -1;
        }
    }
    if (keepExtra == 0) {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
}

} /* extern "C" */
