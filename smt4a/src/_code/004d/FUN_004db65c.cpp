/* NON_MATCHING: retail updates the two result words with bic/orr masks in registers and stores them with one strd, and re-reads the paired-key record's value after each result store (the result words alias it); this build's u64 bit-field inserts schedule differently and cache the value. */
#include "common.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

/* The 64-bit candidate record the fusion search fills in for one result. */
struct FusionResult {
    u64 first : 15;
    u64 second : 15;
    u64 flags : 2;
    u64 low : 2;
    u64 skill : 15;
    u64 cost : 15;
};

/* The record the paired-key search returns: its value is the result demon's id. */
struct PairedKeyRecord {
    u16 second;
    u16 first;
    u32 value;
};

/* A demon record: the skill slots and the stats the cost sums up. */
struct FusionDemonRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 level;
    /* 0x08 */ u8 unk08[0x16];
    /* 0x1E */ u16 stats[3];
    /* 0x24 */ u16 stats2[2];
    /* 0x28 */ u8 unk28[0x18];
    /* 0x40 */ s16 skills[8];
};

/* The fusion search state: the working skill list of the result. */
struct FusionState {
    /* 0x000 */ u8 unk000[0x17E];
    /* 0x17E */ u16 skills[24];
    /* 0x1AE */ u8 unk1AE[2];
    /* 0x1B0 */ s32 skillCount;
    /* 0x1B4 */ u8 unk1B4;
    /* 0x1B5 */ u8 addCost;
};

extern "C" {
PairedKeyRecord *dataTable1fFindPairedKey(u32 first, u32 second);
u32 entryDefIsAvailable(FusionState *state, u16 id);
s32 FUN_004dab08(FusionState *state, u32 first, u32 second, u32 id);
FusionDemonRecord *FUN_00184310(u32 id);
CompactSortRecord *findSkillMetadataById(u16 id);
void qsort(void *elements, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
u32 battleCandidateMatchesSkillFilters(FusionState *state, u32 first, u32 second, u32 demonId);
s32 uiCompareHalfwordKeys(const void *left, const void *right);

/* Builds the result of fusing `first` and `second`: fills `result` and the state's skill list; returns the state or 0. */
FusionState *FUN_004db65c(FusionState *state, u32 first, u32 second, FusionResult *result)
{
    FusionState *found = 0;
    PairedKeyRecord *record;
    if (first < second) {
        record = dataTable1fFindPairedKey(first, second);
    } else {
        record = dataTable1fFindPairedKey(second, first);
    }
    if (record != 0) {
        result->first = first;
        result->second = second;
        u32 demonId = record->value & 0xffff;
        result->skill = record->value;
        if (demonId != 0 && entryDefIsAvailable(state, demonId) != 0) {
            found = 0;
            if (FUN_004dab08(state, first, second, demonId) != 0) {
                result->cost = 0;
                FusionDemonRecord *demon = FUN_00184310(demonId);
                for (s32 i = 0; i < 8; i++) {
                    if (demon->skills[i] != 0) {
                        state->skills[state->skillCount] = demon->skills[i];
                        state->skillCount++;
                    }
                }
                if (state->skillCount < 24) {
                    state->skills[state->skillCount] = 0;
                }
                for (s32 i = 0; i < 24; i++) {
                    u16 skill = state->skills[i];
                    if (skill != 0 && (findSkillMetadataById(skill)->flags & 0x20) == 0) {
                        state->skills[i] = 0;
                    }
                }
                qsort(state->skills, state->skillCount, 2, uiCompareHalfwordKeys);
                s32 oldCount = state->skillCount;
                state->skillCount = 0;
                for (s32 i = 0; i < oldCount; i++) {
                    if (state->skills[i] == 0) {
                        break;
                    }
                    state->skillCount++;
                }
                if (state->addCost != 0) {
                    u32 cost = demon->stats[0] + demon->stats[1] + demon->stats[2] + demon->level * 20 +
                               demon->stats2[0] + demon->stats2[1];
                    for (s32 i = 0; i < 24; i++) {
                        u16 skill = state->skills[i];
                        if (skill == 0) {
                            break;
                        }
                        cost += (findSkillMetadataById(skill)->flags & 0x1f) * 5;
                    }
                    result->cost = cost;
                }
                battleCandidateMatchesSkillFilters(state, first, second, result->skill);
                found = state;
            }
        }
    }
    return found;
}
}
