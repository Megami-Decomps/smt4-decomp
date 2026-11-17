/* NON_MATCHING: retail looks the record up once more at the end and reads flag bit 1 ((flags & 2) >> 1) before returning 1 regardless; the original use of that bit is unknown. */
#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
u32 partyEntryFlagsBit3(s32 member);

/* Return 1 when the record's required game flag and party members are all satisfied. */
s32 gameUnlockRecordRequirementsMet(u32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);

    if (record == NULL) {
        return 0;
    }
    if (record->requiredFlag != 0 && !gameFlagIsSet(record->requiredFlag)) {
        return 0;
    }
    if (record->requiredMembers[0] != 0 && !partyEntryFlagsBit3(record->requiredMembers[0])) {
        return 0;
    }
    if (record->requiredMembers[1] != 0 && !partyEntryFlagsBit3(record->requiredMembers[1])) {
        return 0;
    }
    if (record->requiredMembers[2] != 0 && !partyEntryFlagsBit3(record->requiredMembers[2])) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
