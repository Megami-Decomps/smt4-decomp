#include "common.h"

struct MessageWindow003a6a6c {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ u8 open;
};

struct MessageMain003a6a6c {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWindow003a6a6c *window;
};

extern "C" {

extern MessageMain003a6a6c g_messageMain;

/* Script condition: the message window is not open. */
s32 FUN_003a6a6c(void)
{
    return g_messageMain.window->open == 0;
}

} /* extern "C" */
