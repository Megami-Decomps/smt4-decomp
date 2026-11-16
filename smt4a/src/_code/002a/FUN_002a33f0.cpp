#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {

extern MessageGlobalsA g_messageMain;
s32 FUN_0021bdac(u32 owner, u32 text, u32 frame, s32 mode, s32 wait, s32 flags);

/* Shows the script command's first argument as a message with message state `mode`. */
static void showMessage(s32 mode, s32 wait)
{
    u32 owner = scrGetCommandOwner();
    u32 text = scrGetArg(0);
    u32 frame = scrGetCommandFrame();

    FUN_0021bdac(owner, text, frame, mode, wait, 0);
}

/* Script command: resets the message mode, puts the message window in display mode 0x15 and shows
 * the first argument with message state 6, waiting for it. */
void FUN_002a33f0(void)
{
    scrCommMessageSetMode(0);
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x15;
    }
    showMessage(6, 1);
}

} /* extern "C" */
