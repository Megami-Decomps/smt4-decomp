/* NON_MATCHING: compiler combines stores into stm rather than retail's separate stores. */
#include "common.h"

struct WordPair { u32 first; u32 second; };

extern "C" {
/* Copies or updates the stored values. */
void FUN_002bad5c(WordPair *pair)
{
    pair->first = 0xe7e3ffff;
    pair->second = 0;
}
}
