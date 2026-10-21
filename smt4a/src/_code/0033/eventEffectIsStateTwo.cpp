/* NON_MATCHING: retail uses `ldr r1, [r0]` where armcc emits `ldr r0, [r0]`. */
#include "common.h"

extern "C" {

struct Effect { u32 unk00[2]; u32 state; };
extern Effect *g_eventEffect;

s32 eventEffectIsStateTwo(void)
{
    return g_eventEffect != NULL && g_eventEffect->state == 2;
}

} /* extern "C" */
