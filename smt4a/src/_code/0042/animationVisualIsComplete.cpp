/* NON_MATCHING: only the placement of `mov r1, #2` (component index) differs: retail issues it before the binding null test. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

struct IndexedValues;
struct AnimatedCompletionState;

extern "C" {
void *FUN_0040619c(const IndexedValues *owner, u32 index);
u32 FUN_004ffa14(AnimatedCompletionState *object);
bool animationIsClipComplete(AnimatedCompletionState *object);

static __inline AnimatedCompletionState *animationGetComponent(const IndexedValues *owner, u32 index)
{
    return (AnimatedCompletionState *)FUN_0040619c(owner, index);
}

u8 animationVisualIsComplete(const AnimationVisualState *state)
{
    if (state->state == 5) {
        u8 complete = 1;
        if (state->binding != NULL) {
            AnimatedCompletionState *animation = animationGetComponent(
                (const IndexedValues *)state->binding->model, 2);
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
    return 0;
}

} /* extern "C" */
