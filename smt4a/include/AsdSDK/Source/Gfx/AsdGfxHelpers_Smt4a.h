#pragma once
#include "common.h"

/* AsdGfxHelpers (declarations migrated from callers). */
struct AsdGxTexture;
struct PartData;
struct TextureNode;
struct AsdGxCommandList;
struct TextScalarWork;
struct ModelRef;
extern "C" {

AsdGxTexture * asdGxIndexBufferCreate(u32 kind);

void effPartSetData(PartData *part, const void *src, s32 size, u16 id);

TextureNode* asdTMTexTableGetNode(s32 tableIndex, s32 nodeIndex);

void asdGxCommandListBegin(AsdGxCommandList *list);

void asdTextSetValueFlagsAndScalar(TextScalarWork *work, u32 value, u32 flags, f32 scalar);

u32 asdModelGetSlotArray2(s32 slot);

void asdModelStartReferencedAnimation(ModelRef *ref, u32 index);

} /* extern "C" */
