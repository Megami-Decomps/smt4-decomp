/* NON_MATCHING: retail reads the state byte through an explicit +0x400 block pointer and reloads it for the second compare, deriving the later field addresses from the owner; armcc here loads it once from the owner. */
#include "classes/SoundCursorRequests.h"

extern "C" void FUN_002bda30(SoundCursorOwner *owner, s32 arg);

// Advances the cursor task: in state 2 posts its current pair, in state 4 resets.
extern "C" void FUN_003807b0(SoundCursorOwner *owner)
{
    switch (owner->block.state) {
    case 2:
        soundCursorPost(owner, owner->block.first, owner->block.second, &owner->block.extra);
        owner->block.state = 3;
        break;
    case 4:
        FUN_002bda30(owner, 0);
        owner->block.state = 0;
        break;
    }
}
