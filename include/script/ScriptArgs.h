#pragma once
#include "common.h"

extern "C" {

/* Script argument `index` (0 = most recently pushed) as an int. */
s32 scrGetArg(s32 index);

/* Stores the script command's result and clears the waiting flag. */
void scrSetResult(s32 result);

/* The running script's command owner word (the message commands' context). */
u32 scrGetCommandOwner(void);

/* Sets the message window mode; values outside -1..1 are ignored. */
void scrCommMessageSetMode(s32 mode);

} /* extern "C" */

extern "C" {

s32 scrGetArg(s32 index);

u32 scrGetCommandFrame(void);

void scrSetResult(s32 value);

} /* extern "C" */
