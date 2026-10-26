/* NON_MATCHING: the allocation head now matches (plain static allocGeomBlock); retail reads the clone source with one ldm from owner+0x3c (add r0,r0,#60 first) into r4/r6, here writeback loads with the registers swapped, and the segment count is reloaded after the geometry call. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

/* The effect object that embeds the clone source at 0x3C. */
struct PolyCloneOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ PolyCloneSrc clone;
};

extern "C" {

extern const char DAT_00410408[]; /* effect source file name (__FILE__) */
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

/* Clones a polygon effect's geometry block and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomClone0(PolyCloneOwner *owner)
{
    PolyCloneSrc *src = &owner->clone;
    PolyGeomBlock *srcBlock = src->block;
    PolyParams *params = src->params;
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x28, 2090);
    PolyGeom *geom;

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
