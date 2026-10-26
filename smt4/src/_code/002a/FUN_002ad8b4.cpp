/* NON_MATCHING: retail loads both words with separate ldr and then stores both (no ldm/stm); armcc merges the two loads/stores into ldm/stm when they are written back to back or as temporaries, and interleaves them when written as two plain assignments. */
#include "common.h"

struct WordPair { u32 first; u32 second; };

extern "C" {
/* Copies the pair of words. */
void FUN_002ad8b4(WordPair *destination, const WordPair *source)
{
    u32 second = source->second;
    destination->first = source->first;
    destination->second = second;
}
}
