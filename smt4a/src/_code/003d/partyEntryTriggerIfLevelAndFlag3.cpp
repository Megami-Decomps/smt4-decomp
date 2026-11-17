#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

s32 partyEntryFlagsBit3(s32 id);
void partyEntrySetFlagBit3(s32 id);

/* Calls partyEntrySetFlagBit3 for a party entry that has a nonzero level and flag bit 3 set. */
void partyEntryTriggerIfLevelAndFlag3(s32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);

    if (record != NULL && record->category != 0 && partyEntryFlagsBit3(id) != 0) {
        partyEntrySetFlagBit3(id);
    }
}

} /* extern "C" */
