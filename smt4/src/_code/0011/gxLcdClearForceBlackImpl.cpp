/* Clears the LCD force-black state when its flag is set. */
#include "common.h"

extern "C" {

extern s8 g_nngxState;
extern u32 g_nngxGpu;

extern u32 nn_gxlow_CTR_Gpu_SetLcdForceBlack(u32, u8);

void gxLcdClearForceBlackImpl(void)
{
    if (g_nngxState != 0) {
        nn_gxlow_CTR_Gpu_SetLcdForceBlack((u32)&g_nngxGpu, 0);
    }
}

}
