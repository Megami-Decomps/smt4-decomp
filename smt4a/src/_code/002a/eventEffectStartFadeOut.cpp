#include "common.h"
extern "C" {
struct Effect { u32 unk00; u32 state; u8 unk08[8]; f32 rate; };
extern struct { u8 unk00[0x0C]; Effect *effect; } g_eventEffect;
/* Starts the event effect's fade-out. */
void eventEffectStartFadeOut(void) {
    if (g_eventEffect.effect != NULL) {
        g_eventEffect.effect->state = 2;
        g_eventEffect.effect->rate = -0.02f;
    }
}
}
