#include "common.h"

struct MessageWindow36db48 {
    u8 unk00[0x8d];
    u8 busy;
};

struct MessageMain36db48 {
    u8 unk00[8];
    MessageWindow36db48 *window;
};

extern "C" MessageMain36db48 g_messageMain;

/* True when the message window is not busy. */
extern "C" s32 FUN_0036db48(void)
{
    return g_messageMain.window->busy == 0;
}
