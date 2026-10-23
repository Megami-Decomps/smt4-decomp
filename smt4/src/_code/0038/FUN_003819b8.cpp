/* NON_MATCHING: retry-loop branch layout and final mask/result register allocation differ. */
#include "common.h"
#include <stddef.h>

struct RandomChoiceStateView {
    u8 unk00[8];
    u8 usedMask; /* 0x08 */
    u8 suppressedMask; /* 0x09 */
    u8 previousChoice; /* 0x0a */
};
typedef char RandomChoicePreviousOffset[offsetof(RandomChoiceStateView, previousChoice) == 0xa ? 1 : -1];

extern "C" {
s32 randNextInRange(u32);

/* Exhaust all four choices before restarting, without repeating the previous choice. */
u32 FUN_003819b8(RandomChoiceStateView *state)
{
    if (state->usedMask == 0xf)
        state->usedMask = 0;
    s32 skip = randNextInRange(3);
    u8 used = state->usedMask;
    for (;;) {
        if (!(used & 1)) {
            if (skip != 0)
                --skip;
            else if (state->previousChoice != 0) {
                state->previousChoice = 0;
                break;
            }
        }
        if (!(used & 2)) {
            if (skip != 0)
                --skip;
            else if (state->previousChoice != 1) {
                state->previousChoice = 1;
                break;
            }
        }
        if (!(used & 4)) {
            if (skip != 0)
                --skip;
            else if (state->previousChoice != 2) {
                state->previousChoice = 2;
                break;
            }
        }
        if (!(used & 8)) {
            if (skip != 0)
                --skip;
            else if (state->previousChoice != 3) {
                state->previousChoice = 3;
                break;
            }
        }
    }
    u32 choice = state->previousChoice;
    u32 bit = 1 << choice;
    if (bit & state->suppressedMask)
        choice = 5;
    state->usedMask = used | bit;
    return choice;
}
}
