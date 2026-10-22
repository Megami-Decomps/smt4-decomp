#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void messageMainClearBannerRequest(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk30 = 0;
    }
}

} /* extern "C" */
