#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_00230df0(u8 value)
{
    g_messageMain.banner->unk32 = value;
}

} /* extern "C" */
