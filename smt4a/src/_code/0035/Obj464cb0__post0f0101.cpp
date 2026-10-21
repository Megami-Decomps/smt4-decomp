/* NON_MATCHING: same stores; retail hoists the pool loads (queue pointer, count address, ids) before the first store and uses no spare registers; armcc loads them lazily here and spends r5 and ip. */
#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts the value 0xe40100 with id 0x20100, then this object and id 0xf0101. */
void Obj464cb0::post0f0101()
{
    cursorResetFromParam();
    DAT_005b3fe4[DAT_005b3fe8] = 0xe40100;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0x20100;
    DAT_005b3fe8 += 2;
    DAT_005b3fe4[DAT_005b3fe8] = (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0101;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
    FUN_003c8538(0);
}
