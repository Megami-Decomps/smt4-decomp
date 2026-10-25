/* NON_MATCHING: selection/clip registers and shared-true exit placement differ. Corrected unordered float behavior: a NaN time/duration is not complete. Candidate O2. */
#include "shard/W6_W6Match2_AnimationPlayback.h"

struct AnimatedCompletionState {
    u32 unk00;  // 0x00
    u32 flags;  // 0x04
    u8 unk08[0x7c]; // 0x08
    AnimationSelection selection; // 0x84
};

// Disabled, absent and looping clips are complete; otherwise compare playback time.
extern "C" bool animationIsClipComplete(AnimatedCompletionState* object)
{
    if (object->flags & 2)
        return true;
    AnimationClip *clip = object->selection.clip;
    if (clip == NULL)
        return true;
    if (object->selection.flags != 2) {
        if (object->selection.flags == 1)
            return true;
    } else if (clip->flags & 1) {
        return true;
    }
    return object->selection.time >= clip->duration;
}
