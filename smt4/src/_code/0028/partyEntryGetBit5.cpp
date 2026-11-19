#include "common.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

/* Flag bit 5 of the first byte of the table entry. */
u32 partyEntryGetBit5(u32 questId)
{
    return (questGetRuntimeStatus(questId)->flags & 0x20) >> 5;
}

} /* extern "C" */
