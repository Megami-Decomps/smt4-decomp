#include "gfx/FrameTextureWork.h"
#include "shard/JobWork.h"

extern "C" {
void FUN_001509fc(u32 value);
void FUN_001537b0(u32 value);
s32 stateValuesGetBySelector(u32 selector);

/* Runs the selected frame-texture action only when all readiness gates permit it. */
u32 FUN_0013c6d4(u32 job)
{
    FrameTextureWork *work = (FrameTextureWork *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0 || !work->unkFA4 || !work->unkFA5) {
        return 0;
    }
    if (!work->unkFAE) {
        return 0;
    }
    if (!work->unk1490) {
        return 0;
    }
    if (!work->unk148C) {
        if (work->unk1494) {
            FUN_001537b0(0);
        } else {
            FUN_001509fc(0);
        }
    }
    return 0;
}
}
