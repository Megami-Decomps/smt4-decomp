/* NON_MATCHING: allocation head (allocGeomBlock), the add r0,#60 / ldm clone-source load and the cached segment count match retail; remaining: retail's VFP constant registers (s0 = 1.0, s1 = 0, s2 = 0.5) and the paired vstmia stores of the texture-coordinate arms use another register assignment, and `mov r1, r0` reuses the geometry result. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

/* The effect object that embeds the clone source at 0x3C. */
struct PolyCloneOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ PolyCloneSrc clone;
};

extern "C" {

extern const char DAT_00544ba8[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00271d28(PolyGeom *src);

/* Allocates a geometry block (16-byte header plus payloadBytes), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(u32 payloadBytes, s32 line)
{
    asdDebugTrace(DAT_00544ba8, line);
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
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x18, 1641);
    PolyGeom *geom;

    geom = FUN_00271d28(srcBlock->geom);
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
