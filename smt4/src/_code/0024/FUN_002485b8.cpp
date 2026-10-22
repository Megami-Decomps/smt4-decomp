#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 FUN_002485b8(void)
{
    return g_messageMain.banner->unk7D != 0;
}

} /* extern "C" */
