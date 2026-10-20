/* NON_MATCHING: register allocation only: retail keeps params in r4 and the size/block in r5, the built code swaps them */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410604[]; /* __FILE__ of effPolygonWind.cpp */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00219fc4(PolyGeom *src);
void FUN_00327f18(PolyWindBlock *block, PolyWindParams *params);

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone2(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    s32 size;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block;
    u32 sides;

    size = params->segments * 0x30 + 0xc;
    asdDebugTrace(DAT_00410604, 558);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    if (sides < 4) {
        sides = 3;
    }
    params->sides = sides;
    block->geom = FUN_00219fc4(srcBlock->geom);
    FUN_00327f18(block, params);
    return block;
}

} /* extern "C" */
