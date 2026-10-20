/* NON_MATCHING: retail branches around the player-policy stores and loads the policy constant inside each arm; the build hoists the constant and conditionally executes the stores */
#include "common.h"

extern "C" {

typedef void PlayPolicy002a043c(void);

typedef struct Player002a043c {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ PlayPolicy002a043c *policy;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ u8 policySet;
} Player002a043c;

typedef struct Owner002a043c {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Player002a043c *player;
    /* 0x08 */ u32 node;
    /* 0x0c */ u32 child;
} Owner002a043c;

u32 asdModelGetSlotArray0(s32 index);
void FUN_002cbaf8(u32 node, s32 index);
void nw_gfx_SceneNode_AttachChild(u32 parent, u32 child);
void sysFlagsSetBits(s32 bits);
void FUN_00244d98(s32 index);

/* Policy at 0x155650 (unnamed; retail embeds its address). */
#define DEFAULT_POLICY_002A043C ((PlayPolicy002a043c *)0x155650)

/* Attaches the owner's child to model slot 0 or 1, sets the matching system flag and the player's default policy. */
void modelSlotAttachChild(Owner002a043c *owner, s32 index)
{
    u32 slot = asdModelGetSlotArray0(index);
    Player002a043c *player;

    FUN_002cbaf8(owner->node, index);
    if (index == 0) {
        nw_gfx_SceneNode_AttachChild(slot, owner->child);
        sysFlagsSetBits(1);
        player = owner->player;
        if (player != NULL) {
            player->policySet = 1;
            player->policy = DEFAULT_POLICY_002A043C;
        }
        FUN_00244d98(0);
        return;
    }
    if (index == 1) {
        nw_gfx_SceneNode_AttachChild(slot, owner->child);
        sysFlagsSetBits(2);
        player = owner->player;
        if (player != NULL) {
            player->policySet = 1;
            player->policy = DEFAULT_POLICY_002A043C;
        }
        FUN_00244d98(1);
    }
}

} /* extern "C" */
