/* NON_MATCHING: Retail ldr r1, [r0, r1, lsl #3]! differs from recovered add r1, r0, r1, lsl #3. */
#include "common.h"

namespace {

struct BattleEntryView {
    u32 flags;                  // 0x000
    u8 unk04[0x1EE];            // 0x004
    u16 unk1F2[75];             // 0x1F2
};

struct BattleMainStateView {
    u8 unk00[0x1FC0];           // 0x0000
    BattleEntryView* entries;   // 0x1FC0
};

}

extern "C" {
s32 scrGetArg(u32 index);
s32 scrSetResult(s32 result);
BattleMainStateView* btlGetMainState(void);

// Report whether any eligible battle entry has category four in the selected field.
u32 FUN_002ff1bc(void)
{
    const s32 fieldIndex = scrGetArg(0);

    for (s32 entryIndex = 0; entryIndex < 109; ++entryIndex) {
        BattleEntryView* entry = &btlGetMainState()->entries[entryIndex];
        const u32 flags = entry->flags;

        if ((flags & 0x10) != 0 && (flags & 1) != 0 &&
            (flags & 0x40) == 0 &&
            (entry->unk1F2[fieldIndex] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }

    scrSetResult(0);
    return 1;
}

} // extern "C"
