#pragma once
#include "common.h"

/* Functions in the 0x00130000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Resource;
extern "C" {

void FUN_0013cab8(u32 index, u32 value, u32 extra);

void FUN_00137848(void);

void resourceDestroy(Resource *resource);

} /* extern "C" */
