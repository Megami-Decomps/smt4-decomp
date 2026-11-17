#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BtlGlobals.h"

extern "C" {


/* Stores `value` at index `index` of the value table of the battle entry with the listed id `id`, if it exists. */
void FUN_00255180(u32 id, s32 index, s32 value)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        entry->stat[index] = value;
    }
}

} /* extern "C" */
