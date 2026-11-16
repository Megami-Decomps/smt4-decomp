/* AsdSDK/Source/Gfx/Effect/effParts.cpp: allocating an empty effect-part block.
 *
 * effBlockCreate's body: the other block constructors of effParts.cpp (create from a block,
 * clone) start with it inlined, which keeps the kind as a u16 argument (retail re-extends it
 * before indexing the handler table) and the source block's fields read after the clears. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTSALLOC_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTSALLOC_H

#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const char g_effPartsSourcePath[]; /* __FILE__ of effParts.cpp */
extern EffBlockHandler g_handlerTable[];

#ifdef __cplusplus
}
#endif

/* Allocates an empty block of the given kind (the id stays 0xdc until the caller sets it). */
static __inline EffBlock *effBlockAllocate(u16 kind)
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

#endif
