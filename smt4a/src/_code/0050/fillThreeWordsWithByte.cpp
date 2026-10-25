#include "shard/Shard0050.h"
#include "shard/fillThreeWordsWithByte.h"

extern "C" {

/* Fills three words with the byte replicated into all four lanes. */
void fillThreeWordsWithByte(u32 *words, u32 value)
{
    u32 fill = (value & 0xFF) | ((value & 0xFF) << 8);

    fill = fill | (fill << 0x10);
    words[0] = fill;
    words[1] = fill;
    words[2] = fill;
}

} /* extern "C" */
