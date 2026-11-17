#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {

s32 scrCommMessageSetMode(s32 arg);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 mode, s32 wait, s32 f);

static void showMessage(s32 mode, s32 wait)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    messageWindowShowOrPoll(a, b, c, mode, wait, 0);
}

/* Script command: clears the message state, puts it in mode 0x14 and shows a confirm message, waiting for it. */
void scrComm_Message_ShowConfirmWait(void)
{
    scrCommMessageSetMode(0);
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x14;
    }
    showMessage(6, 1);
}

} /* extern "C" */
