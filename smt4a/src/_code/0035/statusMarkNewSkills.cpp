/* NON_MATCHING: saved skill-history base and comparison scratch use ip/r6 instead of retail's r6/ip. */
#include "common.h"

union SkillHistory {
    /* 0x00 */ u32 words[4];
    /* 0x00 */ u16 skills[8];
};
struct StatusLearnedSkillState {
    /* 0x000 */ u8 unk000[0x59c];
    union {
        /* 0x59C */ u16 skills[16];
        /* 0x59C */ SkillHistory history;
    };
    /* 0x5BC */ u8 unk5bc[0x20];
    /* 0x5DC */ u8 newlyLearned[16];
};

extern "C" StatusLearnedSkillState *g_statusDown;
extern "C" void statusReplaceSkills(void *source, u32 count);

/* Flag nonempty skills absent from the previous eight-slot history. */
extern "C" void statusMarkNewSkills(void *source, u32 count)
{
    if (count > 16)
        return;
    StatusLearnedSkillState *status = g_statusDown;
    SkillHistory previous = status->history;
    statusReplaceSkills(source, count);
    for (s32 index = 0; index < (s32)count; ++index) {
        u16 skill = status->skills[index];
        if (skill != 0) {
            s32 oldIndex;
            for (oldIndex = 0; oldIndex < 8; ++oldIndex) {
                if (previous.skills[oldIndex] != 0 && previous.skills[oldIndex] == skill)
                    break;
            }
            if (oldIndex >= 8)
                status->newlyLearned[index] = true;
        }
    }
}
