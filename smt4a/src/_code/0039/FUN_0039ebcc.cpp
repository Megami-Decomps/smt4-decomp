/* NON_MATCHING: retail evaluates the signed state through a rebased receiver and saves that receiver; armcc folds the equality test to an unsigned halfword load without a frame. */
#include "common.h"

struct GuardedState {
    s32 getState() const { return state; }
    u8 unk00[0x50];
    s16 state; // 0x50
    u8 unk52[2];
    u8 enabled; // 0x54
};
struct GuardedStateOwner {
    u8 unk00[0x2dc];
    GuardedState state; // 0x2dc
};
extern "C" s32 uiSpriteGetCompletionState(GuardedState *state);

// Delegate the query only while state three is enabled.
extern "C" s32 FUN_0039ebcc(GuardedStateOwner *owner)
{
    if (owner->state.getState() == 3 && owner->state.enabled)
        return uiSpriteGetCompletionState(&owner->state);
    return 1;
}
