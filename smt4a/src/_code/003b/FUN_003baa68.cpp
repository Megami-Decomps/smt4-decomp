#include "ui/MessageMainA.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 scrGetCommandOwner(void);
extern u32 scrGetCommandFrame(void);
extern u32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern void bustupCutAnimRequestStopSlots(void);
extern void eventTexRequestStopAll(void);
extern void msgBoxFlagsSetBit7(u32 message);

static u32 showMessage(s32 mode, s32 wait)
{
    u32 context = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return messageWindowShowOrPoll(context, message, frame, mode, wait, 0);
}

/* Stops bust-up and event textures, shows the mode-6 message and hides the window on frame 0. */
u32 FUN_003baa68(void)
{
    MessageWindowA *window = g_messageMain.window;
    u32 result;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x15;
    }
    result = showMessage(6, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(window->box);
        window->displayEnabled = 0;
        window->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
