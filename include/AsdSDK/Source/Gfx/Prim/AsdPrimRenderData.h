/* AsdSDK/Source/Gfx/Prim/AsdPrimRenderData.cpp: a primitive's render data, its vertex streams back to back in one
 * buffer plus an index list (both games). */
#ifndef ASDSDK_SOURCE_GFX_PRIM_ASDPRIMRENDERDATA_H
#define ASDSDK_SOURCE_GFX_PRIM_ASDPRIMRENDERDATA_H

#include "common.h"
#include <stddef.h>

/* Which vertex streams a primitive carries (PrimRenderData::flags), and where its buffers live. */
enum {
    PRIM_STREAM_POSITION = 0x01,  /* 3 floats per vertex */
    PRIM_STREAM_COLOR_F32 = 0x02, /* 4 floats per vertex */
    PRIM_STREAM_UV = 0x04,        /* 2 floats per vertex */
    PRIM_STREAM_NORMAL = 0x08,    /* 3 floats per vertex */
    PRIM_STREAM_TANGENT = 0x10,   /* 3 floats per vertex */
    PRIM_STREAM_COLOR_U8 = 0x20,  /* 4 bytes per vertex */
    PRIM_GPU_BUFFER = 0x100       /* the buffers are in GPU memory and registered with the command list */
};

typedef struct PrimRenderData {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[4];
    /* 0x00C */ u32 vertexCount;
    /* 0x010 */ u8 unk010[8];
    /* 0x018 */ u32 indexCount;
    /* 0x01C */ u8 unk01C[0x10];
    /* 0x02C */ u8 *buffer;          /* the one allocation holding every stream */
    /* 0x030 */ f32 *positions;
    /* 0x034 */ f32 *colors;
    /* 0x038 */ u8 *byteColors;
    /* 0x03C */ u8 *texCoords;
    /* 0x040 */ u8 unk040[8];
    /* 0x048 */ u16 *indices;
    /* 0x04C */ u8 commands[0x790];
    /* 0x7DC */ u32 indexPhysAddress;
    /* 0x7E0 */ u32 indexPhysCount;
    /* 0x7E4 */ u8 indexPhysFlag;
} PrimRenderData;
typedef char PrimRenderDataLayoutCheck[offsetof(PrimRenderData, vertexCount) == 0xC &&
    offsetof(PrimRenderData, buffer) == 0x2C && offsetof(PrimRenderData, indices) == 0x48 &&
    offsetof(PrimRenderData, indexPhysFlag) == 0x7E4 ? 1 : -1];

extern "C" {

/* IV: the vertex buffer size the primitive's streams need (Apocalypse inlines it into its allocator). */
s32 primRenderDataVertexBytes(const PrimRenderData *prim);

} /* extern "C" */

#endif
