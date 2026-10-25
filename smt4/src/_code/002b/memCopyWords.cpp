#include "common.h"
#include "shard/memCopyWords.h"

extern "C" {
// Copy complete words, processing two words per iteration.
void memCopyWords(const u32 *source, u32 *destination, u32 byteCount)
{
    if (byteCount <= sizeof(u32) - 1) {
        return;
    }
    --source;
    --destination;
    if ((s32)(byteCount << 29) < 0) { // Bit 2: one unpaired word.
        *++destination = *++source;
    }
    for (u32 pairs = byteCount / (2 * sizeof(u32)); pairs != 0; --pairs) {
        destination[1] = source[1];
        source += 2;
        destination += 2;
        *destination = *source;
    }
}
}
