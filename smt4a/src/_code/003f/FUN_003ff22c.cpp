/* NON_MATCHING: near miss: retail inlines the per-property change test as branch chains jumping to a shared set-bit tail (no bool result); register assignment differs. */
#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BtlEntryRef {
    u8 unk00[8];
    s16 entry;      // 0x08
};

extern "C" {
s16 btlGetPropertyMaximum(s32 property);
s16 FUN_004c53fc(s32 property);
}

/* Whether a stat-change request (`change`) can take effect on a property whose current value is `value`. */
static __inline bool statChangeApplies(s32 property, s32 change, s32 value)
{
    if (change == -7)
        return value != 0;
    if (change == -6)
        return value < 0;
    if (change == -5)
        return value > 0;
    if (change >= 1)
        return value < btlGetPropertyMaximum(property);
    if (change >= 0)
        return true;
    return FUN_004c53fc(property) < value;
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
    if (requireNonZero != 0)
        wanted |= 0x78;
    u32 applicable = 0;
    if ((wanted & 8) != 0) {
        s32 value = btlFindEntryValue(target->entry, 7);
        if (statChangeApplies(7, change7, value) && (requireNonZero == 0 || value != 0))
            applicable = 8;
    }
    if ((wanted & 0x10) != 0) {
        s32 value = btlFindEntryValue(target->entry, 8);
        if (statChangeApplies(8, change8, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x10;
    }
    if ((wanted & 0x20) != 0) {
        s32 value = btlFindEntryValue(target->entry, 10);
        if (statChangeApplies(10, change10, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x20;
    }
    if ((wanted & 0x40) != 0) {
        s32 value = btlFindEntryValue(target->entry, 11);
        if (statChangeApplies(11, change11, value) && (requireNonZero == 0 || value != 0))
            applicable |= 0x40;
    }
    return applicable == 0;
}
