/* NON_MATCHING: with the null-checked component getter the index load now precedes the binding test as in retail; only `mov r1, #2` and `mov r4, #1` are swapped. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

struct IndexedValues;
struct AnimatedCompletionState;

extern "C" {
void *FUN_0040619c(const IndexedValues *owner, u32 index);
u32 FUN_004ffa14(AnimatedCompletionState *object);
bool animationIsClipComplete(AnimatedCompletionState *object);

static __inline AnimatedCompletionState *animationGetComponent(const AnimationVisualState *state, u32 index)
{
    const AnimationVisualBinding *binding = state->binding;
    if (binding == NULL)
        return NULL;
    return (AnimatedCompletionState *)FUN_0040619c((const IndexedValues *)binding->model, index);
}

u8 animationVisualIsComplete(const AnimationVisualState *state)
{
    if (state->state == 5) {
        u8 complete = 1;
        AnimatedCompletionState *animation = animationGetComponent(state, 2);
        if (animation != NULL) {
            if (FUN_004ffa14(animation) == 0) {
                complete = 0;
            }
            if (!animationIsClipComplete(animation)) {
                complete = 0;
            }
        }
        return complete;
    }
    return 0;
}

} /* extern "C" */
