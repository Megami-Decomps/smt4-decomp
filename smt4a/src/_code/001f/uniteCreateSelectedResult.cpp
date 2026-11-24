/* NON_MATCHING: 442 lines (shape 356), written from IV's uniteCreateSelectedResult; the calls, tests, copies and
 * block order are retail's. What differs: retail's frame is 1004 bytes with the first ingredient at sp+372 and the
 * second at sp+72 (here the other way round, 1012 bytes); it keeps the first's address in a stack slot and the
 * new-entry flag in fp (here the flag is spilled), the work block in r7 (r8 here) and 0 in a register for the skill
 * clears, and it reads both words of the pair for the result id where this build reads them one by one. */
#include <string.h>
#include "camp/Unite/UniteGlobals.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "util/BitsAndBytes_Shard004B.h"
#include "util/BitsAndBytes_VariantB.h"
#include "util/Random.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include "code/Code0029.h"
#include "code/Code002a_Smt4a.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* unit-local: the parts of UniteWorkA the fusion itself uses past the shared views: the result as the screen showed
 * it (IV's resultSelectionIV.unit) and where the created unit's index and level are kept (IV's resultIndex and
 * resultLevel). */
struct FusionCreateView {
    /* 0x0000 */ u8 unk0000[0x669C];
    /* 0x669C */ SlotRecordA shownResult;  /* the result the screen showed: created as such unless an accident */
    /* 0x67C8 */ u8 unk67C8[0x28D0];
    /* 0x9098 */ u32 resultIndex;
    /* 0x909C */ u32 resultLevel;
};
typedef char FusionCreateViewOffsets[offsetof(FusionCreateView, shownResult) == 0x669C &&
    offsetof(FusionCreateView, resultIndex) == 0x9098 ? 1 : -1];

enum {
    UNIT_SOURCE_PARTY = 1,     /* UnitePairEntryIV::firstType/secondType: a party member */
    UNIT_SOURCE_SAVED = 3,     /* a demon of the save's records */
    PARTY_SLOTS = 24,
    SKILL_INHERITABLE = 0x20,  /* CompactSortRecord::flags */
    RACE_KEEPS_SKILLS = 51,    /* two races whose own skills stay: the candidates only fill free slots */
    RACE_KEEPS_SKILLS_2 = 42,
    COUNTER_FUSIONS = 38,
    COUNTER_ACCIDENTS = 39
};

extern "C" {
void unitRecordBuildFromSave(u32 id, SlotRecordA *record);
bool FUN_004da520(u32 unused, SlotRecordA *first, SlotRecordA *second);
u32 FUN_004db914(void *context, u32 firstId, u32 secondId, UnitePairEntryIV *pair);
u32 FUN_004d0d70(u32 slot);
s32 partyFindFirstUnusedEntry(void);
void recordMergeByteMasks(void *context, SlotRecordA *first, SlotRecordA *second, s32 option, SlotRecordA *out);
s32 uiCompareMaskedRecordRankDescending(const u16 *first, const u16 *second);
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const u16 *, const u16 *));
void unitRecomputeDerivedStats(SlotRecordA *unit);
u32 virtualSlotAlwaysTrue(void *context, SlotRecordA *unit);
void FUN_004bd17c(SlotRecordA *record);
void compendiumRegisterPartyDemon(u32 id);
void saveMarkIdListSeen(SlotRecordA *record);

/* Builds a fusion ingredient: a copy of the party member, or the demon rebuilt from the save's records. */
static __inline void uniteLoadIngredient(SlotRecordA *out, u32 id, u32 source)
{
    if (source == UNIT_SOURCE_PARTY)
        *out = *slotRecordFindById(id);
    else if (source == UNIT_SOURCE_SAVED)
        unitRecordBuildFromSave(id, out);
}

/* Performs fusion pair `index`: builds both ingredients, removes them from the party, creates the result in a free
 * stock slot and gives it the inherited skills (or, when the fusion is not an accident, the unit that was shown),
 * then heals it and counts the fusion. Returns whether the fusion was an accident. */
