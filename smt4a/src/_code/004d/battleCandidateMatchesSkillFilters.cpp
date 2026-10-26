#include "common.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

struct BattleSkillFilter {
    u8 unk000[0x158];
    s8 requireSkill;
    u8 unk159;
    u16 skill;
    u8 unk15c[0xe];
    s8 requireElement;
    u8 unk16b;
    u16 element;
    u8 unk16e[0xd];
    s8 requireCategory;
    u16 category;
    u16 skills[24];
    u8 unk1ae[2];
    u32 skillCount;
};
struct SkillFilterDefinition { u8 unk00[0x70]; u16 resistances[16]; };
extern "C" {
const SkillFilterDefinition *FUN_00184310(u32);
s32 halfwordKeyEmptyLastCompare(const u16 *, const u16 *);
const u16 *libc_bsearch(const u16 *, const u16 *, u32, u32, s32 (*)(const u16 *, const u16 *));

u32 battleCandidateMatchesSkillFilters(const BattleSkillFilter *filter, u32, u32, u32 demonId)
{
    const SkillFilterDefinition *definition = FUN_00184310(demonId);
    if (filter->requireSkill) {
        if (!libc_bsearch(&filter->skill, filter->skills, filter->skillCount, sizeof(u16), halfwordKeyEmptyLastCompare))
            return 0;
    } else if (filter->requireCategory) {
        bool found = false;
        for (s32 i = 0; i < 24; ++i) {
            u16 skill = filter->skills[i];
            if (!skill)
                break;
            if (filter->category == findSkillMetadataById(skill)->category) {
                found = true;
                break;
            }
        }
        if (!found)
            return 0;
    }
    if (filter->requireElement) {
        u32 element = filter->element;
        u16 resistance = definition->resistances[element & 0x3ff];
        if (!(resistance & 0xfc00) || (resistance >> 10) == 2) {
            u16 first = 0, last = 0;
            if ((element & 0x3ff) == 0) { first = 0x191; last = 0x194; }
            if ((element & 0x3ff) == 1) { first = 0x195; last = 0x198; }
            if ((element & 0x3ff) == 2) { first = 0x199; last = 0x19c; }
            if ((element & 0x3ff) == 3) { first = 0x19d; last = 0x1a0; }
            if ((element & 0x3ff) == 4) { first = 0x1a1; last = 0x1a4; }
            if ((element & 0x3ff) == 5) { first = 0x1a5; last = 0x1a8; }
            if ((element & 0x3ff) == 6) { first = 0x1ab; last = 0x1ac; }
            if ((element & 0x3ff) == 7) { first = 0x1a9; last = 0x1aa; }
            if ((element & 0x3ff) == 11 || (element & 0x3ff) == 14 || (element & 0x3ff) == 15) {
                first = 0x1ae;
                last = first;
            }
            if ((element & 0x3ff) == 12 || (element & 0x3ff) == 13) {
                first = 0x1ad;
                last = first;
            }
            for (s32 i = 0; i < 24; ++i) {
                u16 skill = filter->skills[i];
                if (!skill)
                    return 0;
                if (first <= skill && skill <= last)
                    return 1;
            }
            return 0;
        }
    }
    return 1;
}
}
