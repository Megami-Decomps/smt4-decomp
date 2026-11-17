#include "ui/MessageMain.h"

extern "C" {

void messageMainClearBannerRequest(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk030 = 0;
    }
}

} /* extern "C" */
