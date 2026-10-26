/* NON_MATCHING: the debug trace (DAT_00544ba8, line 2899) now matches retail; remaining difference is register allocation/scheduling (retail loads the embedded clone source with one ldm into r4/r6 and interleaves the trace loads with the size computation). */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"

/* The effect object that embeds the clone source at 0x3C. */
struct PolyCloneOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ PolyCloneSrc clone;
};

extern "C" {

PolyGeom *FUN_00271d28(PolyGeom *src);
extern const char DAT_00544ba8[]; /* the source file path (__FILE__) */

/* Clones a polygon effect's geometry block and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone3(PolyCloneOwner *owner)
{
    PolyCloneSrc *src = &owner->clone;
    PolyGeomBlock *srcBlock = src->block;
    PolyParams *params = src->params;
    u32 size = params->segments * 0x20;
    PolyGeomBlock *block;

    asdDebugTrace(DAT_00544ba8, 2899);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);
    PolyGeom *geom;

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
