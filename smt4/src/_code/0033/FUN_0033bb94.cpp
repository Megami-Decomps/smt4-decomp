/* NON_MATCHING: readable rewrite (171 vs 172 rows) matches except callee-saved register numbering: retail reuses the dead argument register r1 (sl) as the copy pointer */
#include "common.h"

struct SlotTable {
    u8 unk0000[0x9108];
    s8 party[3];        // 0x9108
};

// Unit record (0x604 bytes): only the parts merged here.
struct UnitRecord {
    u8 unk00[0x34];
    u16 skills[8];      // 0x34
    u8 unk44[6];
    u8 id;              // 0x4a
    u8 unk4b;
    u8 learned[0x40];   // 0x4c
    u8 counters[0x500]; // 0x8c: saturating byte counters
    u8 unk58c[0x604 - 0x58c];
};

extern "C" {

void __aeabi_memcpy4(void* dst, const void* src, u32 size);
SlotTable* gameGetSlotTable(void);
UnitRecord* gameGetUnitRecord(u32 id);
void FUN_0029bbc8(u8 id);
void FUN_0029c1c8(u32 id, u32 a, u32 b);
void FUN_0029bde4(UnitRecord* record);
s32 recordContainsPairedId(UnitRecord* record);
void FUN_002b7bca(void* base, s32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 dataTable06Sub1CompareBySortKeys(const void* a, const void* b);
u32 flagCountUnlockedSlots(UnitRecord* record);
void unitRecalculateEffectiveStats(UnitRecord* record);

// Merges the unit image `source` into its unit record, collecting the skills
// that cannot be merged into `outSkills`; returns 1 when some do not fit.
u32 FUN_0033bb94(UnitRecord* source, u32 arg, u16* outSkills)
{
    UnitRecord copy;
    __aeabi_memcpy4(&copy, source, 0x604);
    SlotTable* table = gameGetSlotTable();
    u32 id = copy.id;
    s32 partyIndex = -1;
    if (table->party[0] == id) partyIndex = 0;
    else if (table->party[1] == id) partyIndex = 1;
    else if (table->party[2] == id) partyIndex = 2;
    FUN_0029bbc8(source->id);
    FUN_0029c1c8(id, arg, 0);
    UnitRecord* record = gameGetUnitRecord(id);
    if (partyIndex >= 0) table->party[partyIndex] = record->id;
    for (s32 i = 0; i < 0x40; i++) {
        record->learned[i] |= copy.learned[i];
    }
    for (s32 i = 0; i < 0x500; i++) {
        s32 sum = copy.counters[i] + record->counters[i];
        if (sum > 0xff) sum = 0xff;
        record->counters[i] = sum;
    }
    FUN_0029bde4(record);

    s32 duplicates = 0;
    s32 added = 0;
    for (s32 i = 0; i < 8; i++) {
        if (copy.skills[i] != 0) {
            if (recordContainsPairedId(record)) {
                if (copy.skills[i] != 0) duplicates++;
            } else {
                outSkills[added++] = copy.skills[i];
            }
        }
    }
    FUN_002b7bca(outSkills, 8, 2, dataTable06Sub1CompareBySortKeys);
    u32 unlocked = flagCountUnlockedSlots(record);
    if (8 - added > 0) outSkills[added] = 0;

    s32 unplaced = added;
    for (u32 i = 0; i < unlocked; i++) {
        if (record->skills[i] == 0) unplaced--;
    }
    if (unplaced > 0) {
        unitRecalculateEffectiveStats(record);
        return 1;
    }
    for (s32 i = 0; i < 8; i++) {
        u16 skill = outSkills[i];
        if (skill != 0) {
            for (s32 j = duplicates; j < 8; j++) {
                if (record->skills[j] == 0) {
                    record->skills[j] = skill;
                    break;
                }
            }
        }
    }
    unitRecalculateEffectiveStats(record);
    return 0;
}

} /* extern "C" */
