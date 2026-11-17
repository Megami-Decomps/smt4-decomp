/* NON_MATCHING: all but the g_messageMain base register match (showMessage helper as in scrComm_Message_ShowConfirmWait): retail loads &g_messageMain into the dead frame result r0 after the compare, this build into r1 before it. */
#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {
void messageWindowShowOrPoll(u32 context, u32 message, s32 frame, s32 mode, s32 wait, s32 flags);

static void showMessage(s32 mode, s32 wait)
{
    u32 context = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    messageWindowShowOrPoll(context, message, frame, mode, wait, 0);
}

/* Script command: locks the banner panel on the first frame, puts the message in display mode 0x14
 * and shows a confirm message, waiting for it. */
void scrComm_Message_ShowConfirmWaitLock(void)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessageWindow *panel = g_messageMain.banner;
        if (panel != 0) {
            panel->unk030 = 1;
        }
        panel->unk031 = 1;
    }
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x14;
    }
    showMessage(6, 1);
}
}
