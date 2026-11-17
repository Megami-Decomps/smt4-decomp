#include "ui/MessageMain.h"

extern "C" {

extern u16 scrGetArg(u32 index);

u32 FUN_002e1b74(void)
{
    MessageWindow *banner = g_messageMain.banner;
    u16 value = scrGetArg(0);

    banner->unk098 = value;
    banner->unk084 = 10;
    banner->panelState = 3;
    return 1;
}

} /* extern "C" */
