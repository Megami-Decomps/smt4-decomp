#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

// Private view of the 16-byte records referenced by this function.
namespace {

struct TableEntryView {
    u16 id;             // 0x00
    u8 unk02[6];        // 0x02
    u32 unk08;          // 0x08
    u16 unk0C;          // 0x0C
    u8 unk0E[2];        // 0x0E
};

}

extern "C" {
extern const TableEntryView DAT_0057a4c4[3];
s32 FUN_004fb43c(u32 index, u32 argument, u32 entryValue, u32 flag,
                 u32 unkStack0, u32 unkStack4, u32 unkStack8);

static __inline const TableEntryView* findFallbackEntry(u32 id)
{
    s32 index = 0;
    while (index < 3) {
        const TableEntryView* entry = &DAT_0057a4c4[index];
        if (entry->id == id) {
            return entry;
        }
        ++index;
    }
    return 0;
}

// Dispatches the first matching fallback entry when table 1 is unavailable.
u32 FUN_0047f138(u32 id, u32 argument, s32 indexOffset)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        const TableEntryView* entry = findFallbackEntry(id);
        if (entry != 0 && entry->unk08 != 0) {
            FUN_004fb43c(entry->unk0C + indexOffset, argument, entry->unk08, 1, 0, 0, 0);
        }
    }
    return 0;
}
}
