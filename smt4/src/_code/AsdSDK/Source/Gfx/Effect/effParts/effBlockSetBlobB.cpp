/* Replaces blob B of the block with a heap copy of `size` bytes at `src` (or empties it). */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00409378[]; /* __FILE__ of effParts.cpp */

void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);
void asdMemFree(void *ptr);
void rt_memcpy(void *dst, const void *src, u32 size);

void effBlockSetBlobB(EffBlock *block, const void *src, s32 size, u16 tag)
{
    if (block->ownedB != NULL) {
        asdMemFree(block->ownedB);
        block->dataB = NULL;
        block->sizeB = 0;
        block->ownedB = NULL;
    }
    if (src != NULL && size > 0) {
        asdDebugTrace(DAT_00409378, 1118);
        block->ownedB = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        block->tagB = tag;
        block->dataB = block->ownedB;
        block->sizeB = size;
        rt_memcpy(block->ownedB, src, size);
    }
}

}
