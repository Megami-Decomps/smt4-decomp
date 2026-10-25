/* NON_MATCHING: retail hoists the result flag into r9 before the record check, keeps the requirement base as record + 0x100 with the 0x6C field offset folded into the loads and shares one exit; the control flow is the same (about 185 diff lines). */
#include "common.h"
#include <stddef.h>
#include "map/mapDepart.h"
#include "shard/FUN_00287800.h"

/* One requirement of a quest record. */
struct QuestRequirement {
    /* 0x0 */ u16 kind; /* 1: counter, 2: party member/progress, 3: macca, 5: unit condition, 6: unit total, 7: AoC entry */
    /* 0x2 */ u16 parameter;
    /* 0x4 */ u32 value;
};

struct QuestRecord {
    /* 0x000 */ u8 unk000[6];
    /* 0x006 */ u8 type;
    /* 0x007 */ u8 unk007[0x165];
    /* 0x16C */ QuestRequirement requirements[6];
};
typedef char QuestRecordOffsets[offsetof(QuestRecord, requirements) == 0x16C ? 1 : -1];

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
u32 FUN_0028fb40(u16 id);
s32 partyFindActiveSlotById(u16 id);
u16 *FUN_00348b7c(u32 id);
s32 aocEntryGetKind(u16 id);
bool unlockFlagTest(u16 id);

/* Whether the quest `id` can be taken: the requirements of its record are all met. */
u32 FUN_00250ec0(u32 id)
{
    QuestRecord *record = dataTable1bOr1cGetRecord(id);
    if (record == NULL) {
        return 0;
    }
    u32 met = 1;
    if (record->type == 4 || record->type == 5) {
        if (gameGetOptionProgressStatus() == 0 || FUN_00287800() != 0) {
            met = 0;
        }
    } else if (record->type == 6) {
        if (FUN_0027d98c() == 4) {
            met = 0;
        }
    } else if (gameGetOptionProgressStatus() == 2 && FUN_00287800() != 0) {
        met = 0;
    } else if (record->requirements[0].kind == 5) {
        s32 units = gameCountUnits();
        SlotTable *slots = gameGetSlotTable();
        met = 0;
        for (s32 unit = 0; unit < units; unit++) {
            if (slots->unitSlots[unit] < 0) {
                continue;
            }
            UnitRecord *candidate = gameGetUnitRecord(slots->unitSlots[unit]);
            s32 i;
            for (i = 0; i < 6; i++) {
                QuestRequirement *requirement = &record->requirements[i];
                if (requirement->kind != 0 && requirement->kind == 5 &&
                    !bitsetTestBit(candidate, requirement->parameter)) {
                    break;
                }
            }
            if (i == 6) {
                met = 1;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 6 && met; i++) {
            QuestRequirement *requirement = &record->requirements[i];
            switch (requirement->kind) {
            case 1:
                if (requirement->value > FUN_0028fb40(requirement->parameter)) {
                    met = 0;
                }
                break;
            case 2:
                if (record->type == 1) {
                    if (requirement->value > FUN_00348b7c(id)[i + 1]) {
                        met = 0;
                    }
                } else if (partyFindActiveSlotById(requirement->parameter) < 0) {
                    met = 0;
                }
                break;
            case 3:
                if (gameGetSlotTable()->macca < requirement->value) {
                    met = 0;
                }
                break;
            case 6: {
                s32 units = gameCountUnits();
                SlotTable *slots = gameGetSlotTable();
                met = 0;
                for (s32 unit = 0; unit < units; unit++) {
                    if (slots->unitSlots[unit] >= 0 &&
                        requirement->value <=
                            bitArrayCountSet1to500(gameGetUnitRecord(slots->unitSlots[unit])->completed)) {
                        met = 1;
                        break;
                    }
                }
                break;
            }
            case 7:
                if (aocEntryGetKind(requirement->parameter) != 11 || !unlockFlagTest(requirement->parameter) ||
                    FUN_0028fb40(requirement->parameter) != 0) {
                    met = 0;
                }
                break;
            }
        }
    }
    return met;
}
}
