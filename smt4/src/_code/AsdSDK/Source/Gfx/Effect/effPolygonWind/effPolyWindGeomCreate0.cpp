/* NON_MATCHING: same calls, trace and stores; retail keeps params in r4 and shares r5 between the size and the block (register allocation only) */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410604[]; /* effPolygonWind.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002469ec(u32 segments, u32 sides, u8 *table, int w, int tableSize);
void asdTextureHolderLoad(PolyGeom *geom, void *texture);
void refSlotAssign(PolyGeom *geom, u32 texture);
u32 FUN_0024c3c8(int id);
void FUN_003269d4(PolyWindBlock *block, PolyWindParams *params);

extern u8 DAT_00473708;

/* Builds the geometry block of a wind polygon effect with at least 3 sides, textured with the
 * given texture or a default one, and initializes its segments. */
PolyWindBlock *effPolyWindGeomCreate0(PolyWindParams *params, void *texture)
{
    u32 size = params->segments * 0x2c + 0xc;
    PolyWindBlock *block;
    u32 sides;

    asdDebugTrace(DAT_00410604, 1041);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    sides = sides > 3 ? sides : 3;
    params->sides = sides;
    block->geom = FUN_002469ec(params->segments, sides & 0xffff, &DAT_00473708, 4, 0x4c);
    if (texture != NULL) {
        asdTextureHolderLoad(block->geom, texture);
    } else {
        refSlotAssign(block->geom, FUN_0024c3c8(20));
    }
    FUN_003269d4(block, params);
    return block;
}

} /* extern "C" */
