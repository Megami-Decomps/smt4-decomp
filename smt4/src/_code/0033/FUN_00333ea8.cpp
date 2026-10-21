/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "common.h"

struct EntryData {
    /* 0x00 */ u8 unk00[34];
    /* 0x22 */ u8 maximum;
};
extern "C" {
EntryData *FUN_002ae164(u32 id);
s32 FUN_00283ebc(EntryData *entry, u32 index, s32 kind);
/* Returns the nonnegative amount remaining below the entry maximum. */
s32 FUN_00333ea8(u32 id, u32 index)
{
    EntryData *entry = FUN_002ae164(id);
    if (!entry)
        return 0;
    s32 remaining = entry->maximum - FUN_00283ebc(entry, index, 4);
    return remaining > 0 ? remaining : 1;
}
}
