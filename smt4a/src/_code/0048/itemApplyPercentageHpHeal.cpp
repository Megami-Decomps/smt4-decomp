#include "common.h"

extern "C" {

#define ITEM_FLAG_HEALS_HP 0x20

/* A party member: only its HP and id are read here. */
typedef struct HealTarget {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 hp;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ u16 id;
} HealTarget;

/* An item record: only its HP-heal fields are read here. */
typedef struct HealItem {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u16 healPercent;
    /* 0x4A */ u8 unk4A[0x1E];
    /* 0x68 */ u32 flags;
} HealItem;

HealItem *dataTable8FindRecord(u32 itemId);
s32 FUN_004ccbf0(u16 id);

/* Applies item `itemId`'s percentage HP heal to `target` (only checks when `checkOnly`); returns 0
 * when the item would heal, 1 when it has no effect. */
u32 itemApplyPercentageHpHeal(HealTarget *target, u32 itemId, s32 checkOnly)
{
    HealItem *item;
    u32 noEffect;

    if (target == NULL) {
        return 1;
    }
    item = dataTable8FindRecord(itemId);
    if (item == NULL || !(item->flags & ITEM_FLAG_HEALS_HP)) {
        return 1;
    }
    noEffect = 1;
    if (item->healPercent != 0 && FUN_004ccbf0(target->id) != target->hp) {
        if (!checkOnly) {
            s32 maximum = FUN_004ccbf0(target->id);
            s32 healing = item->healPercent * maximum / 100;
            target->hp += healing;
            if (FUN_004ccbf0(target->id) < target->hp) {
                target->hp = FUN_004ccbf0(target->id);
            }
        }
        noEffect = 0;
    }
    return noEffect;
}

} /* extern "C" */
