/* NON_MATCHING: retail materialises each property id right before its maximum/minimum call (the inlined test here hoists it), lays the -5/-6/-7 tests out in the other order with the opposite branch sense, and assigns the change arguments other registers. */
#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "code/Code004c_Smt4a.h"

struct BtlEntryRef {
    u8 unk00[8];
    s16 entry;      // 0x08
};


/* Whether a stat-change request (`change`) can take effect on a property whose current value is `value`. */
static __inline bool statChangeApplies(u32 property, s32 change, s16 value)
{
    bool applies = false;
    if (change == -7) {
        if (value != 0)
            applies = true;
    } else if (change == -6) {
        if (value < 0)
            applies = true;
    } else if (change == -5) {
        if (value > 0)
            applies = true;
    } else if (change > 0) {
        if (value < (s16)btlGetPropertyMaximum(property))
            applies = true;
    } else if (change >= 0) {
        applies = true;
    } else if ((s16)mapCategoryToDestinationGroup(property) < value) {
        applies = true;
    }
    return applies;
}

/* Returns whether none of the requested stat changes (properties 7, 8, 10, 11) would have any effect. */
extern "C" u8 FUN_003ff22c(BtlEntryRef *target, s32 change7, s32 change8, s32 change10, s32 change11, s32 requireNonZero)
{
    u32 wanted = 0;
    if (change7 != 0)
        wanted = 8;
    if (change8 != 0)
        wanted |= 0x10;
    if (change10 != 0)
        wanted |= 0x20;
    if (change11 != 0)
        wanted |= 0x40;
    if (requireNonZero != 0) {
        wanted |= 8;
        wanted |= 0x10;
        wanted |= 0x20;
        wanted |= 0x40;
    }
    u32 applicable = 0;
    if ((wanted & 8) != 0) {
        s16 value = btlFindEntryValue(target->entry, 7);
        if (statChangeApplies(7, change7, value) && (requireNonZero == 0 || value != 0))
            applicable = 8;
    }
    if ((wanted & 0x10) != 0) {
        s16 value = btlFindEntryValue(target->entry, 8);
        if (statChangeApplies(8, change8, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x10;
    }
    if ((wanted & 0x20) != 0) {
        s16 value = btlFindEntryValue(target->entry, 10);
        if (statChangeApplies(10, change10, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x20;
    }
    if ((wanted & 0x40) != 0) {
        s16 value = btlFindEntryValue(target->entry, 11);
        if (statChangeApplies(11, change11, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x40;
    }
    return applicable == 0;
}
