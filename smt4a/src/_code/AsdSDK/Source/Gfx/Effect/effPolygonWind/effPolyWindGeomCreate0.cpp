/* NON_MATCHING: the allocation (allocWindBlock takes the segment count: one allocator per geometry kind, each tracing its own line, shared by its create and clone), arm order and call masks match retail; remaining: retail moves the new block to r5 after the sides load and clamps the sides in r1 with the 0x4c stack argument set up first. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "util/ValueLimits.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544cd8[]; /* effPolygonWind.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00390164(u32 segments, u32 sides, u8 *table, int w, int tableSize);
void asdTextureHolderLoad(PolyGeom *geom, void *texture);
void refSlotAssign(PolyGeom *geom, u32 texture);
u32 sysGetTableWord(int id);
void FUN_003c80a0(PolyWindBlock *block, PolyWindParams *params);

extern u8 g_effPolyGeomIndexTable;

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

/* Builds the geometry block of a wind polygon effect with at least 3 sides, textured with the
 * given texture or a default one, and initializes its segments. */
PolyWindBlock *effPolyWindGeomCreate0(PolyWindParams *params, void *texture)
{
    PolyWindBlock *block = allocWindBlock(params->segments);
    u32 sides;

    sides = atLeastU32(params->sides, 3);
    params->sides = sides;
    block->geom = FUN_00390164(params->segments & 0xffff, sides & 0xffff, &g_effPolyGeomIndexTable, 4, 0x4c);
    if (texture == NULL) {
        refSlotAssign(block->geom, sysGetTableWord(20));
    } else {
        asdTextureHolderLoad(block->geom, texture);
    }
    FUN_003c80a0(block, params);
    return block;
}

} /* extern "C" */
