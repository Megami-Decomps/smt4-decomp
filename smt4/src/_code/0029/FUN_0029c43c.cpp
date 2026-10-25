#include "ui/MessageMain.h"
#include "util/CalleeContracts.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 FUN_0029c43c(u32 value, u8 flag)
{
    MessagePanel *target = g_messageMain.banner;

    g_messageMain.banner->unk7C = 3;
    target->unk70 = value;
    target->unk74 = value;
    target->unk81 = flag;
    target->unk64 = 0;
    return 1;
}

} /* extern "C" */
