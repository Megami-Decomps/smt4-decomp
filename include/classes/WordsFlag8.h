#ifndef CLASSES_WORDS_FLAG8_H
#define CLASSES_WORDS_FLAG8_H

#include "common.h"
#include <stddef.h>

/* A pair of words that is cleared as long as the record is marked valid. */
struct WordsFlag8 {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 valid;
};
typedef char WordsFlag8LayoutCheck[offsetof(WordsFlag8, valid) == 0x8 && sizeof(WordsFlag8) == 0xC ? 1 : -1];

extern "C" void wordsFlag8Reset(WordsFlag8 *flags);

#endif
