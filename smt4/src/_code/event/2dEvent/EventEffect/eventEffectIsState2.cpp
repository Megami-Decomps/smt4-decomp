/* NON_MATCHING: the compiler adds one extra `bne` to the return after `moveq r0,#1` (branch layout of the nested condition); registers otherwise identical. */
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
    return g_eventEffect != NULL && g_eventEffect->state == 2;
}

} /* extern "C" */
