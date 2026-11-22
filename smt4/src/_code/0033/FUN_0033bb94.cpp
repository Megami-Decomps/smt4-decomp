/* NON_MATCHING: readable rewrite (171 vs 172 rows) matches except callee-saved register numbering: retail reuses the dead argument register r1 (sl) as the copy pointer */
#include "common.h"
#include "gamedata/UnitRecordAccess.h"
#include "code/Code0029.h"

struct SlotTable {
    u8 unk0000[0x9108];
    s8 party[3];        // 0x9108
};


extern "C" {

SlotTable* gameGetSlotTable(void);
void FUN_0029bbc8(u8 id);
void saveMarkIdListSeen(StatBlock* record);
s32 recordContainsPairedId(StatBlock* record, u32 skill);
void qsort(void* base, s32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 dataTable06Sub1CompareBySortKeys(const void* a, const void* b);
u32 flagCountUnlockedSlots(StatBlock* record);
void unitRecalculateEffectiveStats(StatBlock* record);

// Merges the unit image `source` into its unit record, collecting the skills
// that cannot be merged into `outSkills`; returns 1 when some do not fit.
u32 FUN_0033bb94(StatBlock* source, u32 arg, u16* outSkills)
{
    StatBlock copy = *source;
    SlotTable* table = gameGetSlotTable();
    u32 id = copy.growth.slot;
    s32 partyIndex = -1;
    if (table->party[0] == id) partyIndex = 0;
    else if (table->party[1] == id) partyIndex = 1;
    else if (table->party[2] == id) partyIndex = 2;
    FUN_0029bbc8(source->growth.slot);
    dispatchIfFound(id, arg, 0);
    StatBlock* record = gameGetUnitRecord(id);
    if (partyIndex >= 0) table->party[partyIndex] = record->growth.slot;
    for (s32 i = 0; i < 0x40; i++) {
        record->growth.progress[i] |= copy.growth.progress[i];
    }
    for (s32 i = 0; i < 0x500; i++) {
        s32 sum = copy.growth.counters[i] + record->growth.counters[i];
        if (sum > 0xff) sum = 0xff;
        record->growth.counters[i] = sum;
    }
    saveMarkIdListSeen(record);

    s32 duplicates = 0;
    s32 added = 0;
    for (s32 i = 0; i < 8; i++) {
        if (copy.skills.ids[i] != 0) {
            if (!recordContainsPairedId(record, copy.skills.ids[i])) {
                outSkills[added++] = copy.skills.ids[i];
            } else if (copy.skills.ids[i] != 0) {
                duplicates++;
            }
        }
    }
    qsort(outSkills, 8, 2, dataTable06Sub1CompareBySortKeys);
    s32 unlocked = flagCountUnlockedSlots(record);
    if (8 - added > 0) outSkills[added] = 0;

    s32 unplaced = added;
    for (s32 i = 0; i < unlocked; i++) {
        if (record->skills.ids[i] == 0) unplaced--;
    }
    if (unplaced > 0) {
        unitRecalculateEffectiveStats(record);
        return 1;
    }
    for (s32 i = 0; i < 8; i++) {
        u16 skill = outSkills[i];
        if (skill != 0) {
            for (s32 j = duplicates; j < 8; j++) {
                if (record->skills.ids[j] == 0) {
                    record->skills.ids[j] = skill;
                    break;
                }
            }
        }
    }
    unitRecalculateEffectiveStats(record);
    return 0;
}

} /* extern "C" */
