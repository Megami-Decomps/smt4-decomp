/* Marks active quests with a goal of this kind and id, and records whether this gain reaches the goal's target. */
#include "quest_center/QuestRuntime.h"
#include "shard/Shard0041.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

struct QuestGoal {
    s16 kind;
    u16 id;
    u32 required;
};
struct QuestGoalRecord {
    u8 unk000[6];
    u8 disabled;
    u8 unk007[0xF9];
    QuestGoal goals[4];
};

extern "C" {
QuestGoalRecord *dataTable1bOr1cGetRecord(u16 quest);
u32 FUN_001ba3d4(u32 id);

static __inline PartyEntryB *questGetFlags(u16 quest)
{
    return &reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[quest];
}
static __inline void questMarkChanged(u16 quest)
{
    reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[quest].bits |= 2;
}

void FUN_0041849c(u32 id, u32 amount)
{
    /* The quest notification ids, as signed ids. */
    struct QuestNoticeView {
        u8 unk0000[0x1094];
        s16 progressingId;
        s16 completedId;
    };
    QuestNoticeView *notice = (QuestNoticeView *)gameFlagsGetBlock();
    for (s32 i = 0; i < 400; ++i) {
        u32 isActive = (questGetFlags(i)->flags & 2) >> 1;
        if (isActive) {
            QuestGoalRecord *record = dataTable1bOr1cGetRecord((u16)i);
            if (record != NULL && record->disabled == 0) {
                for (s32 j = 0; j < 4; ++j) {
                    if (record->goals[j].kind == 1 && record->goals[j].id == id) {
                        u32 current = FUN_001ba3d4(id);
                        if (record->goals[j].required > current) {
                            questMarkChanged(i);
                            if (record->goals[j].required <= amount + current) {
                                notice->completedId = (s16)id;
                            } else {
                                notice->progressingId = (s16)id;
                            }
                        }
                    }
                }
            }
        }
    }
}
}
