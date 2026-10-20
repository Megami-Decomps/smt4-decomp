/* NON_MATCHING: after the allocation retail stores data/self through r0 before copying the block pointer to r4, and keeps the geometry result in r1; built copies to r4 first. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00410408[]; /* effPolygonFlash.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_00473768;

/* Allocates a geometry block with room for `count` segments of `elemSize` bytes. */
static __inline PolyGeomBlock *geomBlockAlloc(u32 count, u32 elemSize)
{
    u32 size = count * elemSize;
    PolyGeomBlock *block;

    asdDebugTrace(DAT_00410408, 2535);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    PolyGeomBlock *block = geomBlockAlloc(params->segments, 0x2c);

    block->geom = FUN_00247334(params->segments & 0xffff, 3, 5, &DAT_00473768, 72);
    return block;
}

} /* extern "C" */
