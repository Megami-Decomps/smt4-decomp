#ifndef CLASSES_WORD_VECTOR_H
#define CLASSES_WORD_VECTOR_H

#include "common.h"

extern "C" void asdOperatorDeleteArray(void *allocation);

struct WordVector {
    WordVector() : begin(NULL), end(NULL), capacityEnd(NULL) {}
    WordVector(u32 count);
    WordVector &operator=(const WordVector &other);
    ~WordVector() { asdOperatorDeleteArray(begin); }
    /* 0x00 */ u32 *begin;
    /* 0x04 */ u32 *end;
    /* 0x08 */ u32 *capacityEnd;
};

/* Non-owning word ranges used by the cursor owner's flag lists. */
struct WordRange {
    /* 0x00 */ u32 *begin;
    /* 0x04 */ u32 *end;
};

struct CursorFlagLists {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ WordRange first;
    /* 0x74 */ u8 unk74[0xC];
    /* 0x80 */ WordRange second;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ WordRange third;
};

#endif
