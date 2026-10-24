/* Layout of std::vector<bool, AsdAllocator<bool> >: bits packed 32 to a word, addressed by an
 * iterator of (word pointer, bit offset). */
#ifndef STL_VECTORBOOL_H
#define STL_VECTORBOOL_H

#include "common.h"

typedef struct BitIterator {
    /* 0x00 */ u32 *word;
    /* 0x04 */ u32 bit;

    BitIterator(u32 *wordPointer, u32 bitOffset) : word(wordPointer), bit(bitOffset) {}
} BitIterator;

/* What iterator::operator* returns: the word and the mask of the selected bit. */
typedef struct BitReference {
    /* 0x00 */ u32 *word;
    /* 0x04 */ u32 mask;

    BitReference(u32 *wordPointer, u32 bitMask) : word(wordPointer), mask(bitMask) {}
} BitReference;

typedef struct BitVector {
    /* 0x00 */ BitIterator begin;
    /* 0x08 */ BitIterator end;
} BitVector;

#endif
