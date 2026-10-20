#include "classes/Obj464cb0.h"

extern "C" {
void FUN_00167ba0(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts this object and message id 0x10040 to the command queue. */
void Obj464cb0::post010040()
{
    FUN_00167ba0();
    DAT_005b3fe4[DAT_005b3fe8] = (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0x10040;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}
