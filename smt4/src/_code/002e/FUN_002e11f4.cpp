#include "classes/Obj421460.h"

extern "C" {

typedef f32 (*AnimPlayPolicy)(f32 lower, f32 upper, f32 value);

typedef struct AnimOwner {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 count;
    /* 0x5C */ u8 unk5c[4];
    /* 0x60 */ Obj421460 *player;
} AnimOwner;

extern f32 nw_anim_PlayPolicy_Loop(f32 lower, f32 upper, f32 value);

/* Starts the owner's track with either the looping or clamping play policy. */
void FUN_002e11f4(AnimOwner *owner, s32 loop)
{
    Obj421460 *player;

    if (owner->count > 0 && (player = owner->player) != NULL) {
        AnimPlayPolicy policy;

        if (loop == 0) {
            policy = FUN_00155650;
        } else {
            policy = nw_anim_PlayPolicy_Loop;
        }
        player->enabled = 1;
        player->clamp = policy;
    }
}

}
