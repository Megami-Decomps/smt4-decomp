#include "shard/Shard0049.h"

extern "C" {

typedef struct PairAt8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
} PairAt8;

void pairAt8Get(PairAt8 *src, Words2 *out)
{
    out->w[0] = src->first;
    out->w[1] = src->second;
}

} /* extern "C" */
