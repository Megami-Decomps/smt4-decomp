#include "classes/Obj55b87c.h"

extern "C" {

typedef f32 (*AnimPlayPolicy)(f32 lower, f32 upper, f32 value);

struct AnimPlayerOwner {
    /* 0x00 */ u32 flags;           /* bit 0 selects the active player */
    /* 0x04 */ u8 unk04[0x48];
    /* 0x4C */ Obj55b87c *playerA;
    /* 0x50 */ Obj55b87c *playerB;
};

f32 nw_anim_PlayPolicy_Loop(f32 lower, f32 upper, f32 value);

/* Sets the active animation player to loop or clamp its playback. */
void animPlayerSetLoopPolicy(AnimPlayerOwner *owner, s32 loop)
{
    Obj55b87c *player;
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
