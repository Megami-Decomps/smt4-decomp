#include "common.h"

extern "C" {

typedef struct StreamBufferPool {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u32 unkC;
} StreamBufferPool;

void nw_snd_internal_driver_StreamBufferPool_Finalize(StreamBufferPool *pool)
{
    pool->unk0 = 0;
    pool->unk4 = 0;
    pool->unk8 = 0;
    pool->unkC = 0;
}

} /* extern "C" */
