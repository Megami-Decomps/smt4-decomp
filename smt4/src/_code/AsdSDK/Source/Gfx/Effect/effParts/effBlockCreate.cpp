/* Allocates an empty effect-part block of the given kind (the id stays 0xdc). */
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* __FILE__ of effParts.cpp */

void *memAlloc(int heap, int alignClass, int unk08, u32 size, int align, int fromFront);

EffBlock *effBlockCreate(u16 kind)
{
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
    return block;
}

}
