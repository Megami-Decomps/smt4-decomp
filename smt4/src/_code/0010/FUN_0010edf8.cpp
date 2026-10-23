/* NON_MATCHING: zero/event constants occupy extra saved registers and toggle-event return blocks merge differently. */
#include "ui/MessageMain.h"

struct MessageControlFlags {
    u8 prefix[0xC];
    u8 latched;
    u8 suppressed;
};

extern "C" {
extern MessageGlobals g_messageMain;
extern MessageControlFlags DAT_0049381c;
s32 FUN_002c1658(u32, u32);
s32 FUN_002c15fc(u32);
void FUN_001175d4(u32);
s32 querySlotHasHandle(void);
u32 FUN_002bfdd4(void);
void workCommandRefreshActiveSlots(void);
void eventQueueAddUniqueIfValid(u32);

u32 FUN_0010edf8(u32 box)
{
    if (g_messageMain.banner->box == box)
        return 0;
    if (FUN_002c1658(0, 1) || FUN_002c1658(9, 2) || FUN_002c15fc(6) || DAT_0049381c.suppressed ||
        (g_messageMain.state->box == box && g_messageMain.state->unkA34 == 1 && FUN_002c1658(1, 1))) {
        if (FUN_002c1658(9, 2) || FUN_002c15fc(6))
            FUN_001175d4(1);
        if (querySlotHasHandle() && (FUN_002bfdd4() & 1))
            workCommandRefreshActiveSlots();
        if (!DAT_0049381c.suppressed)
            eventQueueAddUniqueIfValid(0x100016C);
        return 1;
    }
    if (!FUN_002c1658(9, 2) && !FUN_002c15fc(6))
        FUN_001175d4(0);
    if (FUN_002c1658(8, 1)) {
        u8 mode = g_messageMain.state->mode;
        if (mode == 7 || mode == 8 || mode == 9)
            return 0;
        if (DAT_0049381c.latched) {
            DAT_0049381c.latched = 0;
            eventQueueAddUniqueIfValid(0x100016E);
            return 0;
        }
        DAT_0049381c.latched = 1;
        eventQueueAddUniqueIfValid(0x100016D);
    } else if (FUN_002c1658(1, 1) && DAT_0049381c.latched) {
        DAT_0049381c.latched = 0;
        eventQueueAddUniqueIfValid(0x100016E);
    }
    return 0;
}
}
