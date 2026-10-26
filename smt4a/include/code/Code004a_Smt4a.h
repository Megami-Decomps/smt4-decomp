#pragma once
#include "common.h"

/* Functions in the 0x004a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct BattleTransitionState;
extern "C" {

void FUN_004a7dc8(BattleTransitionState *work, s32 anchor, u32 color, s32 alternate);

void FUN_004a92d0(u32 unused, u32 first, u32 second);

void FUN_004aa768(void);

} /* extern "C" */
