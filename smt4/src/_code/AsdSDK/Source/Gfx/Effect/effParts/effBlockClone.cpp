/* Copies a block: same kind and tags, with a copy of its data object made by the kind's handler (the id stays 0xdc). */
#include "AsdSDK/Source/Gfx/Effect/effPartsAlloc.h"

extern "C" {

EffBlock *effBlockClone(EffBlock *src)
{
    EffBlock *block = effBlockAllocate(src->kind);
    block->tagA = src->tagA;
    block->tagB = src->tagB;
    block->unk08 = (u32)g_handlerTable[block->kind].clone((void *)src->unk08);
    return block;
}

}
