#include "AsdSDK/AsdDebug.h"
#include "util/Random.h"
#include "gamedata/nkm/NkmGrowEvent.h"
#include <string.h>
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

// Both sets of excluded skills are sorted and searched as one contiguous list.
union ExcludedSkills {
    u16 ids[16];
    struct {
        u32 equipped[4];
        u16 learned[8];
    } sets;
};
extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void asdMemFree(void *);
s32 uiCompareHalfwordKeysDescending(const void *, const void *);
void qsort(void *, u32, u32, s32 (*)(const void *, const void *));
void unitRecomputeDerivedStats(SlotRecordA *demon);

// Picks a compatible unknown skill, equips it in the first free slot, and refreshes the stats.
u16 nkmGrowthLearnRandomSkill(SlotRecordA *demon)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\nkm\\NkmGrowEvent.cpp", 598);
    u16 *candidates = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0x3ea, 1);
    s32 rank = 0;
    const NkmBaseRecordA *definition = nkmBaseGetRecord(demon->id);
    for (s32 i = 0; i < 8; ++i) {
        if (definition->skills.ids[i]) {
            const CompactSortRecord *skill = findSkillMetadataById(definition->skills.ids[i]);
            if (rank < (skill->flags & 0x1f))
                rank = skill->flags & 0x1f;
        }
    }
    s32 roll = randRange(99);
    if (roll < 3)
        ++rank;
    ExcludedSkills excluded;
    memcpy(excluded.sets.equipped, demon->skillWords, sizeof(excluded.sets.equipped));
    excluded.sets.learned[0] = definition->learnedSkills[0].id;
    excluded.sets.learned[1] = definition->learnedSkills[1].id;
    excluded.sets.learned[2] = definition->learnedSkills[2].id;
    excluded.sets.learned[3] = definition->learnedSkills[3].id;
    excluded.sets.learned[4] = definition->learnedSkills[4].id;
    excluded.sets.learned[5] = definition->learnedSkills[5].id;
    excluded.sets.learned[6] = definition->learnedSkills[6].id;
    excluded.sets.learned[7] = definition->learnedSkills[7].id;
    qsort(&excluded, 16, sizeof(u16), uiCompareHalfwordKeysDescending);
    s32 count = 0;
    do {
        for (u16 id = 1; id <= 500; ++id) {
            const CompactSortRecord *skill = findSkillMetadataById(id);
            if (!(skill->flags & 0x80) || (skill->flags & 0x1f) != rank)
                continue;
            bool known = false;
            for (s32 i = 0; i < 16; ++i) {
                if (excluded.ids[i] == id) {
                    known = true;
                    break;
                }
                if (!excluded.ids[i])
                    break;
            }
            if (!known)
                candidates[count++] = id;
        }
    } while (count <= 0 && --rank >= 0);
    u16 selected = 0;
    if (count > 0) {
        s32 index = randRange((count - 1) & 0xffff);
        for (s32 i = 0; i < 8; ++i) {
            if (demon->skills[i] == 0) {
                selected = candidates[index];
                partyRecordSetEquippedItemClampRank(demon, selected, i);
                break;
            }
        }
    }
    unitRecomputeDerivedStats(demon);
    recordRestoreScaledMaximumPair(demon);
    asdMemFree(candidates);
    return selected;
}
}
