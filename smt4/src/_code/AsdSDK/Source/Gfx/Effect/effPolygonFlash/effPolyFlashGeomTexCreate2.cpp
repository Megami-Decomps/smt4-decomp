/* NON_MATCHING: code shape matches retail (geometry re-read from the block, kept in r0 into the replace arm); only the loop's segment count and UV store base swap r2/r3. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"

extern "C" {

extern const char DAT_00410408[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCreateRepeatedIndexList(u32 count, int w, int h, u8 *table, int tableSize);
void textureSlotReplace(PolyGeom *geom, void *texture);
u32 sysGetTableWord(int id);
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

/* Builds a polygon effect's textured geometry block (the given texture, or a default one) and gives each segment alternating texture coordinates. The effect's unk70 is clamped to at least 1. */
PolyGeomBlock *effPolyFlashGeomTexCreate2(PolyParams *params, void *texture)
{
    PolyGeomBlock *block = allocGeomBlock(params->segments * 0x18, 1197);

    params->unk70 = (params->unk70 <= 1) ? 1 : params->unk70;
    block->geom = effGeomCreateRepeatedIndexList(params->segments & 0xffff, 2, 4, &DAT_004737c2, 76);
    if (texture == NULL) {
        PolyGeom *geom = block->geom;
        geom->unk04 = sysGetTableWord(18);
        refCountIncrement(reinterpret_cast<int *>(geom->unk04));
    } else {
        textureSlotReplace(block->geom, texture);
    }
    u32 segments = params->segments;
    if (segments != 0) {
        PolyQuadUV *uv = block->geom->buf->uv;
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
