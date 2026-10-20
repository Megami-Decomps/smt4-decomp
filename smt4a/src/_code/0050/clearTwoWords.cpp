#include "shard/Shard0050.h"

extern "C" {

void clearTwoWords(u32 *words)
{
    words[0] = 0;
    words[1] = 0;
}

} /* extern "C" */
