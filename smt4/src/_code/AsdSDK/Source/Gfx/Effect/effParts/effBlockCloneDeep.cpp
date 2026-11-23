/* Clones a block: a new block with the same id and kind, and heap copies of its two data blobs. */
#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"

extern "C" {

void __aeabi_memcpy(void *dst, const void *src, u32 size);
void effBlockSetBlobB(EffBlock *block, const void *src, s32 size, u16 tag);

/* effPartsSetData's body (blob A's counterpart of effBlockSetBlobB), inlined here as retail did: replace blob A with a heap copy of `data`. */
static __inline void effBlockSetBlobA(EffBlock *block, const void *data, s32 size, u16 tag)
{
    if (block->ownedA != NULL) {
        asdMemFree(block->ownedA);
        block->dataA = NULL;
        block->sizeA = 0;
        block->ownedA = NULL;
    }
    if (data != NULL && size > 0) {
        asdDebugTrace(g_effPartsSourcePath, 1080);
        void *copy = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        block->tagA = tag;
        block->ownedA = copy;
        block->dataA = copy;
        block->sizeA = size;
        __aeabi_memcpy(block->dataA, data, size);
    }
}

EffBlock *effBlockCloneDeep(EffBlock *src)
{
    EffBlock *block = effBlockAllocate(src->kind);
    block->id = src->id;
    if (src->sizeA != 0) {
        effBlockSetBlobA(block, effBlockDataA(src), src->sizeA, src->tagA);
    }
    if (src->sizeB != 0) {
        effBlockSetBlobB(block, effBlockDataB(src), src->sizeB, src->tagB);
    }
    return block;
}

}
