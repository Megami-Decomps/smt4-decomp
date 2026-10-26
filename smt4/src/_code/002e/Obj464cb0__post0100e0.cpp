#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

static __inline void commandQueuePushPair(u32 first, u32 second)
{
    DAT_004729e0[DAT_004729e4] = first;
    DAT_004729e0[DAT_004729e4 + 1] = second;
    DAT_004729e4 += 2;
}

/* Posts two commands with the value 1 (ids 0xf0111 and 0xf0110), then this object and id 0x100e0. */
void Obj464cb0::post0100e0()
{
    cursorResetFromParam();
    commandQueuePushPair(1, 0xf0111);
    commandQueuePushPair(1, 0xf0110);
    commandQueuePushPair((u32)this, 0x100e0);
    asdModelCommandBlockRelease();
}
