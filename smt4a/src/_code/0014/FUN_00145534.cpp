/* NON_MATCHING: message advance, slot refresh and display toggle restored; only the saved registers holding module globals and input flags are exchanged. */
#include "ui/MessageMain.h"

namespace {
struct MessageInputFlags {
    u8 prefix[0xC];
    u8 hidden;
    u8 suppressAdvanceSound;
};
}
extern "C" {
extern MessageGlobalsA g_messageMain;
extern MessageInputFlags DAT_005e2040;
s32 FUN_001517b4(s32 key, s32 mode);
s32 slotIsActive(s32 key);
s32 querySlotHasHandle();
u32 FUN_00152f44();
void workCommandRefreshActiveSlots();
void eventQueueAddUniqueIfValid(u32 event);

// Handle message advance, active-slot refresh and display visibility toggling.
u32 FUN_00145534(u32 messageId)
{
    if (messageObjectGetBox(reinterpret_cast<MessageObject *>(g_messageMain.panel)) == messageId)
        return 0;
    if (FUN_001517b4(0, 1) != 0 || FUN_001517b4(9, 2) != 0 ||
        slotIsActive(6) != 0 || DAT_005e2040.suppressAdvanceSound != 0 ||
        (g_messageMain.state->box == messageId && g_messageMain.state->unk19E8 == 1 &&
            FUN_001517b4(1, 1) != 0)) {
        u8 queueSound = 1;
        if (FUN_001517b4(9, 2) != 0 || slotIsActive(6) != 0)
            FUN_0015059c(1);
        if (querySlotHasHandle() != 0 && (FUN_00152f44() & 1) != 0) {
            workCommandRefreshActiveSlots();
            queueSound = 0;
        }
        if ((u8)(queueSound & ~(DAT_005e2040.suppressAdvanceSound != 0)) != 0)
            eventQueueAddUniqueIfValid(0x1000226);
        return 1;
    }
    if (FUN_001517b4(9, 2) == 0 && slotIsActive(6) == 0)
        FUN_0015059c(0);
    if (FUN_001517b4(8, 1) != 0) {
        u8 mode = g_messageMain.state->mode;
        if (mode == 7 || mode == 8 || mode == 9)
            return 0;
        u8 wasHidden = DAT_005e2040.hidden;
        DAT_005e2040.hidden = wasHidden == 0;
        eventQueueAddUniqueIfValid(wasHidden == 0 ? 0x100020E : 0x100020F);
    } else {
        FUN_001517b4(1, 1);
    }
    return 0;
}
}
