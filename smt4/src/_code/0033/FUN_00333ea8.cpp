#include "common.h"
#include "gamedata/DataTable40.h"

struct EntryData {
    /* 0x00 */ u8 unk00[34];
    /* 0x22 */ u8 maximum;
};
extern "C" {
s32 FUN_00283ebc(EntryData *entry, u32 index, s32 kind);
/* Returns the nonnegative amount remaining below the entry maximum. */
s32 FUN_00333ea8(u32 id, u32 index)
{
    EntryData *entry = reinterpret_cast<EntryData *>(dataTable40FindById(id));
    if (entry == NULL)
        return 0;
    s32 maximum = entry->maximum;
    s32 remaining = maximum - FUN_00283ebc(entry, index, 4);
    if (remaining <= 0)
        return 1;
    return remaining;
}
}
