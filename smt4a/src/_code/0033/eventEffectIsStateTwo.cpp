/* NON_MATCHING: retail uses `ldr r1, [r0]` where armcc emits `ldr r0, [r0]`. */
#include "common.h"

extern "C" {

struct Effect { u32 unk00[2]; u32 state; };
extern Effect *g_eventEffect;

s32 eventEffectIsStateTwo(void)
{
    if (g_eventEffect != NULL) {
        return g_eventEffect->state == 2;
    }
    return 0;
}

} /* extern "C" */
