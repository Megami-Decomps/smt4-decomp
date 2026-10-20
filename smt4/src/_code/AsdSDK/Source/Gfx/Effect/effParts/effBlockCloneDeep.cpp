/* NON_MATCHING: `src` and `block` swap registers (r4/r5), and retail reloads dataA for the rt_memcpy destination instead of reusing the allocation in r0 */
/* Clones a block: a new block with the same id and kind, and heap copies of its two data blobs. */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* __FILE__ of effParts.cpp */

void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);
void rt_memcpy(void *dst, const void *src, u32 size);
void effBlockSetBlobB(EffBlock *block, const void *src, s32 size, u16 tag);

EffBlock *effBlockCloneDeep(EffBlock *src)
{
    u16 kind = src->kind;
    EffBlock *block;
    void *data;
    s32 size;
    u16 tag;

    asdDebugTrace(g_effPartsSourcePath, 46);
    block = (EffBlock *)memAlloc(0x10000, 0x100, 0, sizeof(EffBlock), 0x10, 1);
    block->flags = 0;
    block->unk08 = 0;
    block->unk0c = 0;
    block->dataA = NULL;
    block->sizeA = 0;
    block->ownedA = NULL;
    block->unk1c = 0;
    block->dataB = NULL;
    block->sizeB = 0;
    block->ownedB = NULL;
    block->id = 0xdc;
    block->kind = kind;
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
