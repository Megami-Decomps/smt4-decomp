/* NON_MATCHING: allocation head (allocGeomBlock), the clone-source writeback load and the cached segment count now match; only retail's reuse of the geometry result in r1 (`mov r1, r0` before the segment test) differs. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410408[]; /* effPolygonFlash.cpp: __FILE__ */
void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00268fc4(PolyGeom *src);

/* Allocates a geometry block (16-byte header plus `payloadBytes`), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(u32 payloadBytes, s32 line)
{
    asdDebugTrace(DAT_00410408, line);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones the geometry block of a polygon object, clamping its unk70 to at least 1, and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone2(PolyObject *obj)
{
    PolyCloneSrc *src = (PolyCloneSrc *)&obj->state;
    PolyGeomBlock *srcBlock = src->block;
    PolyParams *params = src->params;
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x18, 1197);
    PolyGeom *geom;

    params->unk70 = (params->unk70 <= 1) ? 1 : params->unk70;
    geom = FUN_00268fc4(srcBlock->geom);
    block->geom = geom;
    u32 segments = params->segments;
    if (segments != 0) {
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
