/* NON_MATCHING: only the out-of-range entry: retail selects NULL with a predicated movcs after the index scaling, the build clears the result first (same as the smt4a twin FUN_002a1738). */
#include "common.h"
#include "script/ScriptArgs.h"

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

s32 voiceRequestPlayFile(u32 selection, u32 value, u32 option, u32 flags,
                 f32 scaleX, f32 scaleY);

/* The command entry at `index`, or NULL when the index is out of range. */
static __inline CommandEntryView *commandEntryAt(u32 index)
{
    CommandEntryView *entry = NULL;
    if (index < 4) {
        entry = &DAT_004c5634.entries[index];
    }
    return entry;
}

// Starts a command on its first frame and subsequently tests its completion state.
u32 scriptApplyParsedArgumentImpl(u32 selection, u32 value)
{
    if (scrGetCommandFrame() != 0) {
        CommandEntryView *entry = commandEntryAt(DAT_0044e128);
        if (entry->unk00 == 2) {
            return 1;
        }
    } else {
        u8 flags = DAT_004c5634.unk1E4;
        if (selection == 1) {
            flags |= 4;
        } else if (selection == 2) {
            flags = 5;
        }
        s32 result = voiceRequestPlayFile(selection, value, DAT_004c5634.unk1E5,
                                 flags, 0.707f, 0.707f);
        DAT_0044e128 = result;
        if (result == -1) {
            return 1;
        }
    }
    return 0;
}
}
