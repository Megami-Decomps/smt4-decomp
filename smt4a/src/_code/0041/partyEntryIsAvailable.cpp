#include "shard/Shard0041.h"
#include "quest_center/QuestRecordA.h"

extern "C" {
PartyBlockB* gameFlagBlockGet(void);
u32 libc_strlen(const char* text);

u32 partyEntryIsAvailable(u32 index)
{
    const QuestRecordA* record = dataTable1bOr1cGetRecord(index);
    u32 length = libc_strlen(record->token);
    if (length <= 1 && record->token[0] == '0') {
        return 0;
    }
    if (record->requiresEntryFlag == 0) {
        return 1;
    }
    return (gameFlagBlockGet()->e[index].bits & 4) >> 2;
}

} /* extern "C" */
