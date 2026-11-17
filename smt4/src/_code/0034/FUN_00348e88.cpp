/* Marks active item-count quest goals and records whether this gain reaches their target. */
#include "shard/SaveWork.h"
#include "quest_center/QuestRecord.h"
#include "gamedata/GameDataAccess_VariantA.h"

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
u32 flagValueRead(u32 item);
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
            QuestRecord *record = dataTable1bOr1cGetRecord((u16)i);
            if (record != NULL && record->kind == 0) {
                for (s32 j = 0; j < 6; ++j) {
                    if (record->requirements[j].kind == 1 && record->requirements[j].id == item) {
                        u32 current = flagValueRead(item);
                        if (record->requirements[j].count > current) {
                            questMarkChanged(i);
                            if (record->requirements[j].count <= amount + current) {
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
