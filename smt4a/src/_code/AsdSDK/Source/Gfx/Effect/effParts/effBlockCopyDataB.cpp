#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char g_effPartsSourcePath[];
void asdMemFree(void *allocation);
void *memAlloc(u32 heap, u32 alignment, u32 region, s32 size, u32 group, u32 mode);
void *rt_memcpy(void *destination, const void *source, u32 size);

void effBlockCopyDataB(EffBlock *block, const void *data, s32 size, u16 tag)
{
    if (block->ownedB) {
        asdMemFree(block->ownedB);
        block->dataB = NULL;
        block->sizeB = 0;
        block->ownedB = NULL;
    }
    if (data && size > 0) {
        asdDebugTrace(g_effPartsSourcePath, 1098);
        void *copy = memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 16, 1);
        block->tagB = tag;
        block->ownedB = copy;
        block->dataB = copy;
        block->sizeB = size;
        rt_memcpy(copy, data, size);
    }
}
}
