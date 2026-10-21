/* NON_MATCHING: same stores; retail hoists all the pool loads (queue pointer, count address, ids) before the first store, armcc loads them lazily here. */
#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts two commands with the value 1 (ids 0xf0111 and 0xf0110), then this object and id 0x100e0. */
void Obj464cb0::post0100e0()
{
    cursorResetFromParam();
    DAT_004729e0[DAT_004729e4] = 1;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0111;
    DAT_004729e4 += 2;
    DAT_004729e0[DAT_004729e4] = 1;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0110;
    DAT_004729e4 += 2;
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0x100e0;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
