#include "classes/SoundCursorRequests.h"

extern "C" void FUN_002bda30(SoundCursorOwner *owner, s32 arg);

// Advances the cursor task: in state 2 posts its current pair, in state 4 resets.
extern "C" void FUN_003807b0(SoundCursorOwner *owner)
{
    SoundCursorBlock *block = &owner->block;
    if (block->state == 2) {
        soundCursorPost(owner, owner->block.first, owner->block.second, &owner->block.extra);
        owner->block.state = 3;
    } else if (block->state == 4) {
        FUN_002bda30(owner, 0);
        owner->block.state = 0;
    }
}
