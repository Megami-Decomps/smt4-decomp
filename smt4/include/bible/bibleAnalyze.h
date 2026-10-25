#ifndef BIBLE_BIBLEANALYZE_H
#define BIBLE_BIBLEANALYZE_H

#include "common.h"

extern "C" {
u8 buttonHelpIsNotActive(void);
}

#ifdef __cplusplus
extern "C" {
#endif

void *asdMemAlloc(int heap, u32 a, u32 b, u32 size, u32 c);

#ifdef __cplusplus
}
#endif

#endif
