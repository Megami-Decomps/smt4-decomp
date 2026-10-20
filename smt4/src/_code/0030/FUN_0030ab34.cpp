/* NON_MATCHING: retail writes state/prevState with one stm (r1 = 14, r2 = old state); armcc here stores them as separate pre-indexed stores. */
#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u32 state;
    /* 0x404 */ u32 prevState;
    /* 0x408 */ u32 unk408;
    /* 0x40C */ u32 stateTime;
    /* 0x410 */ u8 unk410[0x544 - 0x410];
    /* 0x544 */ s32 cursor;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x44e190 */

/* Enters state 14 (remembering the previous one); resets the cursor when `keepCursor` is 0. */
void FUN_0030ab34(s32 keepCursor)
{
    StatusDown *status = g_statusDown;
    u32 old;

    if (keepCursor == 0) {
        g_statusDown->cursor = -1;
    }
    old = status->state;
    status->stateTime = 0;
    status->state = 14;
    status->prevState = old;
}

}
