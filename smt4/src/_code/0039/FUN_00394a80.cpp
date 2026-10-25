/* NON_MATCHING: retail materialises the zero for the three zero stack arguments in r3 right after the table test and compares the id through ip; the build zeroes r0 later and uses r3 for the id. */
#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

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
s32 FUN_002505c0(u32 index, u32 argument, u32 entryValue, u32 flag,
                 u32 unkStack0, u32 unkStack4, u32 unkStack8);

static __inline const TableEntryView* findFallbackEntry(u32 id)
{
    for (s32 index = 0; index < 3; ++index) {
        const TableEntryView* entry = &DAT_0043988c[index];
        if (entry->id == id) {
            return entry;
        }
    }
    return 0;
}

// Dispatches the first matching fallback entry when table 1 is unavailable.
u32 FUN_00394a80(u32 id, u32 argument, s32 indexOffset)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        const TableEntryView* entry = findFallbackEntry(id);
        if (entry != 0 && entry->unk08 != 0) {
            FUN_002505c0(entry->unk0C + indexOffset, argument, entry->unk08, 1, 0, 0, 0);
        }
    }
    return 0;
}
}
