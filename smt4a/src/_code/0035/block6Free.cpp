#include "shard/Shard0035.h"

extern "C" {

extern void FUN_00412f9c(void *p);
extern s32 FUN_0041302c(void *p);
extern void FUN_002e3328(s32 p);
extern void FUN_001800b8(void *p);
extern void asdMemFree(void *ptr);

/* Frees the block's owned pieces and then the block. */
void block6Free(Block6 *block)
{
    if (block->unk00 != NULL) {
        FUN_00412f9c(block->unk00);
        if (block->unk00 != NULL) {
            FUN_002e3328(FUN_0041302c(block->unk00));
        }
    }
    if (block->unk14 != NULL) {
        FUN_001800b8(block->unk14);
    }
    asdMemFree(block->buffer);
    asdMemFree(block);
}

} /* extern "C" */
