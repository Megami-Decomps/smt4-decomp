/* NON_MATCHING: side clamp matches; work/size and new-block registers differ, and geometry result is stored without retail's r1 copy. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544cd8[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002ff43c(PolyGeom *src);
void FUN_003cb24c(PolyWindBlock *block, PolyWindParams *params);

/* Clones the geometry block of a wind polygon object, with at least 3 sides, and initializes its segments. */
PolyWindBlock *effPolyWindGeomClone2(PolyObject *obj)
{
    PolyWindBlock *srcBlock = (PolyWindBlock *)obj->state;
    PolyWindParams *params = (PolyWindParams *)obj->work;
    PolyWindBlock *block;
    u32 size = params->segments * 0x30 + 0xc;
    u32 sides;

    asdDebugTrace(DAT_00544cd8, 559);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    params->sides = sides > 3 ? sides : 3;
    block->geom = FUN_002ff43c(srcBlock->geom);
    FUN_003cb24c(block, params);
    return block;
}

} /* extern "C" */
