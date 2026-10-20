/* NON_MATCHING: retail clears r0 before the null test and falls into the shared `bx lr` after the moveq; armcc here tests first and branches. */
#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ s32 state;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

/* Whether the status screen exists and is in state 23. */
u32 FUN_0031f63c(void)
{
    u32 result = 0;

    if (g_statusDown != NULL && g_statusDown->state == 23) {
        result = 1;
    }
    return result;
}

}
