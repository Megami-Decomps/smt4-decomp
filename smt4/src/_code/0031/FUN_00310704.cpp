#include "common.h"

/* A message window: only the word at 0xa38 is used here. */
struct MessageWindow158 {
    u8 unk00[0xa38];
    s32 unkA38;
};

/* The message system's window table. */
struct MessageMain158 {
    u32 unk00;
    MessageWindow158 *windows[3];
};

extern "C" MessageMain158 g_messageMain;

/* Script command: sets word 0xa38 of the three message windows to -2. */
extern "C" s32 FUN_00310704(void)
{
    g_messageMain.windows[0]->unkA38 = -2;
    g_messageMain.windows[1]->unkA38 = -2;
    g_messageMain.windows[2]->unkA38 = -2;
    return 1;
}
