#include "ui/MessageMain.h"
#include "shop/shopMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 messageBannerIsIdle(void)
{
    s8 value = 0;

    if (g_messageMain.banner != NULL) {
        value = g_messageMain.banner->state;
    }
    return g_messageMain.banner == NULL || value == 0;
}

} /* extern "C" */
