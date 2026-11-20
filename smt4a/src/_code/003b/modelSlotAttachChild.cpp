#include "classes/Obj55b87c.h"
#include <stddef.h>
#include "shard/W6_W6Match3_RotationY.h"

struct ModelLightBinding {
    u32 unk00;
    Obj55b87c *track;
    void *model;
    u32 value;
};
typedef char ModelLightBindingLayoutCheck[offsetof(ModelLightBinding, track) == 4 &&
    offsetof(ModelLightBinding, model) == 8 && offsetof(ModelLightBinding, value) == 0xc ? 1 : -1];

extern "C" {
u32 asdModelGetSlotArray0(s32 slot);
void gfxModelSlotReplaceTemporary(void *model, s32 slot);
void nw_gfx_SceneNode_AttachChild(u32 node, u32 value);
void settings5BAddFlags(u32 flags);
f32 nw_anim_PlayPolicy_Loop(f32 lower, f32 upper, f32 value);
}

typedef f32 (*AnimPlayPolicy)(f32 lower, f32 upper, f32 value);

// Gives the track the looping or the clamping play policy.
static void trackSetLoopPolicy(Obj55b87c *track, s32 loop)
{
    if (track != NULL) {
        AnimPlayPolicy policy;

        if (loop == 0) {
            policy = mathClampFloat;
        } else {
            policy = nw_anim_PlayPolicy_Loop;
        }
        track->enabled = 1;
        track->clamp = policy;
    }
}

// Attach the model to one of the two render slots and restore its normal clamp policy.
extern "C" void modelSlotAttachChild(ModelLightBinding *binding, s32 slot)
{
    u32 node = asdModelGetSlotArray0(slot);
    gfxModelSlotReplaceTemporary(binding->model, slot);
    if (slot != 0) {
        if (slot != 1)
            return;
        nw_gfx_SceneNode_AttachChild(node, binding->value);
        settings5BAddFlags(2);
        trackSetLoopPolicy(binding->track, 0);
        effApplyModelLight(1);
    } else {
        nw_gfx_SceneNode_AttachChild(node, binding->value);
        settings5BAddFlags(1);
        trackSetLoopPolicy(binding->track, 0);
        effApplyModelLight(0);
    }
}
