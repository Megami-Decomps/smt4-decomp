#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410408[]; /* effect source file name (__FILE__) */
void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
void textureSlotReplace(PolyGeom *geom, void *texture);
u32 FUN_0024c3c8(int id);
extern u8 DAT_004737c2;

/* Allocates a geometry block (16-byte header plus `payloadBytes`), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(u32 payloadBytes, s32 line)
{
    asdDebugTrace(DAT_00410408, line);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Builds a polygon effect's textured geometry block (the given texture, or a default one) and gives each segment alternating texture coordinates. */
PolyGeomBlock *effPolyFlashGeomTexCreate3(PolyParams *params, void *texture)
{
    PolyGeom *geom;
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x20, 2893);

    geom = FUN_00247334(params->segments & 0xffff, 2, 4, &DAT_004737c2, 76);
    block->geom = geom;
    if (texture == NULL) {
        geom->unk04 = FUN_0024c3c8(19);
        refCountIncrement(reinterpret_cast<int *>(geom->unk04));
    } else {
        textureSlotReplace(geom, texture);
    }
    u32 segments = params->segments;
    if (segments != 0) {
        PolyQuadUV *uv = block->geom->buf->uv;

        for (u32 i = 0; i < segments; i++) {
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
