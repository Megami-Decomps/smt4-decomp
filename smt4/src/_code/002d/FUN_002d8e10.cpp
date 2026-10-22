#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 FUN_002d8e10(void)
{
    u32 result;

    if ((g_messageMain.banner->unk7D == 0) || (g_messageMain.banner->unk7C != 2)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
