#pragma once
#include "common.h"

/* Functions in the 0x002e0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct LinkedTarget;
extern "C" {

u8 FUN_002e2014(void);

void FUN_002e1208(u32 unused, s32 id, u32 *outA, u32 *outB);

unsigned int * rt_memclr(unsigned int *param_1,unsigned int param_2);

u32 FUN_002e2114(LinkedTarget *target);

void asdOperatorDeleteC(void *memory);

} /* extern "C" */
