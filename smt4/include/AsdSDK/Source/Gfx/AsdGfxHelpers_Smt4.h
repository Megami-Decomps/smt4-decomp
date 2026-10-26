#pragma once
#include "common.h"

/* AsdGfxHelpers (declarations migrated from callers). */
struct AsdGxTexture;
struct EffPartsData;
extern "C" {

void asdModelAdvanceCommandCursor(s32 size);

AsdGxTexture * asdGxIndexBufferCreate(u32 kind);

void effPartsSetData(EffPartsData *part, const void *src, int size, u16 type);

} /* extern "C" */
