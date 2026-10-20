/* A batch of quads drawn through nn::gr::CTR vertex state: a vertex buffer (4 vertices of 0x24
 * bytes per quad), an index buffer (6 u16 per quad) and the vertex state that binds attribute
 * buffers to their slots. */
#ifndef SHARD_S3GXQUAD_H
#define SHARD_S3GXQUAD_H

#include "common.h"

#define GX_VERTEX_ATTR_COUNT 12      /* attribute slots of a binding */
#define GX_VERTEX_BINDING_COUNT 12
#define GX_QUAD_VERTEX_BYTES 0x90    /* 4 vertices */
#define GX_QUAD_INDEX_COUNT 6

/* Attribute description the layout points at: its slot is the byte at +2. */
typedef struct GxAttrDesc {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 slot;
} GxAttrDesc;

/* Vertex layout: up to 12 attributes, each with a data type and an attribute description. */
typedef struct GxVertexLayout {
    /* 0x00 */ u8 count;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 type[GX_VERTEX_ATTR_COUNT];
    /* 0x10 */ GxAttrDesc *attr[GX_VERTEX_ATTR_COUNT];
} GxVertexLayout;

/* One buffer bound to up to 12 attributes (0x70 bytes). */
typedef struct GxVertexBinding {
    /* 0x00 */ u32 buffer;                                  /* 0: free */
    /* 0x04 */ u8 type[GX_VERTEX_ATTR_COUNT];
    /* 0x10 */ u32 components[GX_VERTEX_ATTR_COUNT];        /* components per attribute */
    /* 0x40 */ s32 slot[GX_VERTEX_ATTR_COUNT];              /* attribute slot or -1 */
} GxVertexBinding;

typedef struct GxVertexState {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x150];
    /* 0x154 */ u8 attrEnabled[GX_VERTEX_ATTR_COUNT];   /* indexed by attribute slot */
    /* 0x160 */ GxVertexBinding bindings[GX_VERTEX_BINDING_COUNT];
    /* 0x6A0 */ u8 unk6A0[0xF0];
} GxVertexState;

typedef struct GxQuadBatch {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 quadCount;
    /* 0x008 */ u8 *vertices;
    /* 0x00C */ u16 *indices;
    /* 0x010 */ GxVertexState vertexState;
    /* 0x7A0 */ u32 indexAddress;      /* physical address of the index buffer */
    /* 0x7A4 */ u32 indexCount;
    /* 0x7A8 */ u8 indexed;
} GxQuadBatch;

#endif
