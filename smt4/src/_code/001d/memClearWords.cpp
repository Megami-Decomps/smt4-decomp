#include "common.h"
#include "util/MemoryHelpers.h"

extern "C" {

/* Clears all complete words in the supplied byte count. */
void memClearWords(u32 *words, u32 byteCount)
{
    for (u32 index = 0; index < byteCount / sizeof(u32); ++index) {
        words[index] = 0;
    }
}

} /* extern "C" */
