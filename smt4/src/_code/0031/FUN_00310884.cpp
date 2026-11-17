#include "ui/MessageMain.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets the message window's byte 0x34 from argument zero. */
s32 FUN_00310884(void)
{
    MessageWindow *window = g_messageMain.window;
    window->unk034 = scrGetArg(0) != 0;
    return 1;
}

} /* extern "C" */
