#include "shard/Shard0050.h"

extern "C" {

void clearThreeWords(u32 *words)
{
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
}

} /* extern "C" */
