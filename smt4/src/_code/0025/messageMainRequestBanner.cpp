#include "ui/MessageMain.h"

extern "C" {

void messageMainRequestBanner(void)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk030 = 1;
    }
}

} /* extern "C" */
