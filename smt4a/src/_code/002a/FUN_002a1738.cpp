/* NON_MATCHING: The shared slot-table address is kept in r0 instead of r1 across the initial-frame branch. */
#include "common.h"

namespace {
struct ScriptWaitSlot {
    /* 0x00 */ u8 state;
    /* 0x01 */ u8 unk01[0x77];
};
struct ScriptWaitSlots {
    /* 0x000 */ ScriptWaitSlot slots[4];
    /* 0x1E0 */ u8 unk1E0[4];
    /* 0x1E4 */ u8 flags;
    /* 0x1E5 */ u8 mode;
};
}
extern "C" {
extern u32 DAT_00588fcc;
extern ScriptWaitSlots DAT_0061978c;
u32 scrGetCommandFrame(void);
u32 FUN_001628c0(u32 slot, u32 mode, u32 flags, s32 enabled, f32 first, f32 second);

/* Starts the selected asynchronous slot on the first script frame, then waits for completion. */
u32 FUN_002a1738(s32 mode, u32 slot)
{
    if (scrGetCommandFrame() != 0) {
        ScriptWaitSlot *work = DAT_00588fcc < 4 ? &DAT_0061978c.slots[DAT_00588fcc] : NULL;
        if (work->state == 2) {
            return 1;
        }
    } else {
        u8 flags = DAT_0061978c.flags;
        if (mode == 1) {
            flags |= 4;
        } else if (mode == 2) {
            flags = 5;
        }
        u32 index = FUN_001628c0(slot, DAT_0061978c.mode, flags, 1, 0.707f, 0.707f);
        DAT_00588fcc = index;
        if (index == 0xFFFFFFFF) {
            return 1;
        }
    }
    return 0;
}
}
