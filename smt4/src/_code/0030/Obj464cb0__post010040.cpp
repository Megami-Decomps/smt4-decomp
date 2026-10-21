#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts this object and message id 0x10040 to the command queue. */
void Obj464cb0::post010040()
{
    cursorResetFromParam();
    DAT_004729e0[DAT_004729e4] = (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0x10040;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
