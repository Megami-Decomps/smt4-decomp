#pragma once
#include "common.h"
#include "event/bustupEvent/BustupCutAnim.h"

/* Bust-up slot control. */
extern "C" {

s32 bustupCutStartSlotTransition(s32 workId, s32 frame, s32 enabled, s32 available, s32 transition);

} /* extern "C" */
