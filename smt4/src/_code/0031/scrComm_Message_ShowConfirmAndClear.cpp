#include "common.h"
#include "ui/UiControl.h"

// Private views of the message state used by this function.
namespace {

struct MessageStateView {
    u32 unk00;               // 0x000
    u32 message;             // 0x004: message box object
    u32 unk08;               // 0x008
    u32 flags;               // 0x00C
    u8 unk10[0xA00];         // 0x010
    u8 unkA10;               // 0xA10
    u8 mode;                 // 0xA11
};

struct MessageMainView {
    u32 unk00;               // 0x00
    MessageStateView* state; // 0x04
};

}

extern "C" {
extern MessageMainView g_messageMain;

void bustupCutAnimRequestStopSlots(void);
void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32 message, u32 argument, s32 frame,
                 s32 mode, s32 option0, s32 option1);

static u32 showMessage(s32 mode, s32 wait)
{
    u32 owner = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    return FUN_002866b4(owner, message, frame, mode, wait, 0);
}

// Show the confirmation message and clear the saved message state on its first frame.
u32 scrComm_Message_ShowConfirmAndClear(void)
{
    MessageStateView* savedState = g_messageMain.state;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (g_messageMain.state != NULL) {
        g_messageMain.state->mode = 20;
    }
    u32 result = showMessage(6, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(reinterpret_cast<void *>(savedState->message));
        savedState->unkA10 = 0;
        savedState->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
