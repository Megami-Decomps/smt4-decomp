#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts this object and message id 0xf0104 to the command queue. */
void Obj464cb0::post0f0104()
{
    cursorResetFromParam();
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0104;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
