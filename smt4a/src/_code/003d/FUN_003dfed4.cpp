/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "common.h"
#include "gamedata/Table04Record.h"

struct EntryData {
    /* 0x00 */ u8 unk00[34];
    /* 0x22 */ u8 maximum;
};
extern "C" {
s32 FUN_002efc44(EntryData *entry, u32 index, s32 kind);
/* Returns the nonnegative amount remaining below the entry maximum. */
s32 FUN_003dfed4(u32 id, u32 index)
{
    EntryData *entry = (EntryData *)dataTable04FindById(id);
    if (!entry)
        return 0;
    s32 remaining = entry->maximum - FUN_002efc44(entry, index, 4);
    return remaining > 0 ? remaining : 1;
}
}
