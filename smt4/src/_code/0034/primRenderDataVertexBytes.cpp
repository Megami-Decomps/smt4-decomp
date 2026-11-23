#include "AsdSDK/Source/Gfx/Prim/AsdPrimRenderData.h"

extern "C" {

/* Bytes of one vertex stream: `stride` bytes per vertex when the primitive carries it. */
static __inline s32 primStreamBytes(const PrimRenderData *prim, u32 stream, s32 stride)
{
    if (prim->flags & stream) {
        return prim->vertexCount * stride;
    }
    return 0;
}

/* Size in bytes of the primitive's vertex buffer: every stream it carries for each of its vertices. */
s32 primRenderDataVertexBytes(const PrimRenderData *prim)
{
    return primStreamBytes(prim, PRIM_STREAM_POSITION, 12) + primStreamBytes(prim, PRIM_STREAM_COLOR_F32, 16) +
           primStreamBytes(prim, PRIM_STREAM_COLOR_U8, 4) + primStreamBytes(prim, PRIM_STREAM_UV, 8) +
           primStreamBytes(prim, PRIM_STREAM_NORMAL, 12) + primStreamBytes(prim, PRIM_STREAM_TANGENT, 12);
}

} /* extern "C" */
