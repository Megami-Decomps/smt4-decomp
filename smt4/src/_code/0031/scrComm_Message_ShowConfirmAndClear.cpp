/* NON_MATCHING: retail keeps the style constant 6 in r5 and the zero for both stack arguments and the later strb in r8 (push {r4-r8}); the build rematerialises both (sibling FUN_002ed4d4's locals do not change it). */
#include "common.h"
#include "ui/UiControl.h"

// Private views of the message state used by this function.
namespace {

struct MessageStateView {
    u32 unk00;               // 0x000
    u32 unk04;               // 0x004
    u32 unk08;               // 0x008
    u32 unk0C;               // 0x00C
    u8 unk10[0xA00];         // 0x010
    u8 unkA10;               // 0xA10
    u8 unkA11;               // 0xA11
};

struct MessageMainView {
    u32 unk00;               // 0x00
    MessageStateView* unk04; // 0x04
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

// Show the confirmation message and clear the saved message state on its first frame.
u32 scrComm_Message_ShowConfirmAndClear(void)
{
    MessageStateView* savedState = g_messageMain.unk04;
    s32 style = 6;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();

    MessageStateView* currentState = g_messageMain.unk04;
    if (currentState != 0) {
        currentState->unkA11 = 20;
    }

    first = scrGetCommandOwner();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = FUN_002866b4(first, second, third, style, 0, 0);

    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(reinterpret_cast<void *>(savedState->unk04));
        savedState->unkA10 = 0;
        savedState->unk0C |= 0x20;
    }

    return result;
}

} /* extern "C" */
