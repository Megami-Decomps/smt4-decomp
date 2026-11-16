/* NON_MATCHING: compiler combines the two word loads and stores into ldm/stm. */
#include "common.h"

struct WordPair { u32 first; u32 second; };

extern "C" {
/* Copies or updates the stored values. */
void ARM_common_memcpy4_8(WordPair *destination, const WordPair *source)
{
    u32 first = source->first;
    u32 second = source->second;
    destination->first = first;
    destination->second = second;
}
}
