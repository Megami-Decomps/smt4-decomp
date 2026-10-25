/* NON_MATCHING: Retail push {r4, r5, r6, r7, r8, lr} differs from recovered push {r4, r5, r6, r7, lr}. */
#include "common.h"
#include "util/MsgBoxFlagsSetBit7.h"

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
u32 FUN_002865f8(void);
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32 message, u32 argument, s32 frame,
                 s32 mode, s32 option0, s32 option1);

// Show the confirmation message and clear the saved message state on its first frame.
u32 scrComm_Message_ShowConfirmAndClear(void)
{
    MessageStateView* savedState = g_messageMain.unk04;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();

    MessageStateView* currentState = g_messageMain.unk04;
    if (currentState != 0) {
        currentState->unkA11 = 20;
    }

    u32 message = FUN_002865f8();
    u32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    u32 result = FUN_002866b4(message, argument, frame, 6, 0, 0);

    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(reinterpret_cast<void *>(savedState->unk04));
        savedState->unkA10 = 0;
        savedState->unk0C |= 0x20;
    }

    return result;
}
}
