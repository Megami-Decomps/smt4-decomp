#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {

void eventTexRequestStopAll(void);
void bustupCutAnimRequestStopSlots(void);
void messageWindowShowOrPoll(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);
u32 scrGetCommandOwner(void);
u32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);

/* Sets the message window's display mode (when there is one) and shows a message of the given kind for the
 * unit scrGetCommandOwner names, using script argument 0 and the command frame. */
static void showMessage(s32 kind)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x14;
    }
    u32 unit = scrGetCommandOwner();
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    messageWindowShowOrPoll(unit, arg, value, kind, 0, 0);
}

void scrComm_Message_ShowConfirm(void)
{
    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    showMessage(6);
}

} /* extern "C" */
