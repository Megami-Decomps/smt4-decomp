#include "common.h"

extern "C" {

typedef struct StreamBufferPool {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} StreamBufferPool;

/* Clears the pool's four words. */
void nw_snd_internal_driver_StreamBufferPool_Finalize(StreamBufferPool *pool)
{
    pool->a = 0;
    pool->b = 0;
    pool->c = 0;
    pool->d = 0;
}

} /* extern "C" */
