#ifndef QUEST_CENTER_QUESTREQUIREMENT_H
#define QUEST_CENTER_QUESTREQUIREMENT_H
#include "common.h"
#include <stddef.h>
/* One requirement (goal) of a quest record: what must be done and how many times. */
struct QuestRequirement {
    /* 0x0 */ u16 kind;   /* 1: counter, 2: party member/progress, 3: macca, 5: unit condition, 6: unit total, 7: AoC entry */
    /* 0x2 */ u16 id;     /* the item, flag, unit or entry the kind names */
    /* 0x4 */ u32 count;  /* the amount required */
};
struct QuestRequirementProgress {
    s32 remaining;
    u16 id;
    u8 isItem;
    u8 unk07;
    s32 current;
};
struct QuestRequirementSavedProgress { u16 flags; u16 counts[1]; };
typedef char QuestRequirementOffsets[sizeof(QuestRequirement) == 8 && sizeof(QuestRequirementProgress) == 0xC && offsetof(QuestRequirementProgress, current) == 8 ? 1 : -1];
#endif
