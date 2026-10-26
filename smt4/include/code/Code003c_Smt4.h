#pragma once
#include "common.h"

/* Functions in the 0x003c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Flags;
struct LeveledLists;
extern "C" {

u32 FUN_003c2ab4(int alt);

void FUN_003c2e0c(u32 a, u32 b);

void NaviMain_ResetFlags(Flags *flags, u8 value);

u16 FUN_003c9948(LeveledLists *owner, s32 list, u8 level);

} /* extern "C" */
