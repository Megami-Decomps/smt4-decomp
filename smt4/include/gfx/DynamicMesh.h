#ifndef GFX_DYNAMIC_MESH_H
#define GFX_DYNAMIC_MESH_H

#include "common.h"
#include <stddef.h>

/* A dynamic mesh with per-attribute vertex arrays and an index array. */
struct DynamicMesh {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;      /* 0x100: has buffers; low bits select the attributes */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 vertexCount;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 indexCount;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ void *positions;
    /* 0x34 */ void *colors;
    /* 0x38 */ void *packed;
    /* 0x3C */ void *texCoords;
    /* 0x40 */ u8 unk40[8];
    /* 0x48 */ u16 *indices;
};
typedef char DynamicMeshOffsetsCheck[offsetof(DynamicMesh, flags) == 4 &&
    offsetof(DynamicMesh, positions) == 0x30 && offsetof(DynamicMesh, indices) == 0x48 ? 1 : -1];

/* Flushes the mesh buffers selected by the caller's dirty mask. */
extern "C" void dynamicMeshFlushAttributes(DynamicMesh *mesh, u32 mask);

#endif
