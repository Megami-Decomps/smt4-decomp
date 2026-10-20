/* NON_MATCHING: register allocation of the last three stores only: retail keeps the block count in r1 and zero in r0 (stores in order +0x14, +0x08, +0x10) */
/* Sets up the pool over `buffer` (`size` bytes, split into blocks of `blockSize`); the number of blocks is rounded down to a multiple of 32. */
#include "common.h"

extern "C" {

struct StreamBufferPool {
    /* 0x00 */ void *buffer;
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 blockCount;
    /* 0x0c */ u32 blockSize;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
};

void nw_snd_internal_driver_StreamBufferPool_Initialize(StreamBufferPool *pool, void *buffer, u32 size, u32 blockSize)
{
    u32 blockCount;

    if (blockSize == 0) {
        return;
    }
    pool->size = size;
    pool->blockSize = blockSize;
    pool->buffer = buffer;
    blockCount = (size / blockSize) & ~31;
    pool->unk14 = 0;
    pool->blockCount = blockCount;
    pool->unk10 = 0;
}

}
