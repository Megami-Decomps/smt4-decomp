#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

static __inline void commandQueuePushPair(u32 first, u32 second)
{
    DAT_005b3fe4[DAT_005b3fe8] = first;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = second;
    DAT_005b3fe8 += 2;
}

/* Posts the value 0xe40100 with id 0x20100, then this object and id 0xf0101. */
void Obj464cb0::post0f0101()
{
    cursorResetFromParam();
    commandQueuePushPair(0xe40100, 0x20100);
    commandQueuePushPair((u32)this, 0xf0101);
    asdModelCommandBlockRelease();
    FUN_003c8538(0);
}
