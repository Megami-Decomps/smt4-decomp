#pragma once
#include "common.h"

struct QuestRuntimeStatus;

/* Quest status queries. */
extern "C" {

u16 QcActive_GetField20(void);

QuestRuntimeStatus *questGetRuntimeStatus(u32 questId);

/* Bits 5 and 6 of the quest's runtime status flags. */
u32 partyEntryGetBit5(u32 questId);
u32 partyEntryGetBit6(u32 questId);

} /* extern "C" */
