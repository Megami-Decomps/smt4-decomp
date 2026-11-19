#pragma once
#include "common.h"

/* Functions in the 0x00270000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Finds the populated slot (of 42 at 0x2134) whose entry has the requested id. */
void *idSlotsFindEntryById(const void *slots, s32 id);

u32 obj80Select(int which);

u32 isEntryUsable(int *obj);

} /* extern "C" */
