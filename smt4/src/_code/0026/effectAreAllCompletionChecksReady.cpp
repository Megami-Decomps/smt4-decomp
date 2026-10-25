#include "common.h"
extern "C" {
struct EffectOwner { u8 unk00[8]; u32 handle; };
s32 effIsFinished(u32 handle);
s32 gaugeTaskIsIdle(u32 handle);
s32 cursorSelectedItemIsAtLimit(u32 handle);
/* The effect is ready only after all three completion checks succeed. */
s32 effectAreAllCompletionChecksReady(const EffectOwner *owner)
{
    s32 ready = effIsFinished(owner->handle);
    if (ready != 0) {
        ready = gaugeTaskIsIdle(owner->handle);
        if (ready != 0)
            ready = cursorSelectedItemIsAtLimit(owner->handle) != 0;
    }
    return ready;
}
}
