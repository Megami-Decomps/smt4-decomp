/* NON_MATCHING: only the register numbers of the final empty-slot search loop (i/temporary) differ. */
#include "AsdSDK/AsdDebug.h"
#include "gamedata/DevilRecordA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

// The demon's eight skill ids; copied as one 16-byte block.
union GrowSkillSet { u16 ids[8]; u32 words[4]; };
struct GrowDemon {
    u8 unk00[0x34];
    GrowSkillSet skills;
    u8 unk44[0x1e];
    u16 id;
};
extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void asdMemFree(void *);
s32 randRange(u32);
s32 uiCompareHalfwordKeysDescending(const void *, const void *);
void qsort(void *, u32, u32, s32 (*)(const void *, const void *));
void partyRecordSetEquippedItemClampRank(GrowDemon *, u16);
void unitRecomputeDerivedStats(GrowDemon *);
void recordRestoreScaledMaximumPair(GrowDemon *);

u16 nkmGrowthLearnRandomSkill(GrowDemon *demon)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\nkm\\NkmGrowEvent.cpp", 598);
    u16 *candidates = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0x3ea, 1);
    s32 rank = 0;
    const DevilRecordA *definition = devilGetRecord(demon->id);
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
    struct {
        GrowSkillSet demon;
        u16 learned[8];
    } excluded;
    excluded.demon = demon->skills;
    excluded.learned[0] = definition->learnedSkills[0].id;
    excluded.learned[1] = definition->learnedSkills[1].id;
    excluded.learned[2] = definition->learnedSkills[2].id;
    excluded.learned[3] = definition->learnedSkills[3].id;
    excluded.learned[4] = definition->learnedSkills[4].id;
    excluded.learned[5] = definition->learnedSkills[5].id;
    excluded.learned[6] = definition->learnedSkills[6].id;
    excluded.learned[7] = definition->learnedSkills[7].id;
    qsort(&excluded, 16, sizeof(u16), uiCompareHalfwordKeysDescending);
    s32 count = 0;
    do {
        for (u16 id = 1; id <= 500; ++id) {
            const CompactSortRecord *skill = findSkillMetadataById(id);
            if (!(skill->flags & 0x80) || (skill->flags & 0x1f) != rank)
                continue;
            bool known = false;
            for (s32 i = 0; i < 16; ++i) {
                if (excluded.demon.ids[i] == id) {
                    known = true;
                    break;
                }
                if (!excluded.demon.ids[i])
                    break;
            }
            if (!known)
                candidates[count++] = id;
        }
    } while (count <= 0 && --rank >= 0);
    u16 selected = 0;
    if (count > 0) {
        s32 index = randRange((count - 1) & 0xffff);
        s32 i = 0;
        while (i < 8 && demon->skills.ids[i])
            ++i;
        if (i < 8) {
            selected = candidates[index];
            partyRecordSetEquippedItemClampRank(demon, selected);
        }
    }
    unitRecomputeDerivedStats(demon);
    recordRestoreScaledMaximumPair(demon);
    asdMemFree(candidates);
    return selected;
}
}
