/* Creates a block like `src`: same id, kind and tags, with a data object made by the kind's handler. */
#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"

extern "C" {

EffBlock *effBlockCreateFromBlock(EffBlock *src)
{
    EffBlock *block = effBlockAllocate(src->kind);
    block->id = src->id;
    block->tagA = src->tagA;
    block->tagB = src->tagB;
    block->unk08 = (u32)g_handlerTable[block->kind].create(src);
    return block;
}

}
