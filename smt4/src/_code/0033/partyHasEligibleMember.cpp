#include "common.h"
struct SlotState { u8 unk00[0x9108]; s8 values[3]; };
extern "C" SlotState *gameGetSlotTable();
/* Counts initialized nonnegative values in the slot-state triplet. */
extern "C" s32 partyHasEligibleMember()
{
    s32 count = 0;
    SlotState *state = gameGetSlotTable();
    if (state->values[0] >= 0) ++count;
    if (state->values[1] >= 0) ++count;
    if (state->values[2] >= 0) ++count;
    return count;
}
