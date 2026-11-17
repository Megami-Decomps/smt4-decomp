#include "common.h"
#include "quest_center/QuestRecord.h"
#include <stddef.h>
#include "map/mapDepart.h"
#include "code/Code0028.h"
#include "gamedata/UnitRecordAccess.h"

/* The party slot table: macca first, the slot of each unit at 0x90F0. */
struct SlotTable {
    /* 0x0000 */ u32 macca;
    /* 0x0004 */ u8 unk0004[0x90EC];
    /* 0x90F0 */ s8 unitSlots[1];
};


extern "C" {
s32 gameGetOptionProgressStatus(void);
s32 gameCountUnits(void);
SlotTable *gameGetSlotTable(void);
bool bitsetTestBit(const void *bits, u16 bit);
u32 bitArrayCountSet1to500(const void *bits);
s32 partyFindActiveSlotById(u16 id);
u16 *FUN_00348b7c(u32 id);
s32 aocEntryGetKind(u16 id);
bool unlockFlagTest(u16 id);

/* Whether the quest `id` can be taken: the requirements of its record are all met. */
u32 goalConditionsSatisfied(u32 id)
{
    QuestRecord *record = questDataGetRecord(id);
    u32 met = 1;
    if (record == NULL) return 0;

    if (record->kind == 4 || record->kind == 5) {
        if (gameGetOptionProgressStatus() == 0) {
            met = 0;
        } else if (FUN_00287800() != 0) {
            met = 0;
        }
    } else if (record->kind == 6) {
        if (FUN_0027d98c() == 4) met = 0;
    } else if (gameGetOptionProgressStatus() == 2 && FUN_00287800() != 0) {
        met = 0;
    } else if (record->requirements[0].kind == 5) {
        // Needs one party unit whose record has every listed entry completed.
        s32 units = gameCountUnits();
        s8 *unitSlots = gameGetSlotTable()->unitSlots;
        met = 0;
        for (s32 unit = 0; unit < units; unit++) {
            if (unitSlots[unit] < 0) continue;
            StatBlock *candidate = gameGetUnitRecord(unitSlots[unit]);
            s32 satisfied = 1;
            for (s32 i = 0; i < 6; i++) {
                switch (record->requirements[i].kind) {
                case 0:
                    break;
                case 5:
                    if (!bitsetTestBit(candidate, record->requirements[i].id)) satisfied = 0;
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
            switch (record->requirements[i].kind) {
            case 1: {
                u32 progress = flagValueRead(record->requirements[i].id);
                if (record->requirements[i].count > progress) met = 0;
                break;
            }
            case 2:
                if (record->kind == 1) {
                    u16 *counts = FUN_00348b7c(id);
                    if (record->requirements[i].count > counts[i + 1]) met = 0;
                } else {
                    if (partyFindActiveSlotById(record->requirements[i].id) < 0) met = 0;
                }
                break;
            case 3:
                if (gameGetSlotTable()->macca < record->requirements[i].count) met = 0;
                break;
            case 6: {
                s32 units = gameCountUnits();
                s8 *unitSlots = gameGetSlotTable()->unitSlots;
                s32 found = 0;
                for (s32 unit = 0; unit < units; unit++) {
                    if (unitSlots[unit] >= 0) {
                        StatBlock *candidate = gameGetUnitRecord(unitSlots[unit]);
                        u32 count = bitArrayCountSet1to500(candidate->growth.progress);
                        if (record->requirements[i].count <= count) {
                            found = 1;
                            break;
                        }
                    }
                }
                if (!found) met = 0;
                break;
            }
            case 7:
                if (aocEntryGetKind(record->requirements[i].id) != 11 ||
                    !unlockFlagTest(record->requirements[i].id) ||
                    flagValueRead(record->requirements[i].id) != 0) {
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
