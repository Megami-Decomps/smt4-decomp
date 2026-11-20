#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

/* The effect object that embeds the clone source at 0x3C. */
struct PolyCloneOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ PolyCloneSrc clone;
};

extern "C" {

extern const char g_effPolygonFlashSourceFileName[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCloneHandle(PolyGeom *src);

/* Allocates a geometry block (16-byte header plus payloadBytes), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(u32 payloadBytes, s32 line)
{
    asdDebugTrace(g_effPolygonFlashSourceFileName, line);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones a polygon effect's geometry block and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone1(PolyCloneOwner *owner)
{
    PolyCloneSrc *src = &owner->clone;
    PolyGeomBlock *srcBlock = src->block;
    PolyParams *params = src->params;
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x18, 1638);
    PolyGeom *geom;

    geom = effGeomCloneHandle(srcBlock->geom);
    block->geom = geom;
    if (params->segments != 0) {
        u32 segments = params->segments;
        PolyQuadUV *uv = geom->buf->uv;
        u32 i;

        for (i = 0; i < segments; i++) {
            if (i & 1) {
                uv->u0 = 0.5f; uv->v0 = 0;
                uv->u1 = 0;    uv->v1 = 0;
                uv->u2 = 0.5f; uv->v2 = 1.0f;
                uv->u3 = 0;    uv->v3 = 1.0f;
            } else {
                uv->u0 = 1.0f; uv->v0 = 0;
                uv->u1 = 0.5f; uv->v1 = 0;
                uv->u2 = 1.0f; uv->v2 = 1.0f;
                uv->u3 = 0.5f; uv->v3 = 1.0f;
            }
            uv++;
        }
    }
    return block;
}

} /* extern "C" */
