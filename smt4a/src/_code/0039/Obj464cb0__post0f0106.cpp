#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts this object and message id 0xf0106 to the command queue. */
void Obj464cb0::post0f0106()
{
    cursorResetFromParam();
    DAT_005b3fe4[DAT_005b3fe8] = (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0106;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}
