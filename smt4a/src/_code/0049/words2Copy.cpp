#include "shard/Shard0049.h"
#include "shard/words2Copy.h"

extern "C" {

void words2Copy(Words2 *src, Words2 *dst)
{
    dst->w[0] = src->w[0];
    dst->w[1] = src->w[1];
}

} /* extern "C" */
