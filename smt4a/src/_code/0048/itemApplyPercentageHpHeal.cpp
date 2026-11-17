#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

#define ITEM_FLAG_HEALS_HP 0x20

/* A party member: only its HP and id are read here. */
typedef struct HealTarget {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 hp;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ u16 id;
} HealTarget;

s32 levelGetExpRequirement(u16 id);

/* Applies item `itemId`'s percentage HP heal to `target` (only checks when `checkOnly`); returns 0
 * when the item would heal, 1 when it has no effect. */
u32 itemApplyPercentageHpHeal(HealTarget *target, u32 itemId, s32 checkOnly)
{
    ConsumableRecordA *item;
    u32 noEffect;

    if (target == NULL) {
        return 1;
    }
    item = dataTable8FindRecord(itemId);
    if (item == NULL || !(item->flags & ITEM_FLAG_HEALS_HP)) {
        return 1;
    }
    noEffect = 1;
    if (item->effectValue != 0 && levelGetExpRequirement(target->id) != target->hp) {
        if (!checkOnly) {
            s32 maximum = levelGetExpRequirement(target->id);
            s32 healing = item->effectValue * maximum / 100;
            target->hp += healing;
            if (levelGetExpRequirement(target->id) < target->hp) {
                target->hp = levelGetExpRequirement(target->id);
            }
        }
        noEffect = 0;
    }
    return noEffect;
}

} /* extern "C" */
