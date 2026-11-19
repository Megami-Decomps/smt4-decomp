#pragma once
#include "common.h"

/* Functions in the 0x00290000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

s32 FUN_00293f10(s32 id, s32 mapped);

/* Initialises the unit record of `slot` for unit `id` (`kind` selects the initial state), when the slot has one. */
void dispatchIfFound(s32 slot, u32 id, s32 kind);

u32 FUN_0029c43c(u32 value, u8 flag);

/* Reads or forwards the state of an object (0 when its disabled flag at 0x62 is set). */
u32 FUN_0029d644(const void *object);

/* Dispatches the tagged payload at 0x10 of `object` to its specialized handler. */
s32 FUN_0029e924(void *object);

} /* extern "C" */
