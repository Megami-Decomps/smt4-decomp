/* NON_MATCHING: packed-selection loads and three member snapshots use different registers and stack placement. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include <stddef.h>

extern "C" {

struct WordBlock32 {
    u32 words[8];
};

struct PartyMemberView {
    u8 unknown00[0x0e];       // 0x000
    u16 currentValueA;       // 0x00e
    u16 currentValueB;       // 0x010
    u8 unknown12[0x18];      // 0x012
    u16 savedValueA;         // 0x02a
    u16 savedValueB;         // 0x02c
    u8 unknown2e[6];         // 0x02e
    u16 skills[8];           // 0x034
    u8 unknown44[2];         // 0x044
    u16 id;                  // 0x046
    u8 status;               // 0x048
    u8 unknown49[3];         // 0x049
    WordBlock32 attributes;            // 0x04c
    WordBlock32 secondaryAttributes;   // 0x06c
    u8 extendedData[0x500];   // 0x08c
    u8 unknown58c[0x78];      // 0x58c
};


struct UniteStateView {
    void* context;                     // 0x0000
    u8 unknown0004[0x138c];   // 0x0004
    UnitePairEntryIV selections[
        (0x66a8 - 0x1390) / 8];        // 0x1390
    u16 savedSkills[8];       // 0x66a8
    u8 unknown66b8[2];        // 0x66b8
    u16 savedMemberId;        // 0x66ba
    u8 unknown66bc[4];        // 0x66bc
    WordBlock32 savedAttributes;       // 0x66c0
    WordBlock32 savedSecondary;        // 0x66e0
    u8 savedExtended[0x500];  // 0x6700
    u8 unknown6c00[0x2420];   // 0x6c00
    u16 inheritedSkills[24]; // 0x9020
    u8 unknown9050[0x408];    // 0x9050
    u32 resultIndex;         // 0x9458
    u32 resultStatus;        // 0x945c
};

struct DevilRecordView {
    u8 unknown00[2];         // 0x00
    u8 category;             // 0x02
    u8 unknown03[0x39];       // 0x03
    u16 skills[8];           // 0x3c
};

struct SkillRecordView {
    u8 unknown00[3];         // 0x00
    u8 flags;                // 0x03
};

extern UniteStateView* g_unite;

extern "C" {
PartyMemberView* partyMemberFindById(u32 id);
void rt_memcpy_w(void* destination, const void* source, u32 size);
void unitInitializeFromSavedRecord(u32 id, PartyMemberView* destination);
int FUN_003c88f0(void* context, PartyMemberView* first, PartyMemberView* second);
int FUN_003c92b8(void* context, u32 firstId,
                 u32 secondId, UnitePairEntryIV* selection);
int partyFindActiveSlotById(u32 id);
void FUN_0029bbc8(int slot);
void* FUN_0029c1fc();
int FUN_0029ea68(u32 id);
void FUN_0029c1c8(void* object, u32 id, int mode);
void uniteMergeInheritedSkillsAndStats(void* context, PartyMemberView* first,
                 PartyMemberView* second, int mode, PartyMemberView* result);
DevilRecordView* devilGetRecord(u32 id);
SkillRecordView* dataTable06Sub1GetRecord(u32 id);
int arrayContainsU16(const u16* values, int count, u32 value);
int dataTable06ComparePriority(const void* left, const void* right);
void FUN_002b7bca(void* base, int count, int elementSize,
                  int (*compare)(const void*, const void*));
int flagCountUnlockedSlots(PartyMemberView* member);
u32 randNextInRange(u32 maximum);
void unitRecalculateEffectiveStats(PartyMemberView* member);
u32 FUN_0029c0c0(void* context, PartyMemberView* member);
void FUN_0029bed8(u32 id);
void gameCounterAddSaturating(int flag, int value);
void FUN_0029bde4(PartyMemberView* member);
}


extern "C" int uniteCreateSelectedResult(u32 selectionIndex)
{
    UniteStateView* state = g_unite;
    UnitePairEntryIV* selection = &state->selections[selectionIndex];
    PartyMemberView first;
    PartyMemberView second;
    bool succeeded = false;

    const u32 firstId = selection->firstId;
    switch (selection->firstType) {
    case 1:
        rt_memcpy_w(&first, partyMemberFindById(firstId), 0x604);
        break;
    case 3:
        unitInitializeFromSavedRecord(firstId, &first);
        break;
    }

    const u32 secondId = selection->secondId;
    switch (selection->secondType) {
    case 1:
        rt_memcpy_w(&second, partyMemberFindById(secondId), 0x604);
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

    void* object = FUN_0029c1fc();
    const bool needsNotification = FUN_0029ea68(selection->resultId) == 0;
    FUN_0029c1c8(object, selection->resultId, 0);

    PartyMemberView* member;
    if (succeeded) {
        PartyMemberView generated;
        generated.id = static_cast<u16>(selection->resultId);
        uniteMergeInheritedSkillsAndStats(state->context, &first, &second, 0, &generated);
        member = partyMemberFindById(generated.id);
        member->attributes = generated.attributes;
        member->secondaryAttributes = generated.secondaryAttributes;
        rt_memcpy_w(member->extendedData, generated.extendedData, 0x500);

        u16 candidates[32] = {0};
        for (int i = 0; i < 24; ++i)
            candidates[i] = state->inheritedSkills[i];

        DevilRecordView* original = devilGetRecord(originalResultId);
        for (int i = 0; i < 8; ++i) {
            const u16 skill = original->skills[i];
            if (skill != 0 &&
                (dataTable06Sub1GetRecord(skill)->flags & 0x20) != 0 &&
                arrayContainsU16(candidates, 32, original->skills[i]) == 0) {
                candidates[24 + i] = original->skills[i];
            }
        }

        if (devilGetRecord(selection->resultId)->category == 51) {
            FUN_002b7bca(candidates, 32, 2, dataTable06ComparePriority);
            const int unlocked = flagCountUnlockedSlots(member);
            for (int i = 0; i < 32; ++i) {
                if (candidates[i] == 0 ||
                    arrayContainsU16(member->skills, 8, candidates[i]) != 0)
                    continue;

                int slot = 0;
                if (unlocked > 0) {
                    while (slot < unlocked) {
                        if (member->skills[slot] == 0) {
                            member->skills[slot] = candidates[i];
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
                if ((dataTable06Sub1GetRecord(member->skills[i])->flags & 0x20) != 0) {
                    if (arrayContainsU16(candidates, 32, member->skills[i]) == 0)
                        candidates[24 + i] = member->skills[i];
                    member->skills[i] = 0;
                }
            }

            FUN_002b7bca(member->skills, 8, 2, dataTable06ComparePriority);
            FUN_002b7bca(candidates, 32, 2, dataTable06ComparePriority);
            const int unlocked = flagCountUnlockedSlots(member);
            for (int slot = 0; slot < unlocked; ++slot) {
                if (member->skills[slot] != 0 || candidates[0] == 0)
                    continue;

                if (slot < 4) {
                    member->skills[slot] = candidates[0];
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
                    member->skills[slot] = candidates[chosen];
                    candidates[chosen] = 0;
                }
                FUN_002b7bca(candidates, 32, 2, dataTable06ComparePriority);
            }
        }

        unitRecalculateEffectiveStats(member);
        state->resultIndex = FUN_0029c0c0(state->context, member);
        state->resultStatus = member->status;
    } else {
        member = partyMemberFindById(state->savedMemberId);
        member->attributes = state->savedAttributes;
        member->secondaryAttributes = state->savedSecondary;
        rt_memcpy_w(member->extendedData, state->savedExtended, 0x500);
        const int unlocked = flagCountUnlockedSlots(member);
        rt_memcpy_w(member->skills, state->savedSkills,
                    static_cast<u32>(unlocked) << 1);
        unitRecalculateEffectiveStats(member);
        state->resultIndex = FUN_0029c0c0(state->context, member);
        state->resultStatus = member->status;
    }

    member->savedValueA = member->currentValueA;
    member->savedValueB = member->currentValueB;
    if (needsNotification)
        FUN_0029bed8(member->id);
    gameCounterAddSaturating(38, 1);
    if (succeeded)
        gameCounterAddSaturating(39, 1);
    FUN_0029bde4(member);
    return succeeded ? 1 : 0;
}
}
