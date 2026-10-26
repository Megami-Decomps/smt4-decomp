/* NON_MATCHING: learned-skill exclusion copy is looped and zero/stack-base scheduling differs. */
#include "gamedata/UnitStats.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/SkillFlags.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void asdMemFree(void *);
s32 randNextInRange(u32);
void FUN_002b7bca(void *, u32, u32, s32 (*)(const void *, const void *));
s32 dataCompareUnsignedHalfwordKeysDescending(const void *, const void *);
void unitRecalculateEffectiveStats(StatBlock *);
void FUN_002954bc(StatBlock *);

/* Learn an eligible random skill, excluding both known and naturally learned skills. */
u16 FUN_0033b960(StatBlock *unit)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\nkm\\NkmGrowEvent.cpp", 585);
    u16 *candidates = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 501 * sizeof(u16), 1);
    const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(unit->id));
    s32 tier = 0;
    for (s32 index = 0; index < 8; ++index) {
        u16 skill = record->skillList.ids[index];
        if (skill != 0) {
            const SkillFlagsRecord *information = dataTable06Sub1GetRecord(skill);
            if (tier < (information->flags & 0x1F))
                tier = information->flags & 0x1F;
        }
    }
    if (randNextInRange(99) < 3)
        ++tier;
    u16 known[16];
    memcpy(known, unit->skills.ids, sizeof(unit->skills));
    for (s32 index = 0; index < 8; ++index)
        known[8 + index] = record->learnedSkills.entries[index].id;
    FUN_002b7bca(known, 16, sizeof(u16), dataCompareUnsignedHalfwordKeysDescending);

    s32 count = 0;
    do {
        for (u16 skill = 1; skill < 501; ++skill) {
            u8 flags = dataTable06Sub1GetRecord(skill)->flags;
            if ((flags & 0x80) && (flags & 0x1F) == tier) {
                bool alreadyKnown = false;
                for (s32 index = 0; index < 16; ++index) {
                    u16 existing = known[index];
                    if (existing == skill) {
                        alreadyKnown = true;
                        break;
                    }
                    if (existing == 0)
                        break;
                }
                if (!alreadyKnown)
                    candidates[count++] = skill;
            }
        }
    } while (count <= 0 && --tier >= 0);

    u16 learned = 0;
    if (count > 0) {
        s32 selection = randNextInRange((u16)(count - 1));
        for (s32 index = 0; index < 8; ++index) {
            if (unit->skills.ids[index] == 0) {
                learned = candidates[selection];
                unit->skills.ids[index] = learned;
                break;
            }
        }
    }
    unitRecalculateEffectiveStats(unit);
    FUN_002954bc(unit);
    asdMemFree(candidates);
    return learned;
}
}
