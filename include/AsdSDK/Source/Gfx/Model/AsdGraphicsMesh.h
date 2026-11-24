#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDGRAPHICSMESH_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDGRAPHICSMESH_H

#include <stddef.h>
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

struct GfxDictionaryData;
struct GfxTextureMapper;

struct AsdGraphicsMeshResource {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ ResourceRelativePointer<GfxDictionaryData> dictionary;
    /* 0x018 */ u8 unk018[0x158];
    /* 0x170 */ u32 kind;
    /* 0x174 */ u8 unk174[0x100];
    /* 0x274 */ ResourceRelativePointer<GfxTextureMapper> textureMappers[3];
    /* 0x280 */ u8 unk280[0x24];
    /* 0x2A4 */ u32 unk2A4;
};

struct AsdGraphicsMesh {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdGraphicsMeshResource *resource;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ void *shader;
};

typedef char AsdGraphicsMeshLayoutCheck[offsetof(AsdGraphicsMesh, shader) == 0x20 &&
    offsetof(AsdGraphicsMeshResource, textureMappers) == 0x274 &&
    offsetof(AsdGraphicsMeshResource, unk2A4) == 0x2A4 ? 1 : -1];

#endif
