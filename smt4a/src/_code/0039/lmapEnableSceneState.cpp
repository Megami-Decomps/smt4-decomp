/* NON_MATCHING: retail uses `ldrb r0, [r0, #1121]` where armcc emits `different generated sequence`. */
#include "common.h"

extern "C" {

void mapOverlaySetOpen(s32 enabled);

void lmapEnableSceneState(void)
{
    mapOverlaySetOpen(1);
}

} /* extern "C" */
