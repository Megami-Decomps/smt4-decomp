#ifndef MODEL_MODELUNITBUFFERS_H
#define MODEL_MODELUNITBUFFERS_H

#include "common.h"
#include <stddef.h>
#include "nw/math/MTX34.h"

/* One mesh of a model unit's content; only the element count is known. */
struct UnitMeshDescriptor {
    u8 unk00[0x10];
    s32 elementCount;           /* 0x10 */
};

/* The content's tables: a list of parts at 0, and three arrays of meshes. */
struct UnitMeshTable {
    void **parts;               /* 0x00 */
    u16 partCount;              /* 0x04 */
    u8 unk06[0x5A];
    UnitMeshDescriptor **meshes;        /* 0x60 */
    u16 count;                          /* 0x64 */
    u8 unk66[6];
    UnitMeshDescriptor **meshesB;       /* 0x6C */
    u16 countB;                         /* 0x70 */
    u8 unk72[6];
    UnitMeshDescriptor **meshesC;       /* 0x78 */
    u16 countC;                         /* 0x7C */
};
struct UnitModelView {
    u8 unk00[0x30];
    UnitMeshTable *table;       /* 0x30 */
};
struct ModelEffectEntry;

/* The model content's shared table of extra effects. */
struct UnitExtraData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 count;
    /* 0x0C */ ModelEffectEntry **entries;
};
struct UnitModelContent {
    u8 unk00[0xc];
    UnitModelView view;         /* 0x0C */
    u8 unk40[0x48];
    UnitExtraData *extra;       /* 0x88 */
};
struct UnitChannel {
    u32 unk00;
    f32 unk04;
    f32 unk08;
    u32 unk0c;
    u16 *data;       /* 0x10 */
    u8 array[8];     /* 0x14 */
    s32 capacity;    /* 0x1c */
    u8 enabled;      /* 0x20 */
    u8 unk21[0xb];
    u32 unk2c;
};
struct UnitFloatChannel {
    u8 unk00[8];
    f32 *data;       /* 0x08 */
    f32 unk0c;
    f32 unk10;
    u8 unk14[4];
    u8 enabled;      /* 0x18 */
    u8 unk19[3];
};
struct UnitNodeTable {
    u8 unk00[8];
    s32 count;
};

struct ModelUnitBuffers;

/* A private list of effects copied from the unit's shared table. */
struct ModelEffectList {
    ModelEffectList() : count(0), items(NULL) {}
    /* 0x00 */ s32 count;
    /* 0x04 */ ModelEffectEntry **items;
};

/* The extra effect state associated with an individual model unit. */
struct ModelUnitExtra {
    ModelUnitExtra(UnitExtraData *data, ModelUnitBuffers *owner);
    /* 0x00 */ const void *vtable;
    /* 0x04 */ UnitExtraData *table;
    /* 0x08 */ ModelUnitBuffers *owner;
    /* 0x0C */ s32 count;
    /* 0x10 */ u32 modelId;
    /* 0x14 */ ModelEffectList filtered;
    /* 0x1C */ ModelEffectList list;
};

typedef char ModelUnitExtraLayoutCheck[sizeof(ModelUnitExtra) == 0x24 &&
    offsetof(UnitExtraData, count) == 8 && offsetof(UnitExtraData, entries) == 0xC &&
    offsetof(ModelUnitExtra, table) == 4 && offsetof(ModelUnitExtra, owner) == 8 &&
    offsetof(ModelUnitExtra, modelId) == 0x10 && offsetof(ModelUnitExtra, filtered) == 0x14 &&
    offsetof(ModelUnitExtra, list) == 0x1C ? 1 : -1];

extern "C" void FUN_0041a270(ModelUnitExtra *effects);

/* Where one shader uniform of a material lives (8 bytes); FUN_001c3bb8 looks it up by name. */
struct UnitUniformSlot {
    UnitUniformSlot(u8 kind = 2) : unk00(0), kind(kind), first(0xFF), second(0xFF), unk04(0) {}
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 kind;         /* 2, or 3 for the light count */
    /* 0x02 */ u8 first;        /* 0xFF: not found */
    /* 0x03 */ u8 second;
    /* 0x04 */ u32 unk04;
};

/* The uniforms the unit sets for one material of its part (0x58 bytes), named after the shader's
 * uniform names. */
