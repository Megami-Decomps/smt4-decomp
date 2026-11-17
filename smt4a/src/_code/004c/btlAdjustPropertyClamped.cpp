#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

s32 btlGetPropertyMaximum(u32 property);
s32 FUN_004c53fc(u32 category);

/* Changes property `property` of the battle entry `id` by `delta`, clamped to its range (left alone when `preview` is set); returns the change. */
s32 btlAdjustPropertyClamped(u32 id, s32 property, s32 delta, s32 preview)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry == NULL) {
        return 0;
    }
    s32 old = entry->properties[property];
    s32 value = old + delta;

    if (value < FUN_004c53fc(property)) {
        value = FUN_004c53fc(property);
    } else {
        value = value > btlGetPropertyMaximum(property) ? btlGetPropertyMaximum(property) : value;
    }
    if (preview == 0) {
        entry->properties[property] = value;
    }
    return value - old;
}

} /* extern "C" */
