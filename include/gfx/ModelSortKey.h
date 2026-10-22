#ifndef GFX_MODEL_SORT_KEY_H
#define GFX_MODEL_SORT_KEY_H

#include "common.h"
#include <stddef.h>

struct ModelSortMaterialState {
    /* 0x000 */ u8 unk000[0x2D4];
    /* 0x2D4 */ u32 flags;
};
struct ModelSortRasterState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 flags;
};
struct ModelSortMaterial {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelSortMaterialState* state;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ u32 flags;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ ModelSortRasterState* raster;
};
struct ModelSortNode {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 materialIndex;
    /* 0x20 */ u8 unk20[5];
    /* 0x25 */ u8 layer;
};
struct ModelSortModel {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ ModelSortMaterial** materials;
};
struct ModelSortEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelSortNode* node;
    /* 0x0C */ ModelSortModel* model;
};

typedef char ModelSortEntryNodeOffsetCheck[offsetof(ModelSortEntry, node) == 8 ? 1 : -1];
typedef char ModelSortNodeLayerOffsetCheck[offsetof(ModelSortNode, layer) == 0x25 ? 1 : -1];
typedef char ModelSortMaterialRasterOffsetCheck[offsetof(ModelSortMaterial, raster) == 0x2C ? 1 : -1];
typedef char ModelSortMaterialFlagsOffsetCheck[offsetof(ModelSortMaterialState, flags) == 0x2D4 ? 1 : -1];
typedef char ModelSortModelMaterialsOffsetCheck[offsetof(ModelSortModel, materials) == 0x164 ? 1 : -1];

#endif
