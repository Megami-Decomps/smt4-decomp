/* NON_MATCHING: same stores; retail hoists all the pool loads (queue pointer, count address, ids) before the first store, armcc loads them lazily here. */
#include "classes/Obj464cb0.h"

extern "C" {
void FUN_002b703c(void);
void asdModelCommandBlockRelease(void);
void FUN_00248ae8(s32 arg);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts the value 0xe40100 with id 0x20100, then this object and id 0xf0101. */
void Obj464cb0::post0f0101()
{
    FUN_002b703c();
    DAT_004729e0[DAT_004729e4] = 0xe40100;
    DAT_004729e0[DAT_004729e4 + 1] = 0x20100;
    DAT_004729e4 += 2;
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0101;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
    FUN_00248ae8(0);
}
