/* NON_MATCHING: requirement/progress bases are folded differently, and the incomplete-test lifetime changes saved registers and saturation block layout. */
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestRequirement.h"
#include "shard/W6_W6Match5_SecondarySort.h"
#include "shard/SaveWork.h"
#include "gamedata/GameDataAccess_VariantA.h"

extern "C" {
s32 table1bOr1cGetRecordValue(u32 quest);
SaveWork *gameGetMapBlock(void);

void FUN_00348c10(u16 itemId, s32 change)
{
    struct AcceptedQuest { u16 id; u16 counts[6]; };
    struct QuestProgressView {
        QuestRuntimeFlagBlock base;
        u16 selected;
        AcceptedQuest accepted[4];
        QuestRequirementSavedProgress progress;
    };
    struct QuestNotificationView {
        u8 prefix[0x1064];
        u16 completedItem;
        u16 progressingItem;
    };
    // Both progress tails lie beyond the canonical flag/map block prefixes.
    QuestProgressView *flags = reinterpret_cast<QuestProgressView *>(gameGetFlagBlock());
    u16 selected = reinterpret_cast<QuestProgressView *>(gameGetFlagBlock())->selected;
    if (selected != 0) {
        if (table1bOr1cGetRecordValue(selected) != 1)
            return;
        const QuestRequirementDefinition *quest = reinterpret_cast<const QuestRequirementDefinition *>(
            dataTable1bOr1cGetRecord(selected));
        QuestNotificationView *notification = reinterpret_cast<QuestNotificationView *>(gameGetMapBlock());
        for (s32 index = 0; index < 6; ++index) {
            const QuestRequirement &requirement = quest->requirements[index];
            if (static_cast<u16>(requirement.kind) == 2 && requirement.id == itemId) {
                u16 oldCount = flags->progress.counts[index];
                bool incomplete = oldCount < static_cast<u32>(requirement.count);
                u32 updated = static_cast<u32>(oldCount) + change;
                if (static_cast<s32>(updated) < 0xffff) {
                    flags->progress.counts[index] = static_cast<u16>(updated);
                    if (!incomplete)
                        return;
                    if (static_cast<u16>(updated) >= static_cast<u32>(requirement.count))
                        notification->completedItem = itemId;
                    else
                        notification->progressingItem = itemId;
                } else {
                    flags->progress.counts[index] = 0xffff;
                    if (!incomplete)
                        return;
                }
                reinterpret_cast<QuestRuntimeFlagBlock *>(gameGetFlagBlock())->quests[selected].stateFlags |= 2;
                return;
            }
        }
        return;
    }
    for (s32 slot = 0; slot < 4; ++slot) {
        u16 questId = flags->accepted[slot].id;
        if (questId == 0)
            continue;
        const QuestRequirementDefinition *quest = reinterpret_cast<const QuestRequirementDefinition *>(
            dataTable1bOr1cGetRecord(questId));
        if (quest->kind != 1)
            continue;
        QuestNotificationView *notification = reinterpret_cast<QuestNotificationView *>(gameGetMapBlock());
        for (s32 index = 0; index < 6; ++index) {
            const QuestRequirement &requirement = quest->requirements[index];
            if (static_cast<u16>(requirement.kind) == 2 && requirement.id == itemId) {
                u16 oldCount = flags->progress.counts[index];
                bool incomplete = oldCount < static_cast<u32>(requirement.count);
                u32 updated = static_cast<u32>(oldCount) + change;
                if (static_cast<s32>(updated) < 0xffff) {
                    flags->progress.counts[index] = static_cast<u16>(updated);
                    if (!incomplete)
                        break;
                    if (static_cast<u16>(updated) >= static_cast<u32>(requirement.count))
                        notification->completedItem = itemId;
                    else
                        notification->progressingItem = itemId;
                } else {
                    flags->progress.counts[index] = 0xffff;
                    if (!incomplete)
                        break;
                }
                reinterpret_cast<QuestRuntimeFlagBlock *>(gameGetFlagBlock())->quests[questId].stateFlags |= 2;
                break;
            }
        }
    }
}
}
