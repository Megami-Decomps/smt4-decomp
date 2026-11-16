#include "common.h"
#include <stddef.h>
#include "map/mapDepart.h"
#include "code/Code0028.h"

/* One requirement of a quest record. */
struct QuestRequirement {
    /* 0x0 */ u16 kind; /* 1: counter, 2: party member/progress, 3: macca, 5: unit condition, 6: unit total, 7: AoC entry */
    /* 0x2 */ u16 parameter;
    /* 0x4 */ u32 value;
};

/* The second part of a quest record (at 0x100). */
struct QuestRecordConditions {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ QuestRequirement requirements[6];
};

struct QuestRecord {
    /* 0x000 */ u8 unk000[6];
    /* 0x006 */ u8 type;
    /* 0x007 */ u8 unk007[0xF9];
    /* 0x100 */ QuestRecordConditions conditions;
};
typedef char QuestRecordOffsets[offsetof(QuestRecord, conditions.requirements) == 0x16C ? 1 : -1];

/* The party slot table: macca first, the slot of each unit at 0x90F0. */
struct SlotTable {
    /* 0x0000 */ u32 macca;
    /* 0x0004 */ u8 unk0004[0x90EC];
    /* 0x90F0 */ s8 unitSlots[1];
};

/* A unit record; the bitset of completed entries starts at 0x4C. */
struct UnitRecord {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 completed[1];
};

extern "C" {
QuestRecord *dataTable1bOr1cGetRecord(u32 id);
s32 gameGetOptionProgressStatus(void);
s32 gameCountUnits(void);
SlotTable *gameGetSlotTable(void);
UnitRecord *gameGetUnitRecord(s32 slot);
bool bitsetTestBit(const void *bits, u16 bit);
u32 bitArrayCountSet1to500(const void *bits);
s32 partyFindActiveSlotById(u16 id);
u16 *FUN_00348b7c(u32 id);
s32 aocEntryGetKind(u16 id);
bool unlockFlagTest(u16 id);

/* Whether the quest `id` can be taken: the requirements of its record are all met. */
u32 goalConditionsSatisfied(u32 id)
{
    QuestRecord *record = dataTable1bOr1cGetRecord(id);
    u32 met = 1;
    if (record == NULL) return 0;

    if (record->type == 4 || record->type == 5) {
        if (gameGetOptionProgressStatus() == 0) {
            met = 0;
        } else if (FUN_00287800() != 0) {
            met = 0;
        }
    } else if (record->type == 6) {
        if (FUN_0027d98c() == 4) met = 0;
    } else if (gameGetOptionProgressStatus() == 2 && FUN_00287800() != 0) {
        met = 0;
    } else if (record->conditions.requirements[0].kind == 5) {
        // Needs one party unit whose record has every listed entry completed.
        s32 units = gameCountUnits();
        s8 *unitSlots = gameGetSlotTable()->unitSlots;
        met = 0;
        for (s32 unit = 0; unit < units; unit++) {
            if (unitSlots[unit] < 0) continue;
            UnitRecord *candidate = gameGetUnitRecord(unitSlots[unit]);
            s32 satisfied = 1;
            for (s32 i = 0; i < 6; i++) {
                switch (record->conditions.requirements[i].kind) {
                case 0:
                    break;
                case 5:
                    if (!bitsetTestBit(candidate, record->conditions.requirements[i].parameter)) satisfied = 0;
                    break;
                default:
                    break;
                }
                if (!satisfied) break;
            }
            if (satisfied) {
                met = 1;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 6; i++) {
            switch (record->conditions.requirements[i].kind) {
            case 1: {
                u32 progress = FUN_0028fb40(record->conditions.requirements[i].parameter);
                if (record->conditions.requirements[i].value > progress) met = 0;
                break;
            }
            case 2:
                if (record->type == 1) {
                    u16 *counts = FUN_00348b7c(id);
                    if (record->conditions.requirements[i].value > counts[i + 1]) met = 0;
                } else {
                    if (partyFindActiveSlotById(record->conditions.requirements[i].parameter) < 0) met = 0;
                }
                break;
            case 3:
                if (gameGetSlotTable()->macca < record->conditions.requirements[i].value) met = 0;
                break;
            case 6: {
                s32 units = gameCountUnits();
                s8 *unitSlots = gameGetSlotTable()->unitSlots;
                s32 found = 0;
                for (s32 unit = 0; unit < units; unit++) {
                    if (unitSlots[unit] >= 0) {
                        UnitRecord *candidate = gameGetUnitRecord(unitSlots[unit]);
                        u32 count = bitArrayCountSet1to500(candidate->completed);
                        if (record->conditions.requirements[i].value <= count) {
                            found = 1;
                            break;
                        }
                    }
                }
                if (!found) met = 0;
                break;
            }
            case 7:
                if (aocEntryGetKind(record->conditions.requirements[i].parameter) != 11 ||
                    !unlockFlagTest(record->conditions.requirements[i].parameter) ||
                    FUN_0028fb40(record->conditions.requirements[i].parameter) != 0) {
                    met = 0;
                }
                break;
            default:
                break;
            }
            if (met == 0) break;
        }
    }
    return met;
}
}
