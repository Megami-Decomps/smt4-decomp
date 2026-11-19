#ifndef RUNTIME_STDIO_H
#define RUNTIME_STDIO_H

#include "common.h"

/* armlib's sprintf entry. armcc 4.1 compiles `sprintf(buffer, format, ...)` under <stdio.h> as a call
 * to __2sprintf plus R_ARM_NONE references to the format's `_printf_*` features on the caller's first
 * instruction, which keep the caller's `push; vpush; sub sp` ahead of its argument moves: such callers
 * are written with sprintf. A caller whose retail prologue shows no such anchor (a sunk
 * `push; ldr; vpush; sub sp`, titleConfigDraw) called it as a plain variadic function: this declaration. */
extern "C" s32 __2sprintf(char *output, const char *format, ...);

#endif
