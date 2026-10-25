/* NON_MATCHING: the debug trace (string, line, nop) and size/clamp shapes now match retail; what remains is register allocation (retail keeps the effect object's fields in r4/r6 via a writeback load and the new block in r5; armcc swaps them) and the geometry result being reused in r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "effect/FadeStrip.h"

extern "C" {

extern const char DAT_00544cd8[];

void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 tracked);
PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003c80a0(StripOwnerView *block, StripParameters *params);

/* Clone the wind geometry block, clamp its strip to at least three segments, and initialize it. */
PolyWindBlock *effPolyWindGeomClone0(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    StripParameters *params = reinterpret_cast<StripParameters *>(obj->work);
    u32 size = params->repeatCount * 0x2c + 0xc;
    PolyWindBlock *block;
    u32 segmentCount;

    asdDebugTrace(DAT_00544cd8, 1051);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    segmentCount = params->segments;
    params->segments = segmentCount > 3 ? segmentCount : 3;
    PolyGeom *geom = FUN_002ff43c(srcBlock->geom);

    block->geom = geom;
    FUN_003c80a0(reinterpret_cast<StripOwnerView *>(block), params);
    return block;
}

} /* extern "C" */
