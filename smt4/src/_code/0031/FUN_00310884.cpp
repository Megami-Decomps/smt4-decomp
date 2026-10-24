#include "common.h"

struct MessageWindow00310884 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 flag;
};

struct MessageMain00310884 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageWindow00310884 *window;
};

extern "C" {

extern MessageMain00310884 g_messageMain;

s32 scrGetArg(u32 index);

/* Script command: sets the message window's flag at 0x34 from argument zero. */
s32 FUN_00310884(void)
{
    MessageWindow00310884 *window = g_messageMain.window;
    window->flag = scrGetArg(0) != 0;
    return 1;
}

} /* extern "C" */
