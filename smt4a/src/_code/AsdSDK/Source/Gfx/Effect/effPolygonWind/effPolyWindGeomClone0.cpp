/* NON_MATCHING: the debug trace (string, line, nop) and size/clamp shapes now match retail; what remains is register allocation (retail keeps the effect object's fields in r4/r6 via a writeback load and the new block in r5; armcc swaps them) and the geometry result being reused in r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544cd8[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003c80a0(PolyWindBlock *block, PolyWindParams *params);

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone0(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    u32 size = params->segments * 0x2c + 0xc;
    PolyWindBlock *block;
    u32 sides;

    asdDebugTrace(DAT_00544cd8, 1051);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    params->sides = sides > 3 ? sides : 3;
    PolyGeom *geom = FUN_002ff43c(srcBlock->geom);

    block->geom = geom;
    FUN_003c80a0(block, params);
    return block;
}

} /* extern "C" */
