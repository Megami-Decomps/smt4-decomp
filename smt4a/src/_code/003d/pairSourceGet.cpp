#include "shard/Shard003D.h"

extern "C" {

typedef struct PairSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
} PairSource;

void pairSourceGet(PairSource *src, u32 *first, u32 *second)
{
    *first = src->first;
    *second = src->second;
}

} /* extern "C" */
