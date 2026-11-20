#pragma once
#include "common.h"
#include "event/bustupEvent/BustupCutAnim.h"

/* Bust-up slot control. */
extern "C" {

s32 bustupCutStartSlotTransition(s32 workId, s32 index, s32 row, s32 column, s32 transition);

} /* extern "C" */
