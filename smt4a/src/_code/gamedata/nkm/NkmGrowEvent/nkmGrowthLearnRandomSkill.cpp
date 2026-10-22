/* NON_MATCHING: exclusion initialization copies halfwords rather than four words and loop registers differ; -O2 candidate. */
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

struct GrowDemon {
    u8 unk00[0x34];
    u16 skills[8];
    u8 unk44[0x1e];
    u16 id;
};
struct GrowLearnedSkill { u16 level, skill; };
struct GrowDefinition {
    u8 unk00[0x40];
    u16 skills[8];
    GrowLearnedSkill learned[8];
};
extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void asdMemFree(void *);
const GrowDefinition *FUN_00184310(u32);
s32 randRange(u32);
s32 uiCompareHalfwordKeysDescending(const void *, const void *);
void qsort(void *, u32, u32, s32 (*)(const void *, const void *));
void FUN_004bd6b0(GrowDemon *, u16);
void FUN_004bcd90(GrowDemon *);
void recordRestoreScaledMaximumPair(GrowDemon *);

u16 nkmGrowthLearnRandomSkill(GrowDemon *demon)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\nkm\\NkmGrowEvent.cpp", 598);
    u16 *candidates = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0x3ea, 1);
    const GrowDefinition *definition = FUN_00184310(demon->id);
    s32 rank = 0;
    for (s32 i = 0; i < 8; ++i) {
        if (definition->skills[i]) {
            const CompactSortRecord *skill = findSkillMetadataById(definition->skills[i]);
            if (rank < (skill->flags & 0x1f))
                rank = skill->flags & 0x1f;
        }
    }
    s32 roll = randRange(99);
    u16 excluded[16] = {
        demon->skills[0], demon->skills[1], demon->skills[2], demon->skills[3],
        demon->skills[4], demon->skills[5], demon->skills[6], demon->skills[7],
        definition->learned[0].skill, definition->learned[1].skill,
        definition->learned[2].skill, definition->learned[3].skill,
        definition->learned[4].skill, definition->learned[5].skill,
        definition->learned[6].skill, definition->learned[7].skill
    };
    if (roll < 3)
        ++rank;
    qsort(excluded, 16, sizeof(u16), uiCompareHalfwordKeysDescending);
    s32 count = 0;
    do {
        for (u16 id = 1; id <= 500; ++id) {
            const CompactSortRecord *skill = findSkillMetadataById(id);
            if (!(skill->flags & 0x80) || (skill->flags & 0x1f) != rank)
                continue;
            bool known = false;
            for (s32 i = 0; i < 16; ++i) {
                if (excluded[i] == id) {
                    known = true;
                    break;
                }
                if (!excluded[i])
                    break;
            }
            if (!known)
                candidates[count++] = id;
        }
    } while (count < 1 && --rank >= 0);
    u16 selected = 0;
    if (count > 0) {
        s32 index = randRange((count - 1) & 0xffff);
        for (s32 i = 0; i < 8; ++i) {
            if (!demon->skills[i]) {
                selected = candidates[index];
                FUN_004bd6b0(demon, selected);
                break;
            }
        }
    }
    FUN_004bcd90(demon);
    recordRestoreScaledMaximumPair(demon);
    asdMemFree(candidates);
    return selected;
}
}
