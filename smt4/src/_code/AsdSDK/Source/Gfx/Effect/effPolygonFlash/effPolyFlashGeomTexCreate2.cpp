/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 89 vs built 85 rows, 77 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
void FUN_002472f0(PolyGeom *geom, void *texture);
u32 FUN_0024c3c8(int id);
void refCountIncrement(u32 texture);
extern u8 DAT_004737c2;

/* Builds a polygon effect's textured geometry block (the given texture, or a default one) and gives each segment alternating texture coordinates. The effect's unk70 is clamped to at least 1. */
PolyGeomBlock *effPolyFlashGeomTexCreate2(PolyParams *params, void *texture)
{
    PolyGeom *geom;
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, params->segments * 0x18 + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    params->unk70 = (params->unk70 < 2) ? 1 : params->unk70;
    geom = FUN_00247334(params->segments & 0xffff, 2, 4, &DAT_004737c2, 76);
    block->geom = geom;
    if (texture != NULL) {
        FUN_002472f0(geom, texture);
    } else {
        geom->unk04 = FUN_0024c3c8(18);
        refCountIncrement(geom->unk04);
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
