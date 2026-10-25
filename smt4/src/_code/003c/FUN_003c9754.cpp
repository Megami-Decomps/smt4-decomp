/* NON_MATCHING: signed byte flags now retain retail's shared base; a zero-return branch and an LSLS scratch register still differ. */
#include "gamedata/FusionCandidateFilter.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/PackedSkillSlot.h"

namespace {
struct FusionSkillFilterView {
    u8 prefix[0x120];
    s8 matchSkill;
    u8 padding121;
    u16 skill;
    u8 padding124[0xE];
    s8 matchAffinity;
    u8 padding133;
    PackedSkillSlot affinity;
    u8 padding136[0xD];
    s8 matchCategory;
    u16 category;
    u16 skills[24];
    u8 padding176[2];
    u32 count;
};
struct SkillCategoryRecord { u16 id; u8 category; };
}
extern "C" {
const SkillCategoryRecord *dataTable06Sub1GetRecord(u32 id);
s32 halfwordKeyEmptyLastCompare(const void *first, const void *second);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                  s32 (*compare)(const void *, const void *));

// Check the selected skill, skill category and affinity-dependent passive-skill range.
u32 FUN_003c9754(FusionCandidateFilter *owner, u32 unusedA, u32 unusedB, u16 id)
{
    struct DevilAffinityView { u8 prefix[0x6C]; PackedSkillSlot affinities[16]; };
    FusionSkillFilterView *filter = reinterpret_cast<FusionSkillFilterView *>(owner);
    const DevilSortRecord *record = devilGetRecord(id);
    if (filter->matchSkill != 0) {
        if (libc_bsearch(&filter->skill, filter->skills, filter->count, sizeof(u16), halfwordKeyEmptyLastCompare) == NULL)
            return 0;
    } else if (filter->matchCategory != 0) {
        s32 index = 0;
        for (;;) {
            u16 skill = filter->skills[index];
            if (skill == 0)
                return 0;
            if (dataTable06Sub1GetRecord(skill)->category == filter->category)
                break;
            if (++index >= 24)
                return 0;
        }
    }
    if (filter->matchAffinity != 0) {
        const PackedSkillSlot *affinity = &reinterpret_cast<const DevilAffinityView *>(record)->affinities[filter->affinity.id];
        if (affinity->unk00 != 0 && affinity->unk00 != 2)
            return 1;
        u16 first = 0;
        u16 last = 0;
        if (filter->affinity.id == 0) { first = 401; last = 404; }
        if (filter->affinity.id == 1) { first = 405; last = 408; }
        if (filter->affinity.id == 2) { first = 409; last = 412; }
        if (filter->affinity.id == 3) { first = 413; last = 416; }
        if (filter->affinity.id == 4) { first = 417; last = 420; }
        if (filter->affinity.id == 5) { first = 421; last = 424; }
        if (filter->affinity.id == 6) { first = 427; last = 428; }
        if (filter->affinity.id == 7) { first = 425; last = 426; }
        if (filter->affinity.id == 11 || filter->affinity.id == 14 || filter->affinity.id == 15) { first = 430; last = first; }
        if (filter->affinity.id == 12 || filter->affinity.id == 13) { first = 429; last = first; }
        for (s32 index = 0; index < 24; ++index) {
            u16 skill = filter->skills[index];
            if (skill == 0)
                return 0;
            if (first <= skill && skill <= last)
                return 1;
        }
        return 0;
    }
    return 1;
}
}
