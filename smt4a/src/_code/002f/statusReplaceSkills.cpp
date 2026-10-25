#include "common.h"

struct StatusSkillListState {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ u8 refresh;
    /* 0x529 */ u8 unk529[0x73];
    union {
        /* 0x59C */ u16 skills[16];
        /* 0x59C */ u32 skillWords[4];
    };
    /* 0x5BC */ u8 unk5bc[0x20];
    /* 0x5DC */ u32 newSkillFlags[4];
    /* 0x5EC */ u8 selector[0x74];
    /* 0x660 */ u8 selection;
};

extern "C" StatusSkillListState *g_statusDown;
extern "C" void *rt_memcpy(void *destination, const void *source, u32 size);
extern "C" void FUN_00203b40(void *selector, s32 count, s32 rows, s32 wrap, s32 first, s32 enabled);

/* Replace the displayed skills and configure the selector for its nonempty prefix. */
extern "C" void statusReplaceSkills(const u16 *skills, u8 count)
{
    if (count > 16)
        return;
    StatusSkillListState *status = g_statusDown;
    for (s32 index = 0; index < 4; ++index)
        status->newSkillFlags[index] = 0;
    for (s32 index = 0; index < 4; ++index)
        status->skillWords[index] = 0;
    rt_memcpy(status->skills, skills, count * sizeof(u16));
    s32 nonempty;
    for (nonempty = 0; nonempty < count; ++nonempty) {
        if (status->skills[nonempty] == 0)
            break;
    }
    FUN_00203b40(status->selector, nonempty, 8, 1, 0, 1);
    status->refresh = true;
    status->selection = 0;
}
