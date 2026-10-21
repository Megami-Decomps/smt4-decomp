/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 57 vs built 52 rows, 76 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00390164(u32 segments, u32 sides, u8 *table, int w, int tableSize);
void asdTextureHolderLoad(PolyGeom *geom, void *texture);
void refSlotAssign(PolyGeom *geom, u32 texture);
u32 sysGetTableWord(int id);
void FUN_003c80a0(PolyWindBlock *block, PolyWindParams *params);

extern u8 DAT_005c1ec8;

/* Builds the geometry block of a wind polygon effect with at least 3 sides, textured with the
 * given texture or a default one, and initializes its segments. */
PolyWindBlock *effPolyWindGeomCreate0(PolyWindParams *params, void *texture)
{
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, params->segments * 0x2c + 0xc, 0x10, 1);
    u32 sides;
    PolyGeom *geom;

    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    if (sides < 4) {
        sides = 3;
    }
    params->sides = sides;
    geom = FUN_00390164(params->segments, sides & 0xffff, &DAT_005c1ec8, 4, 0x4c);
    block->geom = geom;
    if (texture != NULL) {
        asdTextureHolderLoad(geom, texture);
    } else {
        refSlotAssign(geom, sysGetTableWord(20));
    }
    FUN_003c80a0(block, params);
    return block;
}

} /* extern "C" */
