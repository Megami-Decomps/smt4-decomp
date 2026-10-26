/* NON_MATCHING: the debug trace (string, line, nop) and size/clamp shapes now match retail; what remains is register allocation (retail keeps the effect object's fields in r4/r6 via a writeback load and the new block in r5; armcc swaps them) and the geometry result being reused in r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The effect object that embeds the clone source at 0x3C. */
struct PolyCloneOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ PolyCloneSrc clone;
};

extern "C" {

extern const char DAT_00544ba8[];

PolyGeom *FUN_00271d28(PolyGeom *src);

/* Clones the geometry block of a polygon object, clamping its unk70 to at least 1, and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone2(PolyObject *obj)
{
    PolyGeomBlock *srcBlock = (PolyGeomBlock *)obj->state;
    PolyParams *params = (PolyParams *)obj->work;
    u32 size = params->segments * 0x18;
    PolyGeomBlock *block;

    asdDebugTrace(DAT_00544ba8, 1199);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);
    PolyGeom *geom;

    block->data = block->payload;
    block->self = block;
    params->unk70 = params->unk70 > 1 ? params->unk70 : 1;
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
