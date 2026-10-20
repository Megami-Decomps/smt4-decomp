/* Clears the LCD force-black state when its flag is set. */
#include "common.h"

extern "C" {

extern s8 DAT_00471a70;
extern u32 DAT_00471a84;

extern u32 nn_gxlow_CTR_Gpu_SetLcdForceBlack(u32, u8);

void FUN_0011d104(void)
{
    if (DAT_00471a70 != 0) {
        nn_gxlow_CTR_Gpu_SetLcdForceBlack((u32)&DAT_00471a84, 0);
    }
}

}
