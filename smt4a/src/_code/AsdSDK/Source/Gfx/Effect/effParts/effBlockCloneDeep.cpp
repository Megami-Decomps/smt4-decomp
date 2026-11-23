#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void effBlockCopyDataB(EffBlock* block, const void* data, s32 size, u16 tag);

/* effPartSetData's body (blob A's counterpart of effBlockCopyDataB), inlined here as retail did: replace blob A with a heap copy of `data`. */
static __inline void effBlockCopyDataA(EffBlock *block, const void *data, s32 size, u16 tag)
{
    if (block->ownedA) {
        asdMemFree(block->ownedA);
        block->dataA = NULL;
        block->sizeA = 0;
        block->ownedA = NULL;
    }
    if (data && size > 0) {
        asdDebugTrace(g_effPartsSourcePath, 1060);
        void *copy = memAlloc(0x10000, 0x100, 0, size, 16, 1);
        block->tagA = tag;
        block->ownedA = copy;
        block->dataA = copy;
        block->sizeA = size;
        __aeabi_memcpy(block->dataA, data, size);
    }
}

// Duplicate the block and take ownership of independent copies of both data blobs.
EffBlock* effBlockCloneDeep(EffBlock* source)
{
    EffBlock* block = effBlockAllocate(source->kind);
    block->id = source->id;
    if (source->sizeA != 0) {
        effBlockCopyDataA(block, effBlockDataA(source), source->sizeA, source->tagA);
    }
    if (source->sizeB != 0) {
        effBlockCopyDataB(block, effBlockDataB(source), source->sizeB, source->tagB);
    }
    return block;
}
}
