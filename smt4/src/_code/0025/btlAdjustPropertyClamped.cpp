#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

s32 FUN_00245cc0(u32 category);
u32 FUN_0023dcfc(u32 kind);

/* Changes stat `stat` of the battle entry with listed id `id` by `delta`, clamped to the stat's range (the entry is left alone when `preview` is set); returns the change. */
s32 btlAdjustPropertyClamped(s32 id, s32 stat, s32 delta, s32 preview)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry == NULL) {
        return 0;
    }
    s32 old = entry->stat[stat];
    s32 value = old + delta;

    if (value < FUN_00245cc0(stat)) {
        value = FUN_00245cc0(stat);
    } else {
        value = value > (s32)FUN_0023dcfc(stat) ? (s32)FUN_0023dcfc(stat) : value;
    }
    if (preview == 0) {
        entry->stat[stat] = value;
    }
    return value - old;
}

} /* extern "C" */
