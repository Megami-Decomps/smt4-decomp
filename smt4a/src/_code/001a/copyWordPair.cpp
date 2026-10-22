#include "common.h"

struct WordPairValue {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

/* Copy the two-word value. */
extern "C" void copyWordPair(WordPairValue *destination, const WordPairValue *source)
{
    *destination = *source;
}
