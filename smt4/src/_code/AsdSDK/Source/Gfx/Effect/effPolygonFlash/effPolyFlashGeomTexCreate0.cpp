/* NON_MATCHING: the debug trace (string, line, nop) and size/clamp shapes now match retail; what remains is register allocation (retail keeps the effect object's fields in r4/r6 via a writeback load and the new block in r5; armcc swaps them) and the geometry result being reused in r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"

extern "C" {

extern const char DAT_00410408[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
void textureSlotReplace(PolyGeom *geom, void *texture);
u32 FUN_0024c3c8(int id);
extern u8 DAT_004737c2;

/* Builds a polygon effect's textured geometry block (the given texture, or a default one) and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomTexCreate0(PolyParams *params, void *texture)
{
    PolyGeom *geom;
    asdDebugTrace(DAT_00410408, 2090);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, params->segments * 0x28 + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    geom = FUN_00247334(params->segments & 0xffff, 2, 4, &DAT_004737c2, 76);
    block->geom = geom;
    if (texture != NULL) {
        textureSlotReplace(geom, texture);
    } else {
        geom->unk04 = FUN_0024c3c8(18);
        refCountIncrement(reinterpret_cast<int *>(geom->unk04));
    }
    if (params->segments != 0) {
        PolyQuadUV *uv = block->geom->buf->uv;
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
