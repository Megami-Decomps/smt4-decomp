#include "classes/Obj464cb0.h"

extern "C" {
void FUN_002b703c(void);
void FUN_002b7014(void);
void FUN_00248ae8(s32 arg);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts this object and message id 0xf0103 to the command queue. */
void Obj464cb0::post0f0103()
{
    FUN_002b703c();
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0103;
    DAT_004729e4 += 2;
    FUN_002b7014();
    FUN_00248ae8(0);
}
