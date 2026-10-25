/* NON_MATCHING: debug trace (DAT_00410408, 1197), the size/trace order and the unk70 clamp now match; retail reads obj->state/work with a writeback load (ldr r6, [r0, #60]!) and keeps the allocation result in r5 across the unk70 store. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410408[]; /* effPolygonFlash.cpp: __FILE__ */
void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00268fc4(PolyGeom *src);

/* Clones the geometry block of a polygon object, clamping its unk70 to at least 1, and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone2(PolyObject *obj)
{
    PolyGeomBlock *srcBlock = (PolyGeomBlock *)obj->state;
    PolyParams *params = (PolyParams *)obj->work;
    u32 payloadSize = params->segments * 0x18;
    PolyGeomBlock *block;
    PolyGeom *geom;

    asdDebugTrace(DAT_00410408, 1197);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadSize + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    params->unk70 = (params->unk70 <= 1) ? 1 : params->unk70;
    geom = FUN_00268fc4(srcBlock->geom);
    block->geom = geom;
    if (params->segments != 0) {
        PolyQuadUV *uv = geom->buf->uv;
        u32 i;

        for (i = 0; i < params->segments; i++) {
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
