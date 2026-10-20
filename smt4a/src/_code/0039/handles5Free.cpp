#include "shard/Shard0039.h"

extern "C" {

typedef struct Handles5 {
    /* 0x00 */ u32 h0;
    /* 0x04 */ u32 h1;
    /* 0x08 */ u32 h2;
    /* 0x0C */ u32 h3;
    /* 0x10 */ u32 h4;
} Handles5;

extern void FUN_00237210(u32 handle);
extern void asdMemFree(void *ptr);

/* Releases the four handles and the block itself. */
void handles5Free(Handles5 *block)
{
    FUN_00237210(block->h0);
    FUN_00237210(block->h1);
    FUN_00237210(block->h2);
    FUN_00237210(block->h4);
    asdMemFree(block);
}

} /* extern "C" */
