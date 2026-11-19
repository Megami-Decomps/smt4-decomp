#include "common.h"
#include "code/Code0028_Smt4.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

/* Flag bit 5 of the first byte of the table entry. */
u32 FUN_002886c8(u32 questId)
{
    return (questGetRuntimeStatus(questId)->flags & 0x20) >> 5;
}

} /* extern "C" */
