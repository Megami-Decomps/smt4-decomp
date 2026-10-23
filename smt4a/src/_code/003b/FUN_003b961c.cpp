/* NON_MATCHING: condition-code merging and duplicated trigger-notification tails differ from retail. */
#include "gamedata/Table49Trigger.h"

extern "C" {
void FUN_003a249c(void);
s32 dataTable49Type1Count(void);
const Table49Trigger* dataTable49GetEntry(s32 index);
s32 gameFlagIsSet(u32 flag);
void gameFlagSetValue(u32 flag, s32 value, s32 notify);

// Apply unconsumed table triggers for a group and its selected entry.
u32 FUN_003b961c(s32 groupId, s32 entryId)
{
    s32 count = dataTable49Type1Count();
    for (s32 index = 0; index < count; ++index) {
        const Table49Trigger* trigger = dataTable49GetEntry(index);
        if (trigger->entryId != -1) {
            if (trigger->groupId != groupId)
                continue;
            if (trigger->entryId != entryId)
                continue;
            if (gameFlagIsSet(trigger->requiredFlag) && !gameFlagIsSet(trigger->excludedFlag)) {
                if (!gameFlagIsSet(trigger->triggeredFlag)) {
                    gameFlagSetValue(trigger->triggeredFlag, 1, 1);
                    FUN_003a249c();
                }
            }
        } else if (trigger->groupId == groupId && gameFlagIsSet(trigger->requiredFlag) &&
                   !gameFlagIsSet(trigger->excludedFlag)) {
            if (!gameFlagIsSet(trigger->triggeredFlag)) {
                gameFlagSetValue(trigger->triggeredFlag, 1, 1);
                FUN_003a249c();
            }
        }
    }
    return 1;
}
}
