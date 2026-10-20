/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 48 vs built 29 rows, 40 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002b3b58(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_005c1f28;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate2(PolyParams *params)
{
    u32 segments = params->segments;
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, segments * 0x18 + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    block->geom = FUN_002b3b58(segments & 0xffff, 3, 5, &DAT_005c1f28, 72);
    return block;
}

} /* extern "C" */
