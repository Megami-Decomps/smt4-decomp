/* NON_MATCHING: compiler combines the two word loads and stores into ldm/stm. */
#include "common.h"

struct WordPair { u32 first; u32 second; };

extern "C" {
/* Copies or updates the stored values. */
void FUN_002ad8b4(WordPair *destination, const WordPair *source)
{
    u32 second = source->second;
    destination->first = source->first;
    destination->second = second;
}
}
