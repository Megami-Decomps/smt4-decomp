/* NON_MATCHING: with effBlockAllocate inlined the registers match; only retail's reload of dataA for the rt_memcpy destination (ldr r0, [r5, #16]) is missing: the build reuses the allocation in r0. */
/* Clones a block: a new block with the same id and kind, and heap copies of its two data blobs. */
#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"

extern "C" {

void rt_memcpy(void *dst, const void *src, u32 size);
void effBlockSetBlobB(EffBlock *block, const void *src, s32 size, u16 tag);

EffBlock *effBlockCloneDeep(EffBlock *src)
{
    EffBlock *block = effBlockAllocate(src->kind);
    void *data;
    s32 size;
    u16 tag;

    block->id = src->id;

    size = src->sizeA;
    if (size != 0) {
        data = effBlockDataA(src);
        tag = src->tagA;
        if (data != NULL && size > 0) {
            asdDebugTrace(g_effPartsSourcePath, 1080);
            block->ownedA = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
            block->tagA = tag;
            block->dataA = block->ownedA;
            block->sizeA = size;
            rt_memcpy(block->dataA, data, size);
        }
    }
    if (src->sizeB != 0) {
        effBlockSetBlobB(block, effBlockDataB(src), src->sizeB, src->tagB);
    }
    return block;
}

}
