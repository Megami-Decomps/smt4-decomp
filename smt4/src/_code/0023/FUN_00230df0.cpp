#include "ui/MessageMain.h"
#include "code/Code0023.h"

extern "C" {

void FUN_00230df0(u8 value)
{
    g_messageMain.banner->unk032 = value;
}

} /* extern "C" */
