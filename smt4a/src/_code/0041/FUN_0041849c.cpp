/* Marks active quests with a goal of this kind and id, and records whether this gain reaches the goal's target. */
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestRecordA.h"
#include "shard/Shard0041.h"
#include "gamedata/MapSaveBlockA.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
u32 flagValueRead(u32 id);

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
        MapSaveBlockA *notice = gameFlagsGetBlock();
    for (s32 i = 0; i < 400; ++i) {
        u32 isActive = (questGetFlags(i)->flags & 2) >> 1;
        if (isActive) {
            QuestRecordA *record = questDataGetRecord((u16)i);
            if (record != NULL && record->kind == 0) {
                for (s32 j = 0; j < 4; ++j) {
                    if (record->requirements[j].kind == 1 && record->requirements[j].id == id) {
                        u32 current = flagValueRead(id);
                        if (record->requirements[j].count > current) {
                            questMarkChanged(i);
                            if (record->requirements[j].count <= amount + current) {
                                notice->completedItem = (s16)id;
                            } else {
                                notice->progressedItem = (s16)id;
                            }
                        }
                    }
                }
            }
        }
    }
}
}
