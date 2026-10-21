/* NON_MATCHING: retail uses `ldrb r0, [r0, #1121]` where armcc emits `different generated sequence`. */
#include "common.h"

extern "C" {

void FUN_003bf3f0(s32 enabled);

void lmapEnableSceneState(void)
{
    FUN_003bf3f0(1);
}

} /* extern "C" */
