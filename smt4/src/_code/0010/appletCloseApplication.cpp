#include "common.h"

extern "C" {

extern u32 g_appletCloseReason;

u32 nn_applet_CTR_detail_CloseApplication(u8 *param, u32 paramSize, u32 handle);

void appletCloseApplication(void)
{
    nn_applet_CTR_detail_CloseApplication(NULL, 0, g_appletCloseReason);
}

} /* extern "C" */
