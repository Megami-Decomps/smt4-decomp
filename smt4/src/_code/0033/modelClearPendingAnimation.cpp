#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
#include "common.h"

extern "C" {

typedef struct TargetOwner {
    /* 0x0000 */ u8 unk0000[0x4398];
    /* 0x4398 */ AsdMdlObject *target;
} TargetOwner;




/* Clears the target's pending flag (resetting its effect scale) and then refreshes the target. */
void modelClearPendingAnimation(TargetOwner *owner)
{
    AsdMdlObject *target = owner->target;

    if (target != NULL) {
        if ((target->flags & 4) != 0) {
            target->flags &= ~4u;
            target->node->animationSpeed = 1.0f;
            AsdMdlNode *node = target->node;
            modelSetScale(node, node->speed);
        }
        modelSetAnimationChannels(owner->target, 0, 0.0f);
    }
}

} /* extern "C" */
