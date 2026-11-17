#include "ui/MessageMainA.h"

extern "C" {

u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

static void showMessage(s32 mode)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    messageWindowShowOrPoll(a, b, c, mode, 0, 0);
}

/* Script command: puts the message state in mode 0x15 and starts messageWindowShowOrPoll with the first argument. */
void scrShowMessageWithMode(void)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x15;
    }
    showMessage(9);
}

} /* extern "C" */
