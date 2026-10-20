#include "common.h"

extern "C" {

typedef struct BitIterator {
    /* 0x00 */ s32 word;
    /* 0x04 */ s32 bit;
} BitIterator;

/* Returns the distance in bits between iterator `a` and the position (`word`, `bit`): 32 bits per 4-byte word. */
s32 bitIteratorDistance(BitIterator *a, s32 word, s32 bit)
{
    return (((a->word - word) >> 2) * 0x20 + a->bit) - bit;
}

} /* extern "C" */
