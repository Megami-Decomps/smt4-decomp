/* NON_MATCHING: register allocation only: retail keeps srcBlock in r4 and params in r6 (one ldm of the two fields) and the block in r5; the built code swaps them */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char DAT_00544ba8[]; /* __FILE__ of effPolygonFlash.cpp */

PolyGeom *FUN_00271d28(PolyGeom *src);

/* Clones a polygon effect's geometry block and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone0(PolyCloneSrc *src)
{
    PolyParams *params = src->params;
    PolyGeomBlock *srcBlock = src->block;
    s32 dataSize = params->segments * 0x28;
    PolyGeomBlock *block;
    PolyGeom *geom;

    asdDebugTrace(DAT_00544ba8, 2094);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, dataSize + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    geom = FUN_00271d28(srcBlock->geom);
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
