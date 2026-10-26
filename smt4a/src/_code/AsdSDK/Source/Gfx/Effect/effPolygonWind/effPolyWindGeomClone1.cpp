/* NON_MATCHING: twin of smt4 effPolyWindGeomClone1/2 (allocWindBlock helper, atLeastU32 clamp); remaining: retail keeps the new block in r0 until after the sides clamp, loads the 12-byte header constant first and moves the geometry result through r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "util/ValueLimits.h"

extern "C" {

extern const char DAT_00544cd8[]; /* __FILE__ of effPolygonWind.cpp */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003c82d8(PolyWindBlock *block, PolyWindParams *params);

/* Allocates a wind block of `payloadBytes` (header included), recording the allocation site first. */
static PolyWindBlock *allocWindBlock(u32 payloadBytes)
{
    asdDebugTrace(DAT_00544cd8, 90);
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone1(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block = allocWindBlock(params->segments * 0x30 + 0xc);
    params->sides = atLeastU32(params->sides, 3);
    block->geom = FUN_002ff43c(srcBlock->geom);
    FUN_003c82d8(block, params);
    return block;
}

} /* extern "C" */
