#include "ui/MessageMain.h"
#include "ui/UiControl.h"

extern "C" {

void bustupCutAnimRequestStopSlots(void);
void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
u32 messageWindowShowOrPoll(u32 message, u32 argument, s32 frame,
                 s32 mode, s32 option0, s32 option1);

static u32 showMessage(s32 mode, s32 wait)
{
    u32 owner = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    return messageWindowShowOrPoll(owner, message, frame, mode, wait, 0);
}

// Show the confirmation message and clear the saved message window on its first frame.
u32 scrComm_Message_ShowConfirmAndClear(void)
{
    MessageWindow *savedWindow = g_messageMain.window;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 20;
    }
    u32 result = showMessage(6, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(reinterpret_cast<void *>(savedWindow->box));
        savedWindow->displayEnabled = 0;
        savedWindow->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
