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
/* The data the unit's extra object is built from; only its count is known. */
struct UnitExtraData {
    u8 unk00[8];
    s32 count;                  /* 0x08 */
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

/* The object built for a unit whose content has extra data (0x24 bytes). */
struct ModelUnitExtra {
    ModelUnitExtra(UnitExtraData *data, ModelUnitBuffers *owner);
    u8 unk00[0x24];
};

struct ModelUnitBuffers {
    u8 unk00[8];
    UnitFloatChannel positions; /* 0x008 */
    UnitChannel channels[2];    /* 0x024 */
    UnitChannel channelsB[2];   /* 0x084 */
    u8 unk0e4[0x24];
    UnitNodeTable *nodes;       /* 0x108 */
    u8 unk10c[0xB4];
    nw::math::MTX34 matrix;     /* 0x1C0 */
    u8 unk1f0[0x1C];
    UnitModelContent *content;  /* 0x20c */
    u8 unk210[0x4C];
    ModelUnitExtra *extra;      /* 0x25C */
};

typedef char ModelUnitBuffersOffsets[
    offsetof(ModelUnitBuffers, channelsB) == 0x84 && offsetof(ModelUnitBuffers, nodes) == 0x108 &&
    offsetof(ModelUnitBuffers, matrix) == 0x1C0 && offsetof(ModelUnitBuffers, content) == 0x20C &&
    offsetof(ModelUnitBuffers, extra) == 0x25C && sizeof(UnitChannel) == 0x30 &&
    offsetof(UnitMeshTable, meshes) == 0x60 && offsetof(UnitMeshTable, meshesB) == 0x6C &&
    offsetof(UnitMeshTable, meshesC) == 0x78 && sizeof(UnitMeshTable) == 0x80 &&
    offsetof(UnitModelContent, extra) == 0x88 ? 1 : -1];

#endif
