/* NON_MATCHING: the toggle's block layout now follows retail (all paths end in the shared return), but armcc if-converts the latched toggle into one call (retail keeps two arms and cross-jumps the 0x100016D call into the final arm's) and keeps the zero and 0x100016E in extra saved registers. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code002b_Smt4.h"
#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"
#include "ui/MessageControl.h"
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
s32 inputQueryButtonState(s32 button, s32 mode);
s32 querySlotHasHandle(void);
void workCommandRefreshActiveSlots(void);

u32 messageAdvanceInputForBox(u32 box)
{
    if (g_messageMain.banner->box == box)
        return 0;
    if (inputQueryButtonState(0, 1) || inputQueryButtonState(9, 2) || slotIsActive(6) || g_messageControl.suppressed ||
        (g_messageMain.window->box == box && g_messageMain.window->unkA34 == 1 && inputQueryButtonState(1, 1))) {
        if (inputQueryButtonState(9, 2) || slotIsActive(6))
            FUN_001175d4(1);
        if (querySlotHasHandle() && (messageVoiceFlagsGet() & 1))
            workCommandRefreshActiveSlots();
        if (!g_messageControl.suppressed)
            eventQueueAddUniqueIfValid(0x100016C);
        return 1;
    }
    if (!inputQueryButtonState(9, 2) && !slotIsActive(6))
        FUN_001175d4(0);
    if (inputQueryButtonState(8, 1)) {
        u8 mode = g_messageMain.window->mode;
        if (mode != 7 && mode != 8 && mode != 9) {
            if (g_messageControl.latched) {
                g_messageControl.latched = 0;
                eventQueueAddUniqueIfValid(0x100016E);
            } else {
                g_messageControl.latched = 1;
                eventQueueAddUniqueIfValid(0x100016D);
            }
        }
    } else if (inputQueryButtonState(1, 1) && g_messageControl.latched) {
        g_messageControl.latched = 0;
        eventQueueAddUniqueIfValid(0x100016E);
    }
    return 0;
}
}
