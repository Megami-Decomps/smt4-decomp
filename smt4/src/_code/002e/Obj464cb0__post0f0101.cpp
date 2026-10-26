#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_00248ae8(s32 arg);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

static void commandQueuePushPair(u32 first, u32 second)
{
    DAT_004729e0[DAT_004729e4] = first;
    DAT_004729e0[DAT_004729e4 + 1] = second;
    DAT_004729e4 += 2;
}

/* Posts the value 0xe40100 with id 0x20100, then this object and id 0xf0101. */
void Obj464cb0::post0f0101()
{
    cursorResetFromParam();
    commandQueuePushPair(0xe40100, 0x20100);
    commandQueuePushPair((u32)this, 0xf0101);
    asdModelCommandBlockRelease();
    FUN_00248ae8(0);
}
