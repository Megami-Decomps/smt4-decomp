/* NON_MATCHING: scheduling only: retail stores the enabled byte (strb [r0,#88]) before the policy pointer (str [r0,#76]); the same body in FUN_002e11f4 matches. */
#include "classes/Obj421460.h"

extern "C" {

typedef f32 (*AnimPlayPolicy)(f32 lower, f32 upper, f32 value);

typedef struct AnimPlayerOwner {
    /* 0x00 */ u32 flags;           /* bit 0 selects which player is active */
    /* 0x04 */ u8 unk04[0x48];
    /* 0x4c */ Obj421460 *playerA;
    /* 0x50 */ Obj421460 *playerB;
} AnimPlayerOwner;

extern f32 nw_anim_PlayPolicy_Loop(f32 lower, f32 upper, f32 value);

/* Sets the play policy of the owner's active player: looping when `loop` is set, clamping otherwise. */
void animPlayerSetLoopPolicy(AnimPlayerOwner *owner, s32 loop)
{
    Obj421460 *player;

    if ((owner->flags & 1) != 0) {
        player = owner->playerB;
    } else {
        player = owner->playerA;
    }
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

} /* extern "C" */
