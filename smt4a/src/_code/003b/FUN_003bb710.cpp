/* NON_MATCHING: Innate-skill aggregate copy grouping, merged-buffer/source addressing and the inherited-skill count loop unrolling differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
extern UniteWork *g_unite;
DevilRecordA *FUN_00184310(u32 id);
void sysMemClear(void *memory, u32 size);
u32 FUN_0032fea0(const u16 *skills, s32 count, u16 skill);
void rt_memcpy_w(void *destination, const void *source, u32 size);
void FUN_00203b40(void *cursor, s32 count, s32 visibleRows, s32 first, s32 second, s32 third);
}

static __inline void fusionAppendUniqueSkill(u16 *merged, const u16 *skill)
{
    if (FUN_0032fea0(merged, 24, *skill) == 0) {
        for (s32 index = 0; index < 96; ++index) {
            if (merged[index] == 0) {
                merged[index] = *skill;
                break;
            }
        }
    }
}

extern "C" void FUN_003bb710(u32 devilId)
{
    /* These skill fields extend the demon prefix and the shared 24-slot inheritance view. */
    struct InitialSkills {
        u16 ids[8];
    };
    struct SkillRecordView {
        DevilRecordA header;
        InitialSkills skills;
    };
    struct InheritanceView {
        u8 unk0000[0x8B60];
        InitialSkills initial;
        u16 inherited[96];
        u16 additional[96];
        u16 merged[96];
        u8 unk8DB0[0x64];
        u8 cursor[0x64];
        u8 unk8E78[8];
        s32 inheritedCount;
        s32 totalCount;
    };
    typedef char SkillLayoutCheck[offsetof(SkillRecordView, skills) == 0x40 &&
        offsetof(InheritanceView, inherited) == 0x8B70 && offsetof(InheritanceView, additional) == 0x8C30 &&
        offsetof(InheritanceView, merged) == 0x8CF0 && offsetof(InheritanceView, cursor) == 0x8E14 &&
        offsetof(InheritanceView, inheritedCount) == 0x8E80 && offsetof(InheritanceView, totalCount) == 0x8E84 ? 1 : -1];
    UniteWork *work = g_unite;
    SkillRecordView *record = (SkillRecordView *)FUN_00184310(devilId);
    InheritanceView *inheritance = (InheritanceView *)work;
    inheritance->initial = record->skills;
    sysMemClear(inheritance->merged, sizeof(inheritance->merged));
    for (s32 index = 0; index < 8; ++index) {
        if (inheritance->initial.ids[index] != 0) {
            fusionAppendUniqueSkill(inheritance->merged, &inheritance->initial.ids[index]);
        }
    }
    for (s32 index = 0; index < 96; ++index) {
        if (inheritance->inherited[index] == 0) {
            break;
        }
        fusionAppendUniqueSkill(inheritance->merged, &inheritance->inherited[index]);
    }
    s32 capacity = 24;
    if (work->state == 28) {
        capacity = 96;
    }
    rt_memcpy_w(inheritance->inherited, inheritance->merged, capacity * sizeof(u16));
    s32 count = 0;
    for (s32 index = 0; index < 96; ++index) {
        if (inheritance->inherited[index] == 0) {
            break;
        }
        ++count;
    }
    inheritance->inheritedCount = count;
    for (s32 index = 0; index < 96; ++index) {
        u16 skill = inheritance->additional[index];
        if (skill == 0) {
            break;
        }
        inheritance->inherited[count++] = skill;
    }
    inheritance->totalCount = count;
    FUN_00203b40(inheritance->cursor, count + 1, 9, 1, 1, 1);
}
