#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
u32 messageWindowShowOrPoll(u32 owner, u32 text, u32 frame, s32 mode, s32 wait, s32 flags);

/* Shows the script command's first argument as a message with message state `mode`. */
static u32 showMessage(s32 mode, s32 wait)
{
    u32 owner = scrGetCommandOwner();
    u32 text = scrGetArg(0);
    u32 frame = scrGetCommandFrame();

    return messageWindowShowOrPoll(owner, text, frame, mode, wait, 0);
}

/* Script command: resets the message mode, on the first frame raises both panel flags, puts the
 * message window in display mode 0x15 and shows the first argument with message state 6, waiting for it. */
u32 FUN_0031a29c(void)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        if (g_messageMain.panel != NULL) {
            g_messageMain.panel->unk30 = 1;
        }
        g_messageMain.panel->unk31 = 1;
    }
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x15;
    }
    return showMessage(6, 1);
}
}
