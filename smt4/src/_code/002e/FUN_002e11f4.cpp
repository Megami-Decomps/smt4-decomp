/* NON_MATCHING: the policy store is scheduled before the `playing` byte store; retail stores the byte first. */
#include "common.h"

extern "C" {

typedef s32 (*AnimPlayPolicy)(void);

typedef struct AnimPlayer {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ AnimPlayPolicy policy;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ u8 playing;
} AnimPlayer;

typedef struct AnimOwner {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 count;
    /* 0x5C */ u8 unk5c[4];
    /* 0x60 */ AnimPlayer *player;
} AnimOwner;

extern s32 nw_anim_PlayPolicy_Loop(void);

/* Starts the owner's player with the looping play policy, or with the policy at 0x155650 when `loop` is 0. */
void FUN_002e11f4(AnimOwner *owner, s32 loop)
{
    AnimPlayer *player;

    if (owner->count > 0 && (player = owner->player) != NULL) {
        AnimPlayPolicy policy;

        if (loop == 0) {
            policy = (AnimPlayPolicy)0x155650;
        } else {
            policy = nw_anim_PlayPolicy_Loop;
        }
        player->playing = 1;
        player->policy = policy;
    }
}

}
