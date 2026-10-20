/* Clears the LCD force-black state when its flag is set. */
#include "common.h"

extern "C" {

extern s8 g_nngxState;
extern u32 g_nngxGpu;

extern u32 nn_applet_CTR_detail_InquireNotification(u32, u8);

void gxLcdClearForceBlackImpl(void)
{
    if (g_nngxState != 0) {
        nn_applet_CTR_detail_InquireNotification((u32)&g_nngxGpu, 0);
    }
}

}
