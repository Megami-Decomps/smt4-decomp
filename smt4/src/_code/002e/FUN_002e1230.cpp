/* Applies the loop policy to the animation player at +8, then runs FUN_002e11f4 and FUN_002e1260 on it with `flag`
 * (FUN_002e1260 is placed right after, so the last call is a linker NOP). */
#include "common.h"
#include "code/Code002e_Smt4.h"

struct AnimOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *player;
};

extern "C" {
void animPlayerSetLoopPolicy(void *player);
void FUN_002e11f4(void *player, s32 flag);
void FUN_002e1260(void *player, s32 flag);

void FUN_002e1230(AnimOwner *owner, s32 flag)
{
    animPlayerSetLoopPolicy(owner->player);
    FUN_002e11f4(owner->player, flag);
    FUN_002e1260(owner->player, flag);
}
}
