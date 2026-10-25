#ifndef BIBLE_BIBLEDEVIL_H
#define BIBLE_BIBLEDEVIL_H

#include "common.h"

extern "C" {
u8 FUN_00293aac(void);
}

extern "C" {
void FUN_0029ede8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
}

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
}

extern "C" {
u8 useCounterGetCurrentValue(void);
}

#endif
