#include "common.h"

struct MessageWindow003107dc {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 open;
};

struct MessageMain003107dc {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWindow003107dc *window;
};

extern "C" {

extern MessageMain003107dc g_messageMain;

/* Script condition: the message window is not open. */
s32 FUN_003107dc(void)
{
    return g_messageMain.window->open == 0;
}

} /* extern "C" */
