#ifndef GFX_ANIMATION_VISUAL_COMPLETION_H
#define GFX_ANIMATION_VISUAL_COMPLETION_H

#include "classes/Obj4209cc.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"

struct SlotOwner;
struct AnimatedCompletionState;

extern "C" {
u32 FUN_004ffa14(SlotOwner *object);
bool animationIsClipComplete(AnimatedCompletionState *object);
bool attackAnimationFirstChildIsComplete(const AnimationVisualState *state);
u8 animationVisualIsComplete(const AnimationVisualState *state);
}

/* A missing visual child is already complete; otherwise both its slot and clip must be done. */
static __inline bool animationVisualChildIsComplete(const AnimationVisualBinding *binding, u32 slot)
{
    bool complete = true;
    void *child = NULL;
    if (binding != NULL) {
        child = ptrVectorAt(binding->model, slot);
    }
    if (child != NULL) {
        if (FUN_004ffa14((SlotOwner *)child) == 0) {
            complete = false;
        }
        if (!animationIsClipComplete((AnimatedCompletionState *)child)) {
            complete = false;
        }
    }
    return complete;
}

#endif
