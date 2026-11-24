#ifndef QUEST_CENTER_QUESTRUNTIME_H
#define QUEST_CENTER_QUESTRUNTIME_H
#include "common.h"
#include <stddef.h>

struct QuestRuntimeStatus {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 progress;
    /* 0x02 */ u8 stateFlags;
    /* 0x03 */ u8 reserved;
};
struct QuestRuntimeFlagBlock {
    u8 flagBytes[0x200];
    QuestRuntimeStatus quests[400];
};
typedef char QuestRuntimeStatusLayoutCheck[
    sizeof(QuestRuntimeStatus) == 4 &&
    offsetof(QuestRuntimeFlagBlock, quests) == 0x200 ? 1 : -1];

/* Updates quest completion flags and writes the reward index if reward is not NULL. */
extern "C" void questCompletionSetTierFlags(u32 *reward);
#endif
