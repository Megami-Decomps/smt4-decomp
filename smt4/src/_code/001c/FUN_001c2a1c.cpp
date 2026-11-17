#include "ui/MessageMain.h"

extern "C" {

u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

static void showMessage(MessageMain *messages, s32 mode, s32 kind)
{
    u32 a;
    u32 b;
    u32 c;

    if (messages->window != NULL) {
        messages->window->displayMode = mode;
    }
    a = scrGetCommandOwner();
    b = scrGetArg(0);
    c = scrGetCommandFrame();

    messageWindowShowOrPoll(a, b, c, kind, 0, 0);
}

/* Script command: puts the message window in display mode 0x14 and starts messageWindowShowOrPoll with the first argument. */
void FUN_001c2a1c(void)
{
    showMessage(&g_messageMain, 0x14, 7);
}

} /* extern "C" */
