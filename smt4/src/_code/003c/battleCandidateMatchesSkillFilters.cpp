#include "gamedata/FusionCandidateFilter.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/SkillFlags.h"

namespace {
struct FusionSkillFilterView {
    u8 prefix[0x120];
    s8 matchSkill;
    u8 padding121;
    u16 skill;
    u8 padding124[0xE];
    s8 matchAffinity;
    u8 padding133;
    u16 affinity;
    u8 padding136[0xD];
    s8 matchCategory;
    u16 category;
    u16 skills[24];
    u8 padding176[2];
    u32 count;
};
struct DevilAffinityView {
    u8 prefix[0x6C];
    u16 resistances[16];
};
}
extern "C" {
s32 halfwordKeyEmptyLastCompare(const void *first, const void *second);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                  s32 (*compare)(const void *, const void *));

// Check the selected skill, skill category and affinity-dependent passive-skill range.
u32 battleCandidateMatchesSkillFilters(FusionCandidateFilter *owner, u32 unusedA, u32 unusedB, u16 id)
{
    FusionSkillFilterView *filter = reinterpret_cast<FusionSkillFilterView *>(owner);
    const DevilAffinityView *record = reinterpret_cast<const DevilAffinityView *>(devilGetRecord(id));
    if (filter->matchSkill) {
        if (!libc_bsearch(&filter->skill, filter->skills, filter->count, sizeof(u16), halfwordKeyEmptyLastCompare))
            return 0;
    } else if (filter->matchCategory) {
        bool found = false;
        for (s32 i = 0; i < 24; ++i) {
            u16 skill = filter->skills[i];
            if (!skill)
                break;
            if (filter->category == dataTable06Sub1GetRecord(skill)->category) {
                found = true;
                break;
            }
        }
        if (!found)
            return 0;
    }
    if (filter->matchAffinity) {
        u32 affinity = filter->affinity;
        u16 resistance = record->resistances[affinity & 0x3ff];
        if (!(resistance & 0xfc00) || (resistance >> 10) == 2) {
            u16 first = 0, last = 0;
            if ((affinity & 0x3ff) == 0) { first = 401; last = 404; }
            if ((affinity & 0x3ff) == 1) { first = 405; last = 408; }
            if ((affinity & 0x3ff) == 2) { first = 409; last = 412; }
            if ((affinity & 0x3ff) == 3) { first = 413; last = 416; }
            if ((affinity & 0x3ff) == 4) { first = 417; last = 420; }
            if ((affinity & 0x3ff) == 5) { first = 421; last = 424; }
            if ((affinity & 0x3ff) == 6) { first = 427; last = 428; }
            if ((affinity & 0x3ff) == 7) { first = 425; last = 426; }
            if ((affinity & 0x3ff) == 11 || (affinity & 0x3ff) == 14 || (affinity & 0x3ff) == 15) {
                first = 430;
                last = first;
            }
            if ((affinity & 0x3ff) == 12 || (affinity & 0x3ff) == 13) {
                first = 429;
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
