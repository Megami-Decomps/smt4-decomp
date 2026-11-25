/* NON_MATCHING: 420 lines. Retail lays the three unit records out as second (sp+4), generated, first
 * (here first, second, generated), computes the first's address before anything else and keeps both
 * parents' addresses in stack slots for the merge call; it reaches the pair through the work plus
 * index*8 with the 0x390 offset left in each load (here one pair pointer), keeps needsNotification in fp
 * (here a stack slot), and builds the second parent with a predicated call. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "camp/Unite/UniteGlobals.h"
#include <stddef.h>
#include "gamedata/SkillFlags.h"
#include "gamedata/UnitStats.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

StatBlock* partyMemberFindById(u32 id); // declcheck: local (returns the unit record; the shared prototype keeps the decompiler's int)
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
int FUN_003c88f0(void* context, StatBlock* first, StatBlock* second);
int FUN_003c92b8(void* context, u32 firstId,
                 u32 secondId, UnitePairEntryIV* selection);
int partyFindActiveSlotById(u32 id);
void FUN_0029bbc8(int slot);
void* partyFindFreeStockSlot();
int itemGetFlagBit1(u32 id);
void dispatchIfFound(void* object, u32 id, int mode); // declcheck: local (the shared declaration in code/Code0029.h does not compile here: argument of type "void *" is incompatible with parameter of type "s32")
void uniteMergeInheritedSkillsAndStats(void* context, StatBlock* first,
                 StatBlock* second, int mode, StatBlock* result);
int arrayContainsU16(const u16* values, int count, u32 value);
int dataTable06ComparePriority(const void* left, const void* right);
void qsort(void* base, int count, int elementSize,
                  int (*compare)(const void*, const void*));
u32 randNextInRange(u32 maximum);
void unitRecalculateEffectiveStats(StatBlock* member);
u32 FUN_0029c0c0(void* context, StatBlock* member);
void FUN_0029bed8(u32 id);
void gameCounterAddSaturating(int flag, int value);
void saveMarkIdListSeen(StatBlock* member);

/* Performs the selected fusion: builds both parents, removes them from the party, creates the result
 * in a free stock slot and gives it the inherited skills (or, when the fusion fails, the unit that
 * was shown), then heals it and counts the fusion. Returns 1 when the fusion succeeded. */
