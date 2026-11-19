#pragma once
#include "common.h"

struct QuestRuntimeStatus;

/* Quest status queries. */
extern "C" {

u16 QcActive_GetField20(void);

QuestRuntimeStatus *questGetRuntimeStatus(u32 questId);

} /* extern "C" */
