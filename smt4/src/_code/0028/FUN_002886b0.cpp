#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* Flag bit 6 of the first byte of the table entry. */
u32 FUN_002886b0(u32 questId)
{
    return (questGetRuntimeStatus(questId)->flags & 0x40) >> 6;
}

} /* extern "C" */
