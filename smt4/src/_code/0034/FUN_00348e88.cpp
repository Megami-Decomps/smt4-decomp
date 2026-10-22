/* NON_MATCHING: quest item comparisons and completion-count updates retain a different conditional sequence. */
/* Marks active item-count quest goals and records whether this gain reaches their target. */
#include "shard/SaveWork.h"

struct QuestItemGoal {
    s16 kind;
    u16 item;
    u32 required;
};
struct QuestItemGoalRecord {
    u8 unk000[6];
    u8 disabled;
    u8 unk007[0x165];
    QuestItemGoal goals[6];
};
struct QuestItemFlags {
    u8 active;
    u8 unk01;
    u8 changed;
    u8 unk03;
};
struct QuestItemFlagBanks {
    u8 unk000[0x200];
    QuestItemFlags quests[400];
};
extern "C" {
u32 FUN_0028fb40(u32 item);
QuestItemFlagBanks *gameGetFlagBlock(void);
QuestItemGoalRecord *dataTable1bOr1cGetRecord(u16 quest);
SaveWork *gameGetMapBlock(void);

void FUN_00348e88(u32 item, u32 amount)
{
    /* Quest notification ids lie beyond the shared map-save prefix. */
    struct QuestNoticeView {
        u8 unk0000[0x1060];
        s16 progressingItem;
        s16 completedItem;
    };
    QuestNoticeView *notice = (QuestNoticeView *)gameGetMapBlock();
    for (u32 i = 0; i < 400; ++i) {
        if (gameGetFlagBlock()->quests[(u16)i].active & 2) {
            QuestItemGoalRecord *record = dataTable1bOr1cGetRecord((u16)i);
            if (record != NULL && record->disabled == 0) {
                for (u32 j = 0; j < 6; ++j) {
                    QuestItemGoal *goal = &record->goals[j];
                    if (goal->kind == 1 && goal->item == item) {
                        u32 current = FUN_0028fb40(item);
                        if (current < goal->required) {
                            gameGetFlagBlock()->quests[(u16)i].changed |= 2;
                            if (current + amount >= goal->required) {
                                notice->completedItem = (s16)item;
                            } else {
                                notice->progressingItem = (s16)item;
                            }
                        }
                    }
                }
            }
        }
    }
}
}
