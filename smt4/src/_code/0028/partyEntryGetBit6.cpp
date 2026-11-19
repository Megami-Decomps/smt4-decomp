#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

/* Flag bit 6 of the first byte of the table entry. */
u32 partyEntryGetBit6(u32 questId)
{
    return (questGetRuntimeStatus(questId)->flags & 0x40) >> 6;
}

} /* extern "C" */
