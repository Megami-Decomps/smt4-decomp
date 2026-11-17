#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "gamedata/GameFlags.h"

// Private view of the record returned by questDataGetRecord.
extern "C" {
u8* gameFlagBlockGetEntry(u16 entryId);
s32 gameUnlockRecordRequirementsMet(u16 entryId);

// Set the associated flags for eligible entries whose nonzero threshold has been reached.
void gameFlagSetEligibleEntryFlagsAtThreshold(s32 threshold)
{
    for (s32 entryId = 100; entryId < 400; ++entryId) {
        if ((*gameFlagBlockGetEntry((u16)entryId) & 1) != 0) {
            continue;
        }
        if (gameUnlockRecordRequirementsMet((u16)entryId) == 0) {
            continue;
        }

        QuestRecordA* record = questDataGetRecord((u16)entryId);
        if (record == 0 || record->requiredLevel == 0 || record->requiredLevel > threshold) {
            continue;
        }

        record = questDataGetRecord((u16)entryId);
        if (record != 0 && record->value != 0) {
            gameFlagSetValue(record->value, 1, 1);
        }
    }
}
}
