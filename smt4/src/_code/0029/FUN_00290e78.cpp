#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 FUN_00290e78(void)
{
    s8 value = 0;

    if (g_messageMain.banner != NULL) {
        value = g_messageMain.banner->state;
    }
    return g_messageMain.banner == NULL || value == 0;
}

} /* extern "C" */
