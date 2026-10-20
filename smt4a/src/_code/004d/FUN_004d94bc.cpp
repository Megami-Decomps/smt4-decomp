/* NON_MATCHING: the zero stored to pool->spare is built in r0 instead of r1. */
#include "common.h"

extern "C" {

typedef struct Pool Pool;
typedef struct PoolVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ u32 (*getSize)(Pool *self, int block);
    /* 0x10 */ void *unk10[2];
    /* 0x18 */ int (*alloc)(Pool *self, u32 size);
    /* 0x1C */ void (*release)(Pool *self, int block);
} PoolVtbl;

struct Pool {
    /* 0x00 */ PoolVtbl *vtbl;
    /* 0x04 */ u32 totalSize;  /* sum of the sizes of all allocations */
    /* 0x08 */ u32 peakSize;   /* largest totalSize seen */
    /* 0x0C */ u32 allocCount;
    /* 0x10 */ int spare;      /* cached block freed to make room when an allocation fails */
};

/* Allocates `size` bytes; on failure frees the spare block and retries, then updates the usage statistics. */
int FUN_004d94bc(Pool *pool, u32 size)
{
    int block = pool->vtbl->alloc(pool, size);

    if (block == 0) {
        if (pool->spare != 0) {
            pool->vtbl->release(pool, pool->spare);
            pool->spare = 0;
        }
        block = pool->vtbl->alloc(pool, size);
    }
    pool->allocCount++;
    pool->totalSize += pool->vtbl->getSize(pool, block);
    if (pool->totalSize > pool->peakSize) {
        pool->peakSize = pool->totalSize;
    }
    return block;
}

} /* extern "C" */
