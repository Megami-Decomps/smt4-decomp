/* NON_MATCHING: register allocation of the tail only: retail keeps the chosen index in r2 and builds the bit in r0
 * (moveq r0, r2), where this build loads the index straight into r0. */
#include "common.h"
#include <stddef.h>
#include "util/Random.h"

struct RandomChoiceStateView {
    u8 unk00[8];
    u8 usedMask; /* 0x08 */
    u8 suppressedMask; /* 0x09 */
    u8 previousChoice; /* 0x0a */
};
typedef char RandomChoicePreviousOffset[offsetof(RandomChoiceStateView, previousChoice) == 0xa ? 1 : -1];

extern "C" {

/* Exhaust all four choices before restarting, without repeating the previous choice. */
u32 FUN_003819b8(RandomChoiceStateView *state)
{
    if (state->usedMask == 0xf)
        state->usedMask = 0;
    s32 skip = randNextInRange(3);
    u8 used = state->usedMask;
    bool searching = true;
    while (searching) {
        for (s32 i = 0; i < 4; i++) {
            if (!(used & (1 << i))) {
                if (skip == 0) {
                    if (state->previousChoice != i) {
                        state->previousChoice = i;
                        searching = false;
                        break;
                    }
                } else {
                    --skip;
                }
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
