#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 FUN_002cdc00(void)
{
    return g_messageMain.banner->unk7E != 0;
}

} /* extern "C" */
