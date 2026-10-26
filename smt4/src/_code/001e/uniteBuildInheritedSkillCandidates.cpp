/* NON_MATCHING: skill clearing becomes memclr, shared-loop pointer setup and sort-key bitfield packing differ; -O2 candidate. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gamedata/SkillFlags.h"

struct FusionSkillWork {
    u8 unk0000[0x9020];
    u16 inherited[24];
    u8 unk9050[0x1b4];
    u8 selector[1]; // 0x9204
};
struct FusionSkillDemon {
    u8 unk00[0x34];
    u16 skills[8];
    u16 unk44;
    u16 id;
};
struct FusionSkillDefinition {
    u8 unk00[0x3c];
    u16 skills[8];
};
struct FusionSkillSortKey {
    u32 first : 15;
    u32 second : 15;
    u32 kind : 2;
    u32 mode : 2;
    u32 result : 15;
    u32 reserved : 15;
};
extern "C" {
extern UniteWork *g_unite;
const FusionSkillDefinition *devilGetRecord(u32);
void FUN_0029f848(void *, s32, s32, s32, s32, s32);
void FUN_0029b130(u16 *, s32, const FusionSkillSortKey *, u32);
}

static inline s32 appendInheritedSkills(FusionSkillWork *work, const FusionSkillDemon *parent,
                                        const FusionSkillDefinition *result, s32 count)
{
    for (s32 i = 0; i < 8; ++i) {
        if (parent->skills[i] && (dataTable06Sub1GetRecord(parent->skills[i])->flags & 0x20) &&
            !arrayContainsU16(work->inherited, 24, parent->skills[i]) &&
            !arrayContainsU16(result->skills, 8, parent->skills[i]))
            work->inherited[count++] = parent->skills[i];
    }
    return count;
}

extern "C" void uniteBuildInheritedSkillCandidates(u32 resultId, const FusionSkillDemon *first, const FusionSkillDemon *second)
{
    FusionSkillWork *work = (FusionSkillWork *)g_unite;
    const FusionSkillDefinition *result = devilGetRecord(resultId);
    for (s32 i = 0; i < 24; ++i)
        work->inherited[i] = 0;
    s32 count = appendInheritedSkills(work, first, result, 0);
    count = appendInheritedSkills(work, second, result, count);
    FUN_0029f848(work->selector, count, 8, 1, 1, 1);
    FusionSkillSortKey key;
    key.first = first->id;
    key.second = second->id;
    key.kind = 1;
    key.mode = 1;
    key.result = resultId;
    FUN_0029b130(work->inherited, count, &key, 0);
}
