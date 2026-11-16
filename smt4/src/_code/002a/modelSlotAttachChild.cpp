#include "common.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "classes/Obj421460.h"

typedef f32 (*AnimPlayPolicy)(f32 lower, f32 upper, f32 value);

struct ModelSlotOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj421460 *player;
    /* 0x08 */ u32 node;
    /* 0x0c */ u32 child;
};

extern "C" {
u32 asdModelGetSlotArray0(s32 index);
void FUN_002cbaf8(u32 node, s32 index);
void nw_gfx_SceneNode_AttachChild(u32 parent, u32 child);
void FUN_00244d98(s32 index);
extern f32 nw_anim_PlayPolicy_Loop(f32 lower, f32 upper, f32 value);
}

// Gives the player the looping or the clamping play policy (the body of FUN_002e11f4).
static void playerSetLoopPolicy(Obj421460 *player, s32 loop)
{
    if (player != NULL) {
        AnimPlayPolicy policy;

        if (loop == 0) {
            policy = mathClampFloat;
        } else {
            policy = nw_anim_PlayPolicy_Loop;
        }
        player->enabled = 1;
        player->clamp = policy;
    }
}

/* Attaches the owner's child to model slot 0 or 1, sets the matching system flag and the player's default policy. */
extern "C" void modelSlotAttachChild(ModelSlotOwner *owner, s32 index)
{
    u32 slot = asdModelGetSlotArray0(index);

    FUN_002cbaf8(owner->node, index);
    if (index == 0) {
        nw_gfx_SceneNode_AttachChild(slot, owner->child);
        sysFlagsSetBits(1);
        playerSetLoopPolicy(owner->player, 0);
        FUN_00244d98(0);
        return;
    }
    if (index == 1) {
        nw_gfx_SceneNode_AttachChild(slot, owner->child);
        sysFlagsSetBits(2);
        playerSetLoopPolicy(owner->player, 0);
        FUN_00244d98(1);
    }
}