u8 uniteCreateSelectedResult(s32 index)
{
    UniteWorkA *work = g_unite;
    FusionCreateView *view = reinterpret_cast<FusionCreateView *>(work);
    u8 accident = 0;
    SlotRecordA first;
    SlotRecordA second;

    uniteLoadIngredient(&first, work->pairSort.pairs[index].firstId, work->pairSort.pairs[index].firstType);
    uniteLoadIngredient(&second, work->pairSort.pairs[index].secondId, work->pairSort.pairs[index].secondType);

    u16 originalResultId = work->pairSort.pairs[index].resultId;
    if (FUN_004da520((u32)work->context, &first, &second)) {
        if (FUN_004db914(work->context, work->pairSort.pairs[index].firstId, work->pairSort.pairs[index].secondId,
                         &work->pairSort.pairs[index]) != 0)
            accident = 1;
        else
            work->pairSort.pairs[index].resultId = originalResultId;
    }

    s32 slot = partyFindSlotById(first.id);
    if ((u32)slot < PARTY_SLOTS) {
        SlotRecordA *record = gameGetSlotRecord(slot);
        if (record != NULL)
            bitsAt60Clear(record, 4);
    }
    slot = partyFindSlotById(second.id);
    if ((u32)slot < PARTY_SLOTS) {
        SlotRecordA *record = gameGetSlotRecord(slot);
        if (record != NULL)
            bitsAt60Clear(record, 4);
    }
    if (work->pairSort.pairs[index].firstType == UNIT_SOURCE_PARTY)
        FUN_004d0d70(partyFindSlotById(first.id));
    if (work->pairSort.pairs[index].secondType == UNIT_SOURCE_PARTY)
        FUN_004d0d70(partyFindSlotById(second.id));

    s32 stockSlot = partyFindFirstUnusedEntry();
    bool newEntry = compendiumEntryIsRegistered(work->pairSort.pairs[index].resultId) == 0;
    dispatchIfFound(stockSlot, work->pairSort.pairs[index].resultId, 0);

    SlotRecordA *result;
    if (accident) {
        SlotRecordA merged;
        merged.id = work->pairSort.pairs[index].resultId;
        recordMergeByteMasks(work->context, &first, &second, 0, &merged);
        result = slotRecordFindById(merged.id);
        memcpy(result->inheritedFlags, merged.inheritedFlags, sizeof(result->inheritedFlags));

        /* The skills chosen for inheritance come first, the result's own inheritable skills after them. */
        u16 candidates[32] = {0};
        memcpy(candidates, work->inheritanceA.skills, 24 * sizeof(u16));
        NkmBaseRecordA *original = nkmBaseGetRecord(originalResultId);
        for (s32 i = 0; i < 8; i++) {
            if (original->skills.ids[i] != 0 &&
                (findSkillMetadataById(original->skills.ids[i])->flags & SKILL_INHERITABLE) != 0 &&
                arrayContainsU16(candidates, 32, original->skills.ids[i]) == 0) {
                candidates[24 + i] = original->skills.ids[i];
            }
        }

        u8 race = nkmBaseGetRecord(work->pairSort.pairs[index].resultId)->race;
        if (race == RACE_KEEPS_SKILLS || race == RACE_KEEPS_SKILLS_2) {
            qsort(candidates, 32, 2, uiCompareMaskedRecordRankDescending);
            s32 unlocked = getUnlockedSlotCount(result);
            for (s32 i = 0; i < 32; i++) {
                if (candidates[i] == 0 || arrayContainsU16(result->skills, 8, candidates[i]) != 0)
                    continue;
                s32 free = 0;
                while (free < unlocked) {
                    if (result->skills[free] == 0) {
                        result->skills[free] = candidates[i];
                        break;
                    }
                    free++;
                }
                if (free == unlocked)
                    break;
            }
        } else {
            for (s32 i = 0; i < 8; i++) {
                if ((findSkillMetadataById(result->skills[i])->flags & SKILL_INHERITABLE) != 0) {
                    if (arrayContainsU16(candidates, 32, result->skills[i]) == 0)
                        candidates[24 + i] = result->skills[i];
                    result->skills[i] = 0;
                }
            }
            qsort(result->skills, 8, 2, uiCompareMaskedRecordRankDescending);
            qsort(candidates, 32, 2, uiCompareMaskedRecordRankDescending);
            s32 unlocked = getUnlockedSlotCount(result);
            for (s32 i = 0; i < unlocked; i++) {
                if (result->skills[i] != 0 || candidates[0] == 0)
                    continue;
                if (i < 4) {
                    result->skills[i] = candidates[0];
                    candidates[0] = 0;
                } else {
                    s32 count = 0;
                    while (count < 32) {
                        if (candidates[count] == 0)
                            break;
                        if (candidates[count + 1] == 0) {
                            count++;
                            break;
                        }
                        count += 2;
                    }
                    u32 chosen = randRange((u16)(count - 1));
                    result->skills[i] = candidates[chosen];
                    candidates[chosen] = 0;
                }
                qsort(candidates, 32, 2, uiCompareMaskedRecordRankDescending);
            }
        }
        unitRecomputeDerivedStats(result);
        view->resultIndex = virtualSlotAlwaysTrue(work->context, result);
        view->resultLevel = result->level;
        result->skillRankWords[0] = 0;
        result->skillRankWords[1] = 0;
        FUN_004bd17c(result);
    } else {
        result = slotRecordFindById(view->shownResult.id);
        memcpy(result->inheritedFlags, view->shownResult.inheritedFlags, sizeof(result->inheritedFlags));
        memcpy(result->skills, view->shownResult.skills, getUnlockedSlotCount(result) << 1);
        unitRecomputeDerivedStats(result);
        view->resultIndex = virtualSlotAlwaysTrue(work->context, result);
        view->resultLevel = result->level;
        result->skillRankWords[0] = 0;
        result->skillRankWords[1] = 0;
        FUN_004bd17c(result);
    }

    result->hp = recordGetScaledMaximum(result);
    result->mp = result->maxMp;
    if (newEntry)
        compendiumRegisterPartyDemon(result->id);
    gameCounterAddSaturating(COUNTER_FUSIONS, 1);
    if (accident)
        gameCounterAddSaturating(COUNTER_ACCIDENTS, 1);
    saveMarkIdListSeen(result);
    return accident;
}
}
