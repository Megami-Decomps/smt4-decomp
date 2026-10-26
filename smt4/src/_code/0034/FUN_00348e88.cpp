/* NON_MATCHING: retail loads the goal's required count into r0 after copying the item-count result to r9; the build loads it into r1 before the copy. */
/* Marks active item-count quest goals and records whether this gain reaches their target. */
#include "shard/SaveWork.h"
#include "gamedata/GameDataAccess_VariantA.h"

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
static __inline QuestItemFlags *questGetFlags(u16 quest)
{
    return &reinterpret_cast<QuestItemFlagBanks *>(gameGetFlagBlock())->quests[quest];
}
static __inline void questMarkChanged(u16 quest)
{
    reinterpret_cast<QuestItemFlagBanks *>(gameGetFlagBlock())->quests[quest].changed |= 2;
}
u32 FUN_0028fb40(u32 item);
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
    for (s32 i = 0; i < 400; ++i) {
        u32 isActive = (questGetFlags(i)->active & 2) >> 1;
        if (isActive) {
            QuestItemGoalRecord *record = dataTable1bOr1cGetRecord((u16)i);
            if (record != NULL && record->disabled == 0) {
                for (s32 j = 0; j < 6; ++j) {
                    if (record->goals[j].kind == 1 && record->goals[j].item == item) {
                        u32 current = FUN_0028fb40(item);
                        if (record->goals[j].required > current) {
                            questMarkChanged(i);
                            if (record->goals[j].required <= amount + current) {
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
