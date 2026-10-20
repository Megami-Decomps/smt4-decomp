#include "shard/Shard0037.h"

extern "C" {

typedef struct HandleBlock {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ void *unk140;
    /* 0x144 */ void *unk144;
} HandleBlock;

extern void FUN_00222434(void *p);
extern void FUN_00222104(void *p);
extern void FUN_002ce8d8(u32 handle);
extern void asdMemFree(void *ptr);

/* Releases the handles held by the object, then the object. */
void handleBlockFree(HandleBlock *block)
{
    if (block->unk140 != NULL) {
        FUN_00222434(block->unk140);
    }
    if (block->unk144 != NULL) {
        FUN_00222104(block->unk144);
    }
    FUN_002ce8d8(block->unk13C);
    asdMemFree(block);
}

} /* extern "C" */
