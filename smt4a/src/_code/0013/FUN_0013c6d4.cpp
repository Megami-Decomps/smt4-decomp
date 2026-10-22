/* NON_MATCHING: Readiness tests are if-converted and large byte-field offsets use separate literals instead of shared subobject bases. */
#include "gfx/FrameTextureWork.h"

extern "C" {
void FUN_001509fc(u32 value);
void FUN_001537b0(u32 value);
s32 stateValuesGetBySelector(u32 selector);
FrameTextureWork *jobGetWork(u32 job);

/* Runs the selected frame-texture action only when all readiness gates permit it. */
u32 FUN_0013c6d4(u32 job)
{
    FrameTextureWork *work = jobGetWork(job);
    if (stateValuesGetBySelector(0) == 0 && work->unkFA4 && work->unkFA5 &&
        work->unkFAE && work->unk1490 && !work->unk148C) {
        if (work->unk1494) {
            FUN_001537b0(0);
        } else {
            FUN_001509fc(0);
        }
    }
    return 0;
}
}
