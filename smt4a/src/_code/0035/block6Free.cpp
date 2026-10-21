#include "shard/Shard0035.h"

extern "C" {

extern void bufferReleaseOwnedPair(void *p);
extern s32 bufferDestroyOwnedPair(void *p);
extern void asdOperatorDelete(s32 p);
extern void asdTextureRelease(void *p);
extern void asdMemFree(void *ptr);

/* Frees the block's owned pieces and then the block. */
void block6Free(Block6 *block)
{
    if (block->unk00 != NULL) {
        bufferReleaseOwnedPair(block->unk00);
        if (block->unk00 != NULL) {
            asdOperatorDelete(bufferDestroyOwnedPair(block->unk00));
        }
    }
    if (block->unk14 != NULL) {
        asdTextureRelease(block->unk14);
    }
    asdMemFree(block->buffer);
    asdMemFree(block);
}

} /* extern "C" */
