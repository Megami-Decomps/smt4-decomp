/* NON_MATCHING: with effBlockAllocate inlined the registers match; only retail's reload of dataA for the rt_memcpy destination is missing: the build reuses the allocation in r0. */
#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void effBlockCopyDataB(EffBlock* block, const void* data, s32 size, u16 tag);

// Duplicate the block and take ownership of independent copies of both data blobs.
EffBlock* effBlockCloneDeep(EffBlock* source)
{
    EffBlock* block = effBlockAllocate(source->kind);
    block->id = source->id;
    s32 size = source->sizeA;
    if (size != 0) {
        void* data = effBlockDataA(source);
        u16 tag = source->tagA;
        if (data != NULL && size > 0) {
            asdDebugTrace(g_effPartsSourcePath, 1060);
            block->ownedA = memAlloc(0x10000, 0x100, 0, size, 16, 1);
            block->tagA = tag;
            block->dataA = block->ownedA;
            block->sizeA = size;
            rt_memcpy(block->dataA, data, size);
        }
    }
    if (source->sizeB != 0) {
        effBlockCopyDataB(block, effBlockDataB(source), source->sizeB, source->tagB);
    }
    return block;
}
}
