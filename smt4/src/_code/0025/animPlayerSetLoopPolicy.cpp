/* NON_MATCHING: scheduling only: retail stores the policy-set byte (strb [r0,#88]) before the policy pointer (str [r0,#76]); the build emits them the other way round */
#include "common.h"

extern "C" {

typedef f32 PlayPolicy00254a2c(void *context, f32 start, f32 end, f32 *frame);

typedef struct Player00254a2c {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ PlayPolicy00254a2c *policy;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ s8 policySet;
} Player00254a2c;

typedef struct Owner00254a2c {
    /* 0x00 */ u32 flags;           /* bit 0 selects which player is active */
    /* 0x04 */ u8 unk04[0x48];
    /* 0x4c */ Player00254a2c *playerA;
    /* 0x50 */ Player00254a2c *playerB;
} Owner00254a2c;

extern PlayPolicy00254a2c nw_anim_PlayPolicy_Loop; /* 0x151500 */
extern PlayPolicy00254a2c FUN_00155650;

/* Sets the looping policy of the owner's active player: the library loop policy when loop is set, otherwise the one at 0x155650. */
void animPlayerSetLoopPolicy(Owner00254a2c *owner, s32 loop)
{
    Player00254a2c *player;

    if ((owner->flags & 1) != 0) {
        player = owner->playerB;
    } else {
        player = owner->playerA;
    }
    if (player != NULL) {
        PlayPolicy00254a2c *policy = loop != 0 ? nw_anim_PlayPolicy_Loop : FUN_00155650;
        player->policySet = 1;
        player->policy = policy;
    }
}

} /* extern "C" */
