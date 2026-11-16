#include "ui/MessageMain.h"
#include "event/bustupEvent/BustupSlotControl.h"
#include "script/ScriptArgs.h"
extern "C" MessageGlobalsA g_messageMain;

extern "C" {

void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
u32 scrGetCommandFrame(void);
s32 messageWindowShowOrPoll(u32 a, u32 b, u32 frame, s32 state, s32 wait, s32 flags);

/* Shows the script command's first argument as a message with message state `mode`. */
static void showMessage(s32 mode)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    messageWindowShowOrPoll(a, b, c, mode, 0, 0);
}

/* Stop the bust-up and event-texture animations, put the message window into state 21 and show the
 * script message with message state 6. */
void FUN_002a3518(s32 command, s32 target)
{
    bustupCutAnimRequestStopSlots(command);
    eventTexRequestStopAll();
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 21;
    }
    showMessage(6);
}

} /* extern "C" */
