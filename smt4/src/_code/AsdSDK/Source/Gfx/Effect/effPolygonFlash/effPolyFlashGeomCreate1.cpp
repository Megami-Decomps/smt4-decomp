/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 33 vs built 29 rows, 27 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_0047377a;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate1(PolyParams *params)
{
    u32 segments = params->segments;
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, segments * 0x1c + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    block->geom = FUN_00247334(segments & 0xffff, 12, 13, &DAT_0047377a, 72);
    return block;
}

} /* extern "C" */
