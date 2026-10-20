/* NON_MATCHING: the stores for memAlloc's last two stack arguments are emitted in the other order (mov r1/r0), and retail re-extends the u16 kind (uxth) before indexing the handler table */
/* NON_MATCHING: armcc schedules the block initialisation differently than retail (id/kind stores and the tag loads are hoisted above the zero stores) */
/* Copies a block: same kind and tags, with a copy of its data object made by the kind's handler (the id stays 0xdc). */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00409378[]; /* __FILE__ of effParts.cpp */
extern EffBlockHandler g_handlerTable[];

void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);

EffBlock *effBlockClone(EffBlock *src)
{
    u16 kind = src->kind;
    EffBlock *block;

    asdDebugTrace(DAT_00409378, 46);
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
    block->tagA = src->tagA;
    block->tagB = src->tagB;
    block->unk08 = (u32)g_handlerTable[kind].clone((void *)src->unk08);
    return block;
}

}
