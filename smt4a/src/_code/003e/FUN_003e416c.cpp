/* NON_MATCHING: Retail add r0, r4, r0, lsr #29 differs from recovered add r1, r4, r0, lsr #29. */
#include "common.h"
#include "gamedata/DataTableAccess.h"

struct Entry416cView {
    u8 unk00[0x26]; // 0x00
    u16 unk26;     // 0x26
};

struct Area2D68View {
    u8 unk00[0x12]; // 0x00
    u8 unk12[0x12]; // 0x12
};

extern "C" {
Area2D68View* gameDataBlockGetArea2D68(void);
s32 FUN_003e4230(s32 entryIndex);

// Set both area bit arrays for present entries with a zero field and status other than 2.
void FUN_003e416c(void)
{
    Area2D68View* area = gameDataBlockGetArea2D68();
    for (s32 entryIndex = 1; entryIndex < 0x8du; ++entryIndex) {
        Entry416cView* entry = (Entry416cView*)dataFindKeyedRecordWithOverrides(entryIndex);
        if (entry == 0) {
            continue;
        }
        if (entry->unk26 != 0) {
            continue;
        }
        if (FUN_003e4230(entryIndex) == 2) {
            continue;
        }

        const s32 byteIndex = entryIndex / 8;
        const u32 mask = 1u << (entryIndex % 8);
        area->unk00[byteIndex] |= mask;
        area->unk12[byteIndex] |= mask;
    }
}
}
