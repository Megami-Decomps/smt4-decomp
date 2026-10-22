/* NON_MATCHING: handler index narrowing and callback-load/allocation-argument scheduling differ. */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 category, u32 track);
extern EffBlockHandler g_handlerTable[];
extern const char g_effPartsSourcePath[];

EffBlock *FUN_00222180(EffBlock *source)
{
    u16 kind = source->kind;
    asdDebugTrace(g_effPartsSourcePath, 46);
    EffBlock *block = (EffBlock *)memAlloc(0x10000, 0x100, 0, sizeof(EffBlock), 0x10, 1);
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
    block->tagA = source->tagA;
    block->tagB = source->tagB;
    block->unk08 = (u32)g_handlerTable[kind].clone((void *)source->unk08);
    return block;
}
}
