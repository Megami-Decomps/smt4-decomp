/* NON_MATCHING: global-base loads are scheduled after the frame comparison and command index/base register roles differ. */
#include "common.h"

struct CommandEntryView {
    u8 unk00;       // 0x00
    u8 unk01[0x77]; // 0x01
};

struct CommandStateView {
    CommandEntryView entries[4]; // 0x000
    u8 unk1E0[4];                // 0x1E0
    u8 unk1E4;                   // 0x1E4
    u8 unk1E5;                   // 0x1E5
};

extern "C" {
extern u32 DAT_0044e128;
extern CommandStateView DAT_004c5634;

s32 scrGetCommandFrame(void);
s32 FUN_002bfc24(u32 selection, u32 value, u32 option, u32 flags,
                 f32 scaleX, f32 scaleY);

// Starts a command on its first frame and subsequently tests its completion state.
u32 FUN_001eb398(u32 selection, u32 value)
{
    if (scrGetCommandFrame() != 0) {
        u32 commandIndex = DAT_0044e128;
        CommandEntryView* entry = commandIndex < 4
            ? &DAT_004c5634.entries[commandIndex]
            : 0;
        return entry->unk00 == 2;
    }

    u32 flags = DAT_004c5634.unk1E4;
    if (selection == 1) {
        flags |= 4;
    } else if (selection == 2) {
        flags = 5;
    }

    s32 result = FUN_002bfc24(selection, value, DAT_004c5634.unk1E5,
                             flags, 0.707f, 0.707f);
    DAT_0044e128 = result;
    return result == -1;
}
}
