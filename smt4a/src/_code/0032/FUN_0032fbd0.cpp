/* NON_MATCHING: retail unrolls the live-skill search and keeps the rebuilt record base in r7 (156 vs 180 rows); the save-entry comparison is the same. */
#include "common.h"
#include "map/lmapMain.h"

extern "C" {

/* A saved party entry as gameDataCopySaveEntry fills it (0x40 bytes; word offsets as used). */
typedef struct SkillList {
    u16 id[12];
} SkillList;

typedef struct SaveEntry {
    /* 0x00 */ u16 key;
    /* 0x02 */ u16 w02;
    /* 0x04 */ u16 w04;
    /* 0x06 */ u16 w06;
    /* 0x08 */ u16 w08;
    /* 0x0A */ u16 w0a;
    /* 0x0C */ u16 w0c;
    /* 0x0E */ u16 w0e;
    /* 0x10 */ u16 w10;
    /* 0x12 */ u16 w12;
    /* 0x14 */ u16 w14;
    /* 0x16 */ u8 flags;                /* bits 2..5: a count carried into the record */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 w18;
    /* 0x1A */ u16 w1a;
    /* 0x1C */ SkillList skills;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ u32 experience;
    /* 0x3C */ char name[0x12];
} SaveEntry;

/* The record rebuilt from a save entry (0x12C bytes; the fields compared below). */
typedef struct RebuiltRecord {
    /* 0x000 */ s16 hp;
    /* 0x002 */ s16 mp;
    /* 0x004 */ s16 strength;
    /* 0x006 */ s16 magic;
    /* 0x008 */ s16 vitality;
    /* 0x00A */ s16 agility;
    /* 0x00C */ s16 luck;
    /* 0x00E */ u8 unk00e[2];
    /* 0x010 */ u16 w10;
    /* 0x012 */ u8 unk012[0x0A];
    /* 0x01C */ u16 w1c;
    /* 0x01E */ u16 w1e;
    /* 0x020 */ u16 w20;
    /* 0x022 */ u16 w22;
    /* 0x024 */ u16 w24;
    /* 0x026 */ u16 w26;
    /* 0x028 */ u16 w28;
    /* 0x02A */ u16 scaledMaximum;
    /* 0x02C */ u16 copy10;
    /* 0x02E */ u8 unk02e[2];
    /* 0x030 */ u32 experience;
    /* 0x034 */ SkillList skills;
    /* 0x04C */ char name[0x12];
    /* 0x05E */ u8 unk05e[4];
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 key;
    /* 0x066 */ u8 unk066[0xC5];
    /* 0x12B */ u8 count;
} RebuiltRecord;

/* The live party unit record (only the compared fields). */
typedef struct LiveUnit {
    /* 0x000 */ s16 hp;
    /* 0x002 */ s16 mp;
    /* 0x004 */ s16 base[5];
    /* 0x00E */ u8 unk00e[0x22];
    /* 0x030 */ u32 experience;
    /* 0x034 */ u16 skills[12];
    /* 0x04C */ char name[0x12];
    /* 0x05E */ u8 unk05e[4];
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 key;
    /* 0x066 */ u8 unk066[0x46];
    /* 0x0AC */ u16 bonus[5];
} LiveUnit;

void FUN_00184310(u32 id);
void sysMemClear(void *block, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_004bcd90(RebuiltRecord *record);
u16 recordGetScaledMaximum(RebuiltRecord *record);
s32 getUnlockedSlotCount(LiveUnit *unit);

/* Whether the live unit still matches its saved entry: the entry is rebuilt into a record and
 * the key, experience, the base stats plus bonuses, every live skill and the name must agree.
 * Returns 1 when they do (or when the entry cannot be read), else 0. */
s32 FUN_0032fbd0(LiveUnit *unit)
{
    u16 id = unit->id;
    s32 matches = 1;
    u8 saved[0x50];
    SaveEntry entry;
    RebuiltRecord record;

    if (gameDataCopySaveEntry(id, saved) == 0) {
        return matches;
    }
    FUN_00184310(id);
    gameDataCopySaveEntry(id, &entry);
    sysMemClear(&record, 300);
    record.key = entry.key;
    record.id = id;
    record.hp = entry.w18;
    record.mp = entry.w1a;
    record.strength = entry.w02;
    record.magic = entry.w04;
    record.vitality = entry.w06;
    record.agility = entry.w08;
    record.luck = entry.w0a;
    record.w1c = 0;
    record.w1e = 0;
    record.w20 = entry.w0c;
    record.w28 = entry.w14;
    record.w24 = entry.w10;
    record.w26 = entry.w12;
    record.w22 = entry.w0e;
    __aeabi_memcpy4(record.name, entry.name, 18);
    record.skills = entry.skills;
    record.experience = entry.experience;
    record.count = (entry.flags >> 2) & 0xF;
    FUN_004bcd90(&record);
    record.scaledMaximum = recordGetScaledMaximum(&record);
    record.copy10 = record.w10;
    if (record.key != unit->key || record.experience != unit->experience) {
        matches = 0;
    }
    if (unit->hp != record.hp) {
        matches = 0;
    }
    if (unit->mp != record.mp) {
        matches = 0;
    }
    for (s32 i = 0; i < 5; i++) {
        if (unit->base[i] + unit->bonus[i] != (&record.strength)[i]) {
            matches = 0;
        }
    }
    s32 count = getUnlockedSlotCount(unit);

    for (s32 i = 0; i < count; i++) {
        u16 skill = unit->skills[i];

        if (skill == 0) {
            continue;
        }
        s32 found = 0;

        while (found < count && record.skills.id[found] != skill) {
            found++;
        }
        if (found == count) {
            matches = 0;
            break;
        }
    }
    for (s32 i = 0; i < 18; i++) {
        if (unit->name[i] != record.name[i]) {
            matches = 0;
            break;
        }
    }
    return matches;
}

}
