/* NON_MATCHING: source/destination registers swap and memcpy reuses the allocation instead of reloading dataA. */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"
#include "util/CalleeContracts.h"

extern "C" {
extern const char g_effPartsSourcePath[];
void rt_memcpy(void* destination, const void* source, u32 size);
void effBlockCopyDataB(EffBlock* block, const void* data, s32 size, u16 tag);

// Duplicate the block and take ownership of independent copies of both data blobs.
EffBlock* FUN_00290edc(EffBlock* source)
{
    u16 kind = source->kind;
    asdDebugTrace(g_effPartsSourcePath, 46);
    EffBlock* block = static_cast<EffBlock*>(memAlloc(0x10000, 0x100, 0, sizeof(EffBlock), 16, 1));
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
    block->id = 0xDC;
    block->kind = kind;
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
