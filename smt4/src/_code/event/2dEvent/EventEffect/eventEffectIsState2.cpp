#include "common.h"

extern "C" {

typedef struct EventEffect {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} EventEffect;

extern EventEffect *g_eventEffect; /* 0x43dee8 */

/* Whether the event effect exists and is in state 2. */
u32 eventEffectIsState2(void)
{
    EventEffect *effect = g_eventEffect;
    u32 result = 0;

    if (effect == NULL) {
        return 0;
    }
    if (effect->state == 2) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
