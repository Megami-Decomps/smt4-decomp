/* NON_MATCHING: scheduling only: retail loads the experience, hp-low and hp-high words together before the first store (and hoists the 0x500 memClear size and zero constant earlier); ours interleaves each load with its store. Same instruction multiset, 148 rows each. */
#include "common.h"

/* Seven halfwords, copied around as a unit. */
__packed struct HalfwordGroup {
    u16 values[7];
};

/* A party demon record in save format (fields are not naturally aligned). */
__packed struct DemonSaveRecord {
    /* 0x00 */ HalfwordGroup skills;       /* the first three are looked up for their effects */
    /* 0x0E */ HalfwordGroup groupB;
    /* 0x1C */ HalfwordGroup stats;        /* values 2..6 are clamped to 999 in the snapshot */
    /* 0x2A */ u16 hpLow;
    /* 0x2C */ u16 hpHigh;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ s32 experience;
    /* 0x34 */ u16 learned[8];             /* count given by FUN_0029aafc */
    /* 0x44 */ u8 unk44[0x2E];
    /* 0x72 */ u16 variant;
    /* 0x74 */ u8 unk74[2];
    /* 0x76 */ u8 kind;
};

/* The per-stat grade words (top six bits hold the grade) and the rest of the record the grader fills. */
struct StatGrades {
    u16 values[8];
    u8 unk10[0x18];
};

/* The snapshot the battle log keeps of a demon (0x5B0 bytes). */
__packed struct DemonSnapshot {
    /* 0x000 */ s16 slot;
    /* 0x002 */ u16 kind;
    /* 0x004 */ s32 experienceToNext;
    /* 0x008 */ u16 hpLow;
    /* 0x00A */ u16 hpHigh;
    /* 0x00C */ u16 maxHp;
    /* 0x00E */ u16 statOffset;
    /* 0x010 */ u16 skillEffectA;
    /* 0x012 */ u16 skillEffectB;
    /* 0x014 */ u16 variant;
    /* 0x016 */ HalfwordGroup stats;
    /* 0x024 */ HalfwordGroup groupB;
    /* 0x032 */ u8 statGrades[8];          /* top six bits of the grade halfwords */
    /* 0x03A */ HalfwordGroup skills;
    /* 0x048 */ u16 learned[8];
    /* 0x058 */ u32 cleared[16];
    /* 0x098 */ u8 tail[0x500];
    /* 0x598 */ s32 marker;
    /* 0x59C */ u16 playerName[10];
};

extern "C" {

void memClear(void *memory, s32 size);
s32 dataTable9EntryOrZero(u8 index);
s32 btlSourceGetMaxHp(DemonSaveRecord *record);
s32 FUN_0029aafc(void);
void __aeabi_memcpy4(void *destination, const void *source, s32 size);
u32 gameGetPlayerName(void);
void libc_strcpy(void *destination, u32 source);
void *dataTable08Sub2GetRecord(u16 skill);
u16 recordGetPercentageScaledBase(void);
void FUN_00253d60(StatGrades *grades, DemonSaveRecord *record);

/* Builds the battle log's snapshot of a party demon from its save record. */
void FUN_0024d94c(DemonSnapshot *snapshot, DemonSaveRecord *record)
{
    StatGrades grades;

    memClear(snapshot, 0x5B0);
    snapshot->slot = -1;
    snapshot->kind = record->kind;
    snapshot->experienceToNext = dataTable9EntryOrZero(record->kind) - record->experience;
    snapshot->hpLow = record->hpLow;
    snapshot->hpHigh = record->hpHigh;
    snapshot->maxHp = btlSourceGetMaxHp(record);
    snapshot->statOffset = record->stats.values[1];
    snapshot->marker = -1;
    snapshot->variant = record->variant;
    snapshot->stats = record->stats;
    snapshot->groupB = record->groupB;
    snapshot->skills = record->skills;
    __aeabi_memcpy4((void *)snapshot->learned, (void *)record->learned, FUN_0029aafc() * 2);
    libc_strcpy((void *)snapshot->playerName, gameGetPlayerName());
    if ((s16)snapshot->stats.values[2] >= 1000) {
        snapshot->stats.values[2] = 999;
    }
    if ((s16)snapshot->stats.values[3] >= 1000) {
        snapshot->stats.values[3] = 999;
    }
    if ((s16)snapshot->stats.values[4] >= 1000) {
        snapshot->stats.values[4] = 999;
    }
    if ((s16)snapshot->stats.values[5] >= 1000) {
        snapshot->stats.values[5] = 999;
    }
    if ((s16)snapshot->stats.values[6] >= 1000) {
        snapshot->stats.values[6] = 999;
    }
    if (dataTable08Sub2GetRecord(record->skills.values[0]) != NULL) {
        snapshot->skillEffectA = recordGetPercentageScaledBase();
    }
    if (dataTable08Sub2GetRecord(record->skills.values[1]) != NULL) {
        snapshot->skillEffectB = recordGetPercentageScaledBase();
    }
    if (dataTable08Sub2GetRecord(record->skills.values[2]) != NULL) {
        snapshot->skillEffectB = recordGetPercentageScaledBase() + snapshot->skillEffectB;
    }
    FUN_00253d60(&grades, record);
    snapshot->statGrades[0] = grades.values[0] >> 10;
    snapshot->statGrades[1] = grades.values[1] >> 10;
    snapshot->statGrades[2] = grades.values[2] >> 10;
    snapshot->statGrades[3] = grades.values[3] >> 10;
    snapshot->statGrades[4] = grades.values[4] >> 10;
    snapshot->statGrades[5] = grades.values[5] >> 10;
    snapshot->statGrades[6] = grades.values[6] >> 10;
    snapshot->statGrades[7] = grades.values[7] >> 10;
    snapshot->cleared[0] = 0;
    snapshot->cleared[1] = 0;
    snapshot->cleared[2] = 0;
    snapshot->cleared[3] = 0;
    snapshot->cleared[4] = 0;
    snapshot->cleared[5] = 0;
    snapshot->cleared[6] = 0;
    snapshot->cleared[7] = 0;
    snapshot->cleared[8] = 0;
    snapshot->cleared[9] = 0;
    snapshot->cleared[10] = 0;
    snapshot->cleared[11] = 0;
    snapshot->cleared[12] = 0;
    snapshot->cleared[13] = 0;
    snapshot->cleared[14] = 0;
    snapshot->cleared[15] = 0;
    memClear((void *)snapshot->tail, 0x500);
}

} /* extern "C" */
