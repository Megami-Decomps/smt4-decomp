/* NON_MATCHING: compiler adds an explicit zero-result move rather than preserving the failed query result. */
#include "common.h"
extern "C" {
struct EffectOwner { u8 unk00[8]; u32 handle; };
s32 effIsFinished(u32 handle);
s32 gaugeTaskIsIdle(u32 handle);
s32 cursorSelectedItemIsAtLimit(u32 handle);
/* The effect is ready only after all three completion checks succeed. */
s32 effectAreAllCompletionChecksReady(const EffectOwner *owner) { return effIsFinished(owner->handle)!=0 && gaugeTaskIsIdle(owner->handle)!=0 && cursorSelectedItemIsAtLimit(owner->handle)!=0; }
}
