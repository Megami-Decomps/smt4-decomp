/* NON_MATCHING: params/block registers and the sides clamp match retail (allocWindBlock helper, atLeastU32); remaining: retail keeps the new block in r0 until after the sides clamp, loads the 12-byte header constant first and moves the geometry result through r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "util/ValueLimits.h"

extern "C" {

extern const char DAT_00410604[]; /* __FILE__ of effPolygonWind.cpp */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00219fc4(PolyGeom *src);
void FUN_003269d4(PolyWindBlock *block, PolyWindParams *params);

/* Allocates a wind block of `payloadBytes` (header included), recording the allocation site first. */
static PolyWindBlock *allocWindBlock(u32 payloadBytes)
{
    asdDebugTrace(DAT_00410604, 1041);
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone0(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block = allocWindBlock(params->segments * 0x2c + 0xc);
    params->sides = atLeastU32(params->sides, 3);
    block->geom = FUN_00219fc4(srcBlock->geom);
    FUN_003269d4(block, params);
    return block;
}

} /* extern "C" */
