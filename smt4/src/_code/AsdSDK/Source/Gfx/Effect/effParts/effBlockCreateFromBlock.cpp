/* NON_MATCHING: the memAlloc stack-argument stores come in the other order, retail re-extends the u16 kind, and armcc schedules the block initialisation differently than retail (id/kind stores and the tag loads are hoisted above the zero stores) */
/* Creates a block like `src`: same id, kind and tags, with a data object made by the kind's handler. */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* __FILE__ of effParts.cpp */
extern EffBlockHandler g_handlerTable[];

void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);

EffBlock *effBlockCreateFromBlock(EffBlock *src)
{
    u16 kind = src->kind;
    EffBlock *block;

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
    block->tagA = src->tagA;
    block->tagB = src->tagB;
    block->unk08 = (u32)g_handlerTable[kind].create(src);
    return block;
}

}
