/* NON_MATCHING: the state guard is shrink-wrapped before the saved-register prologue and component-index setup is scheduled later than retail. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

struct IndexedValues;
struct AnimatedCompletionState;

extern "C" {
void *FUN_0040619c(const IndexedValues *owner, u32 index);
u32 FUN_004ffa14(AnimatedCompletionState *object);
bool animationIsClipComplete(AnimatedCompletionState *object);

u8 animationVisualIsComplete(const AnimationVisualState *state)
{
    if (state->state != 5) {
        return 0;
    }
    u8 complete = 1;
    if (state->binding != NULL) {
        AnimatedCompletionState *animation = (AnimatedCompletionState *)
            FUN_0040619c((const IndexedValues *)state->binding->model, 2);
        if (animation != NULL) {
            if (FUN_004ffa14(animation) == 0) {
                complete = 0;
            }
            if (!animationIsClipComplete(animation)) {
                complete = 0;
            }
        }
    }
    return complete;
}

} /* extern "C" */