int uniteCreateSelectedResult(u32 selectionIndex)
{
    UniteWork *state = g_unite;
    UnitePairEntryIV* selection = &state->pairListIV.pairs[selectionIndex];
    StatBlock first;
    StatBlock second;
    bool succeeded = false;

    if (selection->firstType == 1) {
        first = *partyMemberFindById(selection->firstId);
    } else if (selection->firstType == 3) {
        unitInitializeFromSavedRecord(selection->firstId, &first);
    }

    const u32 secondId = selection->secondId;
    switch (selection->secondType) {
    case 1:
        second = *partyMemberFindById(secondId);
        break;
    case 3:
        unitInitializeFromSavedRecord(secondId, &second);
        break;
    }

    const u32 originalResultId = selection->resultId;
    if (FUN_003c88f0(state->context, &first, &second) != 0) {
        if (FUN_003c92b8(state->context, selection->firstId,
                         selection->secondId, selection) != 0) {
            succeeded = true;
        } else {
            selection->resultId = originalResultId;
        }
    }

    if (selection->firstType == 1)
        FUN_0029bbc8(partyFindActiveSlotById(first.id));
    if (selection->secondType == 1)
        FUN_0029bbc8(partyFindActiveSlotById(second.id));

    void* object = partyFindFreeStockSlot();
    const bool needsNotification = itemGetFlagBit1(selection->resultId) == 0;
    dispatchIfFound(object, selection->resultId, 0);

    StatBlock* member;
    if (succeeded) {
        StatBlock generated;
        generated.id = static_cast<u16>(selection->resultId);
        uniteMergeInheritedSkillsAndStats(state->context, &first, &second, 0, &generated);
        member = partyMemberFindById(generated.id);
        member->growth.progressWords[0] = generated.growth.progressWords[0];
        member->growth.progressWords[1] = generated.growth.progressWords[1];
        __aeabi_memcpy4(member->growth.counters, generated.growth.counters, 0x500);

        u16 candidates[32] = {0};
        /* The skills chosen for inheritance come first, the result's own flagged skills after them. */
        for (int i = 0; i < 24; ++i)
            candidates[i] = state->secondListIV.indices[i];

        NkmBaseRecord *original = nkmBaseGetRecord(originalResultId);
        for (int i = 0; i < 8; ++i) {
            const u16 skill = original->skills[i];
            if (skill != 0 &&
                (dataTable06Sub1GetRecord(skill)->flags & 0x20) != 0 &&
                arrayContainsU16(candidates, 32, original->skills[i]) == 0) {
                candidates[24 + i] = original->skills[i];
            }
        }

        if (nkmBaseGetRecord(selection->resultId)->race == 51) {
            qsort(candidates, 32, 2, dataTable06ComparePriority);
            const int unlocked = flagCountUnlockedSlots(member);
            for (int i = 0; i < 32; ++i) {
                if (candidates[i] == 0 ||
                    arrayContainsU16(member->skills.ids, 8, candidates[i]) != 0)
                    continue;

                int slot = 0;
                if (unlocked > 0) {
                    while (slot < unlocked) {
                        if (member->skills.ids[slot] == 0) {
                            member->skills.ids[slot] = candidates[i];
                            break;
                        }
                        ++slot;
                    }
                }
                if (slot == unlocked)
                    break;
            }
        } else {
            for (int i = 0; i < 8; ++i) {
                if ((dataTable06Sub1GetRecord(member->skills.ids[i])->flags & 0x20) != 0) {
                    if (arrayContainsU16(candidates, 32, member->skills.ids[i]) == 0)
                        candidates[24 + i] = member->skills.ids[i];
                    member->skills.ids[i] = 0;
                }
            }

            qsort(member->skills.ids, 8, 2, dataTable06ComparePriority);
            qsort(candidates, 32, 2, dataTable06ComparePriority);
            const int unlocked = flagCountUnlockedSlots(member);
            for (int slot = 0; slot < unlocked; ++slot) {
                if (member->skills.ids[slot] != 0 || candidates[0] == 0)
                    continue;

                if (slot < 4) {
                    member->skills.ids[slot] = candidates[0];
                    candidates[0] = 0;
                } else {
                    int count = 0;
                    while (count < 32) {
                        if (candidates[count] == 0)
                            break;
                        if (candidates[count + 1] == 0) {
                            ++count;
                            break;
                        }
                        count += 2;
                    }
                    const u32 chosen = randNextInRange(
                        static_cast<u16>(count - 1));
                    member->skills.ids[slot] = candidates[chosen];
                    candidates[chosen] = 0;
                }
                qsort(candidates, 32, 2, dataTable06ComparePriority);
            }
        }

        unitRecalculateEffectiveStats(member);
        state->resultIndex = FUN_0029c0c0(state->context, member);
        state->resultLevel = member->level;
    } else {
        member = partyMemberFindById(state->resultSelectionIV.unit.id);
        member->growth.progressWords[0] = state->resultSelectionIV.unit.growth.progressWords[0];
        member->growth.progressWords[1] = state->resultSelectionIV.unit.growth.progressWords[1];
        __aeabi_memcpy4(member->growth.counters, state->resultSelectionIV.unit.growth.counters, 0x500);
        const int unlocked = flagCountUnlockedSlots(member);
        __aeabi_memcpy4(member->skills.ids, state->resultSelectionIV.unit.skills.ids,
                    static_cast<u32>(unlocked) << 1);
        unitRecalculateEffectiveStats(member);
        state->resultIndex = FUN_0029c0c0(state->context, member);
        state->resultLevel = member->level;
    }

    member->hp = member->maxHp;
    member->mp = member->maxMp;
    if (needsNotification)
        FUN_0029bed8(member->id);
    gameCounterAddSaturating(38, 1);
    if (succeeded)
        gameCounterAddSaturating(39, 1);
    saveMarkIdListSeen(member);
    return succeeded ? 1 : 0;
}
}
