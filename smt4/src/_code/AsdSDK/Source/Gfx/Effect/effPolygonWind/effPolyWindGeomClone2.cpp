/* NON_MATCHING: the allocation (allocWindBlock takes the segment count: one allocator per geometry kind, each tracing its own line, shared by its create and clone), params/block registers and the sides clamp match retail; remaining: retail moves the geometry result through r1 before storing it (and the pool offsets that follow). */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "util/ValueLimits.h"

extern "C" {

extern const char DAT_00410604[]; /* __FILE__ of effPolygonWind.cpp */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00219fc4(PolyGeom *src);
void FUN_00327f18(PolyWindBlock *block, PolyWindParams *params);

/* Allocates a wind block with room for `count` segments after its 12-byte header, recording the allocation site first. */
static PolyWindBlock *allocWindBlock(u32 count)
{
    u32 size = count * 0x30 + 0xc;
    asdDebugTrace(DAT_00410604, 558);
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone2(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block = allocWindBlock(params->segments);
    params->sides = atLeastU32(params->sides, 3);
    block->geom = FUN_00219fc4(srcBlock->geom);
    FUN_00327f18(block, params);
    return block;
}

} /* extern "C" */
