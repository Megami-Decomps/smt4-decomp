#include "quest_center/QuestRequirement.h"
#include "shard/W6_W6Match2_StatusBytes.h"

extern "C" {
extern StatusFields g_gameState;
void *gameGetMapBlock();
s32 FUN_00287800();
s32 FUN_00287874(u16 quest);
s32 FUN_00287894(u16 quest);
s32 questPassesAvailabilityConditions(u16 quest);
s32 FUN_00298dc8(u16 quest);
s32 FUN_00298e40(u16 quest, s32 requirement, QuestRequirementProgress *progress);
}

// Classify the quest notification from completed requirements and global availability.
extern "C" s32 questClassifyCompletionNotification()
{
    s32 result = 0;
    QuestRequirementProgress progress;
    gameGetMapBlock();
    if (g_gameState.active)
        return 4;
    for (u16 quest = 100; quest < 400; ++quest) {
        if (FUN_00298dc8(quest)) {
            s32 kind = FUN_00287894(quest);
            if (kind == 1) {
                if (FUN_00287874(quest)) {
                    s32 remaining = 0;
                    for (s32 requirement = 0; requirement < 6; ++requirement) {
                        if (FUN_00298e40(quest, requirement, &progress))
                            remaining += progress.remaining;
                    }
                    if (remaining == 0)
                        result = 1;
                }
            } else if (kind == 0 && FUN_00287874(quest) && questPassesAvailabilityConditions(quest)) {
                s32 remaining = 0;
                for (s32 requirement = 0; requirement < 6; ++requirement) {
                    if (FUN_00298e40(quest, requirement, &progress))
                        remaining += progress.remaining;
                }
                if (remaining == 0)
                    result = 2;
            }
        }
    }
    if (result == 0 && FUN_00287800())
        result = 3;
    return result;
}