struct UnitMaterialUniforms {
    UnitMaterialUniforms() : lightCount(3) {}
    /* 0x00 */ UnitUniformSlot worldMatrix;         /* "WrldMtx" */
    /* 0x08 */ UnitUniformSlot normalMatrix;        /* "NormMtx" */
    /* 0x10 */ UnitUniformSlot projectionMatrix;    /* "ProjMtx" */
    /* 0x18 */ UnitUniformSlot viewMatrix;          /* "ViewMtx" */
    /* 0x20 */ UnitUniformSlot universalRegister;   /* "UnivReg" */
    /* 0x28 */ UnitUniformSlot lightCount;          /* "LightCt" */
    /* 0x30 */ UnitUniformSlot hemisphereGround;    /* "HslGCol" */
    /* 0x38 */ UnitUniformSlot hemisphereSky;       /* "HslSCol" */
    /* 0x40 */ UnitUniformSlot hemisphereDirection; /* "HslSDir" */
    /* 0x48 */ UnitUniformSlot materialAmbient;     /* "MatAmbi" */
    /* 0x50 */ UnitUniformSlot materialDiffuse;     /* "MatDiff" */
};

/* The unit's uniform sets, one per material, built in memory the unit allocates. */
struct UnitUniformArray {
    /* 0x00 */ UnitMaterialUniforms *data;
    /* 0x04 */ u32 count;
};

/* One material of a part (0x2C bytes) and the path to its shader program. */
struct UnitShaderBinding {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 program;
};
struct UnitMaterialData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ UnitShaderBinding *shader;
};
struct UnitPartMaterial {
    /* 0x00 */ UnitMaterialData *data;
    /* 0x04 */ u8 unk04[0x28];
};

/* A part of the content (an entry of UnitMeshTable::parts); only what the unit reads is known. */
struct UnitModelPart {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ UnitPartMaterial *materials;
    /* 0x38 */ u16 materialCount;
    /* 0x3A */ u8 unk3a[0x4A];
    /* 0x84 */ const char *name;
};

struct ModelUnitBuffers {
    u8 unk00[8];
    UnitFloatChannel positions; /* 0x008 */
    UnitChannel channels[2];    /* 0x024 */
    UnitChannel channelsB[2];   /* 0x084 */
    UnitNodeTable ownNodes;     /* 0x0E4: built for a unit without a parent */
    u8 unk0f0[0x18];
    UnitNodeTable *nodes;       /* 0x108: the parent's node table when the unit has one */
    u8 sceneObject[8];          /* 0x10C: built from the part by FUN_005078e4 */
    u8 animationObject[0x9C];   /* 0x114: built by FUN_00507868 */
    ModelUnitBuffers *parent;   /* 0x1B0 */
    u8 unk1b4[0xC];
    nw::math::MTX34 matrix;     /* 0x1C0 */
    u8 unk1f0[0x1C];
    UnitModelContent *content;  /* 0x20c */
    UnitModelPart *part;        /* 0x210 */
    char name[0x40];            /* 0x214 */
    UnitUniformArray uniforms;  /* 0x254: one set per material of the part */
    ModelUnitExtra *extra;      /* 0x25C */
    void *objectMemory;         /* 0x260: the memory the part's objects are built in */
    void *deviceMemory;         /* 0x264 */
};

typedef char ModelUnitBuffersOffsets[
    offsetof(ModelUnitBuffers, channelsB) == 0x84 && offsetof(ModelUnitBuffers, nodes) == 0x108 &&
    offsetof(ModelUnitBuffers, ownNodes) == 0xE4 && offsetof(ModelUnitBuffers, parent) == 0x1B0 &&
    offsetof(ModelUnitBuffers, part) == 0x210 && offsetof(ModelUnitBuffers, uniforms) == 0x254 &&
    offsetof(ModelUnitBuffers, objectMemory) == 0x260 && sizeof(UnitMaterialUniforms) == 0x58 &&
    sizeof(UnitPartMaterial) == 0x2C && offsetof(UnitModelPart, name) == 0x84 &&
    offsetof(ModelUnitBuffers, matrix) == 0x1C0 && offsetof(ModelUnitBuffers, content) == 0x20C &&
    offsetof(ModelUnitBuffers, extra) == 0x25C && sizeof(UnitChannel) == 0x30 &&
    offsetof(UnitMeshTable, meshes) == 0x60 && offsetof(UnitMeshTable, meshesB) == 0x6C &&
    offsetof(UnitMeshTable, meshesC) == 0x78 && sizeof(UnitMeshTable) == 0x80 &&
    offsetof(UnitModelContent, extra) == 0x88 ? 1 : -1];

#endif
