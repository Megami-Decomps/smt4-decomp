/* NON_MATCHING: the allocation (allocWindBlock takes the segment count: one allocator per geometry kind, each tracing its own line, shared by its create and clone) and the sides clamp match retail; remaining: retail keeps the new block in r0 until after the sides load (clamping in r1) and moves the geometry result through r1 before storing it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "util/ValueLimits.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char DAT_00544cd8[]; /* __FILE__ of effPolygonWind.cpp */

PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003c80a0(PolyWindBlock *block, PolyWindParams *params);

/* Allocates a wind block with room for `count` segments after its 12-byte header, recording the allocation site first. */
static PolyWindBlock *allocWindBlock(u32 count)
{
    u32 size = count * 0x2c + 0xc;
    asdDebugTrace(DAT_00544cd8, 1051);
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone0(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block = allocWindBlock(params->segments);
    params->sides = atLeastU32(params->sides, 3);
    block->geom = FUN_002ff43c(srcBlock->geom);
    FUN_003c80a0(block, params);
    return block;
}

} /* extern "C" */
