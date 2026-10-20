#include "common.h"

extern "C" {

typedef struct EventEffectView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} EventEffectView;

typedef struct EventEffectGlobalsView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ EventEffectView *effect;
} EventEffectGlobalsView;

extern EventEffectGlobalsView g_eventEffect;

/* Returns 1 if the event effect exists and its state is 5. */
u32 FUN_002c2138(void)
{
    EventEffectView *effect = g_eventEffect.effect;
    u32 result = 0;

    if (effect == NULL) {
        return 0;
    }
    if (effect->state == 5) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
