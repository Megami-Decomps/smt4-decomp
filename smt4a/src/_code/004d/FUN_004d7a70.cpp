/* NON_MATCHING: retail tests the 3/4 kinds separately from 7/5 and loads entry masks as word pairs (ldm) with ldrd/strd on the battle mask; u64 mask ops compile differently. */
#include "common.h"
#include "shard/W5_W5Match7_BattleMask.h"

/* One 0x24-byte event condition: a kind, a test on a battle unit and a table-group entry name. */
struct EventCondition {
    u8 kind;        // 0x00
    u8 test;        // 0x01
    u16 unitId;     // 0x02
    u8 name[0x20];  // 0x04
};

/* Event condition set; the table group and the entry matched last are tracked in it. */
struct EventConditionSet {
    s32 state;                 // 0x00
    s32 unk04;                 // 0x04
    s32 unk08[2];              // 0x08
    void *tableGroup;          // 0x10
    s32 unk14;                 // 0x14
    EventCondition *conditions;// 0x18
    s32 conditionCount;        // 0x1C
    s32 matchedIndex;          // 0x20
    s32 matchedKind;           // 0x24
    s32 unk28;                 // 0x28
    u8 unk2C;                  // 0x2C
};

extern "C" {
extern u64 DAT_005738a0[5];
extern BattleMaskState *btlGetMainState(void);
extern s32 tableGroupFindEntryIndex(void *, u8 *);
extern u8 isOutsideRange4To53(s32);

/* Find the first condition of the given kind that holds for the battle unit and record it. */
u32 FUN_004d7a70(EventConditionSet *set, u32 kind, s32 unit, s32 dryRun)
{
    if (set->state == 0 || (set->state == 10 && set->unk28 < 1)) {
        if (set->conditions == NULL) {
            return 0;
        }
        if (dryRun == 0) {
            set->matchedKind = 0;
            set->matchedIndex = -1;
            set->unk04 = 0;
        }
        BattleMaskState *battle = btlGetMainState();
        EventCondition *cond = set->conditions;
        for (s32 i = 0; i < set->conditionCount; i++, cond++) {
            if (cond->kind != kind) {
                continue;
            }
            if (((kind == 3 || kind == 4) || (kind == 7 || kind == 5)) && unit >= 0) {
                u8 outside = isOutsideRange4To53(unit);
                BattleMaskEntry *entry = &battle->entryView.entries[unit];
                switch (cond->test) {
                case 1:
                    if (outside != 0 || entry->unitId != cond->unitId) {
                        continue;
                    }
                    break;
                case 2:
                    if (outside == 0 || entry->unitId != cond->unitId) {
                        continue;
                    }
                    break;
                case 3:
                    if ((entry->mask & DAT_005738a0[1]) == 0) {
                        continue;
                    }
                    break;
                case 4:
                    if ((entry->mask & DAT_005738a0[3]) == 0) {
                        continue;
                    }
                    break;
                case 5:
                    if ((entry->mask & DAT_005738a0[2]) == 0) {
                        continue;
                    }
                    break;
                }
            }
            if (dryRun == 0 && (kind == 0 || kind == 6 || kind == 7 || kind == 8)) {
                battle->mask |= DAT_005738a0[4];
            }
            s32 index = tableGroupFindEntryIndex(set->tableGroup, cond->name);
            if (index >= 0) {
                if (dryRun == 0) {
                    set->matchedIndex = index;
                    set->unk2C = 0;
                    set->matchedKind = kind;
                }
                return 1;
            }
        }
    }
    return 0;
}
}
