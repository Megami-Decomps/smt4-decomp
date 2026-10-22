/* NON_MATCHING: Retail ldreq r2, [pc, #96] differs from recovered ldreq r2, [pc, #108]. */
#include "common.h"

// Private view of the fallback table's 16-byte records.
struct TableEntryView {
    u16 id;             // 0x00
    u8 unk02[6];        // 0x02
    u32 unk08;          // 0x08
    u16 unk0C;          // 0x0C
    u8 unk0E[2];        // 0x0E
};

extern "C" {
extern const TableEntryView DAT_0043988c[3];
s32 jyoucyuGetTableEntry(u32 tableId);
s32 FUN_002505c0(u32 index, u32 argument, u32 entryValue, u32 flag,
                 u32 unkStack0, u32 unkStack4, u32 unkStack8);

// Dispatches at most the first matching fallback record when table 1 is unavailable.
u32 FUN_00394a80(u32 id, u32 argument, s32 indexOffset)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        for (s32 index = 0; index < 3; ++index) {
            const TableEntryView* entry = &DAT_0043988c[index];
            if (entry->id != id)
                continue;

            if (entry != 0 && entry->unk08 != 0) {
                FUN_002505c0(entry->unk0C + indexOffset, argument,
                             entry->unk08, 1, 0, 0, 0);
            }
            break;
        }
    }
    return 0;
}
}
