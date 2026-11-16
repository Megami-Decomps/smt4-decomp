/* NON_MATCHING: the toggle's block layout now follows retail (all paths end in the shared return), but armcc if-converts the latched toggle into one call (retail keeps two arms and cross-jumps the 0x100016D call into the final arm's) and keeps the zero and 0x100016E in extra saved registers. */
#include "ui/MessageMain.h"
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct MessageControlFlags {
    u8 prefix[0xC];
    u8 latched;
    u8 suppressed;
};

extern "C" {
extern MessageGlobals g_messageMain;
extern MessageControlFlags DAT_0049381c;
s32 FUN_002c1658(s32 button, s32 mode);
s32 querySlotHasHandle(void);
u32 FUN_002bfdd4(void);
void workCommandRefreshActiveSlots(void);
void eventQueueAddUniqueIfValid(s32 event);

u32 FUN_0010edf8(u32 box)
{
    if (g_messageMain.banner->box == box)
        return 0;
    if (FUN_002c1658(0, 1) || FUN_002c1658(9, 2) || slotIsActive(6) || DAT_0049381c.suppressed ||
        (g_messageMain.state->box == box && g_messageMain.state->unkA34 == 1 && FUN_002c1658(1, 1))) {
        if (FUN_002c1658(9, 2) || slotIsActive(6))
            FUN_001175d4(1);
        if (querySlotHasHandle() && (FUN_002bfdd4() & 1))
            workCommandRefreshActiveSlots();
        if (!DAT_0049381c.suppressed)
            eventQueueAddUniqueIfValid(0x100016C);
        return 1;
    }
    if (!FUN_002c1658(9, 2) && !slotIsActive(6))
        FUN_001175d4(0);
    if (FUN_002c1658(8, 1)) {
        u8 mode = g_messageMain.state->mode;
        if (mode != 7 && mode != 8 && mode != 9) {
            if (DAT_0049381c.latched) {
                DAT_0049381c.latched = 0;
                eventQueueAddUniqueIfValid(0x100016E);
            } else {
                DAT_0049381c.latched = 1;
                eventQueueAddUniqueIfValid(0x100016D);
            }
        }
    } else if (FUN_002c1658(1, 1) && DAT_0049381c.latched) {
        DAT_0049381c.latched = 0;
        eventQueueAddUniqueIfValid(0x100016E);
    }
    return 0;
}
}
