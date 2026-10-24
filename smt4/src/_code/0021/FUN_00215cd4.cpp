/* NON_MATCHING: The inlined state change reuses the saved enabled constant and schedules its stores differently. */
#include "shard/W4_W4Match2_UiQuest.h"

namespace {
struct QuestFlagsRecord {
    /* 0x00 */ u8 unk00[7];
    /* 0x07 */ u8 flags;
};
}
static __inline void uiQuestChangeState(UiQuest *quest, s32 state)
{
    quest->previousState = quest->state;
    quest->state = state;
    quest->timer = 0;
}

extern "C" {
void uiQuestLoadResources(void);
void FUN_0028fe0c(u32 questId, s32 enabled);
u8 FUN_00298f88(u32 questId);
QuestFlagsRecord *dataTable1bOr1cGetRecord(u32 questId);
void timerStart(void *sprite, s32 animation, s32 frame);

/* Opens quest details and selects the detail layout indicated by the quest flags. */
void FUN_00215cd4(u32 questId)
{
    UiQuest *work = g_uiQuest;
    work->panel.unkF2 = 1;
    work->panel.detailMode = FUN_00298f88(questId);
    work->questId = questId;
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 1);
    timerStart(work->mainSprite, 0, 0);
    uiQuestChangeState(g_uiQuest, 1);
    work->nextState = 0x1D;
    QuestFlagsRecord *record = dataTable1bOr1cGetRecord(questId);
    if (record->flags & 0x40) {
        work->panel.selection = 2;
    } else {
        work->panel.selection = 1;
    }
}
}
