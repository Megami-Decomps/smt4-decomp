/* NON_MATCHING: retail updates the two result words with bic/orr masks in registers and stores them with one strd, and re-reads the paired-key record's value after each result store (the result words alias it); this build's u64 bit-field inserts schedule differently and cache the value. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include "gamedata/PackedIdentifiers.h"
#include "gamedata/PairedKeyRecord.h"

/* The record the paired-key search returns: its value is the result demon's id. */

/* A demon record: the skill slots and the stats the cost sums up. */
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
s32 fusionRecordPassesFilter(FusionState *state, u32 first, u32 second, u32 id);
void qsort(void *elements, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
u32 battleCandidateMatchesSkillFilters(FusionState *state, u32 first, u32 second, u32 demonId);
s32 halfwordKeyEmptyLastCompare(const void *left, const void *right);

/* Builds the result of fusing `first` and `second`: fills `result` and the state's skill list; returns the state or 0. */
FusionState *FUN_004db65c(FusionState *state, u32 first, u32 second, PackedIdentifiers *result)
{
    FusionState *found = 0;
    PairedKeyRecord *record;
    record = first < second
        ? dataTable1fFindPairedKey(first, second)
        : dataTable1fFindPairedKey(second, first);
    if (record != 0) {
        result->firstIdentifier = first;
        result->secondIdentifier = second;
        u32 demonId = record->value & 0xffff;
        result->resultIdentifier = record->value;
        if (demonId != 0 && entryDefIsAvailable(state, demonId) != 0) {
            found = 0;
            if (fusionRecordPassesFilter(state, first, second, demonId) != 0) {
                result->cost = 0;
                NkmBaseRecordA *demon = nkmBaseGetRecord(demonId);
                for (s32 i = 0; i < 8; i++) {
                    u16 skill = demon->skills.ids[i];
                    if (skill != 0) {
                        state->skills[state->skillCount] = skill;
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
                qsort(state->skills, state->skillCount, 2, halfwordKeyEmptyLastCompare);
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
                               demon->stats[3] + demon->stats[4];
                    for (s32 i = 0; i < 24; i++) {
                        u16 skill = state->skills[i];
                        if (skill == 0) {
                            break;
                        }
                        cost += (findSkillMetadataById(skill)->flags & 0x1f) * 5;
                    }
                    result->cost = cost;
                }
                battleCandidateMatchesSkillFilters(state, first, second, result->resultIdentifier);
                found = state;
            }
        }
    }
    return found;
}
}
