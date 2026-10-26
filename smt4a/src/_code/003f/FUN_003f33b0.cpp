/* NON_MATCHING: instruction rows now equal retail (169); recordContainsPairedId takes the skill id and the slot count is signed; only register numbering differs (retail keeps the arg/out-skills pair in r7/r8 and the table in r6 after the 0x1c00 add). */
#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"

// Party member record (0x12c bytes): only the parts merged here.
struct MemberRecord {
    u8 unk00[0x32];
    u16 skillPad;       // 0x32
    u16 skills[8];      // 0x34
    u8 unk44[0x22];
    u8 id;              // 0x66
    u8 unk67;
    u8 learned[0x40];   // 0x68
    u8 unka8[0x12c - 0xa8];
};

struct SlotTable {
    u8 unk0000[0x1ca0];
    s8 party[3];        // 0x1ca0
};

extern "C" {

void __aeabi_memcpy4(void* dst, const void* src, u32 size);
SlotTable* gameGetSlotTable(void);
MemberRecord* gameGetSlotRecord(u8 id);
void FUN_004d0d70(u8 id);
void dispatchIfFound(u8 id, u32 arg, s32 mode);
s32 bitsAt60Test(void* record, u32 bit);
void bitsAt60Set(void* record, u32 bit);
void FUN_002a6894(void* record);
void qsort(void* base, u32 count, u32 size, s32 (*compare)(const void*, const void*));
s32 FUN_002c2bf4(const void* a, const void* b);
u32 getUnlockedSlotCount(void* record);
void FUN_004bcd90(void* record);
void FUN_004bd6b0(void* record, u32 skill, s32 slot);

// Merges the member image `source` into its slot record, collecting the skills
// that could not be merged into `outSkills`; returns 1 when some do not fit.
u32 FUN_003f33b0(MemberRecord* source, u32 arg, u16* outSkills)
{
    MemberRecord copy;
    __aeabi_memcpy4(&copy, source, 300);
    SlotTable* table = gameGetSlotTable();
    u32 id = copy.id;
    s32 partyIndex = -1;
    if (table->party[0] == id) partyIndex = 0;
    else if (table->party[1] == id) partyIndex = 1;
    else if (table->party[2] == id) partyIndex = 2;
    FUN_004d0d70(source->id);
    dispatchIfFound(copy.id, arg, 0);
    MemberRecord* record = gameGetSlotRecord(copy.id);
    if (partyIndex >= 0) table->party[partyIndex] = record->id;
    for (s32 i = 0; i < 0x40; i++) {
        record->learned[i] |= copy.learned[i];
    }
    if (bitsAt60Test(&copy, 2)) bitsAt60Set(record, 2);
    FUN_002a6894(record);

    s32 duplicates = 0;
    s32 added = 0;
    for (s32 i = 0; i < 8; i++) {
        if (copy.skills[i] != 0) {
            if (!recordContainsPairedId((const PairedIdList *)record, copy.skills[i])) {
                outSkills[added++] = copy.skills[i];
            } else if (copy.skills[i] != 0) {
                duplicates++;
            }
        }
    }
    qsort(outSkills, 8, 2, FUN_002c2bf4);
    s32 unlocked = getUnlockedSlotCount(record);
    if (8 - added > 0) outSkills[added] = 0;

    MemberRecord* member = record;
    s32 unplaced = added;
    for (s32 i = 0; i < unlocked; i++) {
        if (member->skills[i] == 0) unplaced--;
    }
    if (unplaced > 0) {
        FUN_004bcd90(record);
        return 1;
    }
    for (s32 i = 0; i < 8; i++) {
        u16 skill = outSkills[i];
        if (skill != 0) {
            for (s32 j = duplicates; j < 8; j++) {
                if (member->skills[j] == 0) {
                    FUN_004bd6b0(record, skill, j);
                    break;
                }
            }
        }
    }
    FUN_004bcd90(record);
    return 0;
}

} /* extern "C" */
