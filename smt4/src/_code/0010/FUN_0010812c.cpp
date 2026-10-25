/* NON_MATCHING: frame readiness access bases and final branch layout differ. */
#include "shard/FrameWork.h"

extern "C" {
s32 FUN_00117a70(s32 mode);
s32 FUN_001192c8(s32 mode);
s32 FUN_002bff10(u32 screen);

// Process a prepared frame unless the screen or surface gates block it.
s32 FUN_0010812c(u32 job)
{
    FrameWork *work = reinterpret_cast<FrameWork *>(jobGetWork(job));
    if (FUN_002bff10(0) == 0 && work->flags.active && work->flags.ready) {
        if (!work->flags.surfaceReady || work->frame.surface == NULL)
            return 0;
        if (!work->frame.blocked) {
            if (work->frame.unkE0)
                FUN_001192c8(0);
            else
                FUN_00117a70(0);
        }
    }
    return 0;
}
}
