#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {
extern MessageGlobalsA g_messageMain;

void FUN_0021bdac(u32 a, u32 b, u32 frame, u8 state, int wait, int flags);

static void showMessage(u8 mode, s32 wait)
{
    u32 owner = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(owner, message, frame, mode, wait, 0);
}

/* Show a script message for a quest state, locking the message window first when no command frame is active. */
void FUN_0039a6a4(u8 state)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessagePanelA *target = g_messageMain.panel;
        if (target != NULL) {
            target->unk30 = 1;
        }
        target->unk31 = 1;
    }
    showMessage(state, 1);
}

} /* extern "C" */
