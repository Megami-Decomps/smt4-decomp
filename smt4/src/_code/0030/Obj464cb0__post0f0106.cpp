#include "classes/Obj464cb0.h"

extern "C" {
void FUN_002b703c(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts this object and message id 0xf0106 to the command queue. */
void Obj464cb0::post0f0106()
{
    FUN_002b703c();
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0106;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
