#pragma once
#include "common.h"

/* Functions in the 0x00340000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void questCenterCounterAddSaturating14(s32 amount);

int goalConditionsFindSlot(void *id);

} /* extern "C" */
