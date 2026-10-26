#pragma once
#include "common.h"

/* Memory block helpers. */
extern "C" {

void fillTwoWordsWithByte(u32 *words, u32 value);

void memClearWords(u32 *words, u32 byteCount);

unsigned long long nnnstdMemCpy(u8 *destination, const u8 *source, u32 size);

void objectBufferFree(void *object);

unsigned long long rt_memcpy(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned char param_4);

} /* extern "C" */
