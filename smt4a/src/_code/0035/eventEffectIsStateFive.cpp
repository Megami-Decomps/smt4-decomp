#include "common.h"

extern "C" {

struct Effect { u32 unk00[2]; u32 state; };
struct Effects { Effect *first; Effect *second; };
extern Effects g_eventEffect;

s32 eventEffectIsStateFive(void)
{
    Effect *effect = g_eventEffect.second;
    if (effect == NULL) {
        return 0;
    }
    return effect->state == 5;
}

} /* extern "C" */
