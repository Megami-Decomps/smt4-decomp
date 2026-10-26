#include "ui/MessageMain.h"
#include "code/Code0023_Smt4.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_002355ac(u8 value)
{
    g_messageMain.banner->unk33 = value;
}

} /* extern "C" */
