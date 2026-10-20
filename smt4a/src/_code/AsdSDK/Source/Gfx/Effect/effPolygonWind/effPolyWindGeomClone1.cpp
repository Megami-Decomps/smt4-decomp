/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 38 vs built 32 rows, 43 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003c82d8(PolyWindBlock *block, PolyWindParams *params);

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone1(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, params->segments * 0x30 + 0xc, 0x10, 1);
    u32 sides;

    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    if (sides < 4) {
        sides = 3;
    }
    params->sides = sides;
    block->geom = FUN_002ff43c(srcBlock->geom);
    FUN_003c82d8(block, params);
    return block;
}

} /* extern "C" */
