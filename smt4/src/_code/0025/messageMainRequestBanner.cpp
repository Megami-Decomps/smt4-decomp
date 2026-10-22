#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void messageMainRequestBanner(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk30 = 1;
    }
}

} /* extern "C" */
