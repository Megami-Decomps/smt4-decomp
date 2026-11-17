#include "ui/MessageMainA.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets the message window's flag at 0x34 from argument zero. */
s32 FUN_003a6b98(void)
{
    MessageWindowA *window = g_messageMain.window;
    window->unk0034 = scrGetArg(0) != 0;
    return 1;
}

} /* extern "C" */
