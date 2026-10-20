/* NON_MATCHING: same stores; retail hoists all the pool loads (queue pointer, count address, ids) before the first store, armcc loads them lazily here. */
#include "classes/Obj464cb0.h"

extern "C" {
void FUN_00167ba0(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts two commands with the value 1 (ids 0xf0111 and 0xf0110), then this object and id 0x100e0. */
void Obj464cb0::post0100e0()
{
    FUN_00167ba0();
    DAT_005b3fe4[DAT_005b3fe8] = 1;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0111;
    DAT_005b3fe8 += 2;
    DAT_005b3fe4[DAT_005b3fe8] = 1;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0110;
    DAT_005b3fe8 += 2;
    DAT_005b3fe4[DAT_005b3fe8] = (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0x100e0;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}
