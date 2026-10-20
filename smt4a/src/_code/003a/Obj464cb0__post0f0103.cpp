#include "classes/Obj464cb0.h"

extern "C" {
void FUN_00167ba0(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts this object and message id 0xf0103 to the command queue. */
void Obj464cb0::post0f0103()
{
    FUN_00167ba0();
    DAT_005b3fe4[DAT_005b3fe8] = (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0103;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
    FUN_003c8538(0);
}
