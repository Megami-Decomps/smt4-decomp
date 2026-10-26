/* NON_MATCHING: allocation head, arm order, call masks and the sides clamp (atLeastU32) match retail; remaining: retail loads the size terms into r0/r1 the other way round (header constant 12 in r1), and moves the new block to r5 after the `mov r2, #76` argument setup. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "util/ValueLimits.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410604[]; /* effPolygonWind.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002469ec(u32 segments, u32 sides, u8 *table, int w, int tableSize);
void asdTextureHolderLoad(PolyGeom *geom, void *texture);
void refSlotAssign(PolyGeom *geom, u32 texture);
u32 FUN_0024c3c8(int id);
void FUN_00326c0c(PolyWindBlock *block, PolyWindParams *params);

extern u8 DAT_00473708;

/* Allocates a wind block of `payloadBytes` (header included), recording the allocation site first. */
static PolyWindBlock *allocWindBlock(u32 payloadBytes)
{
    asdDebugTrace(DAT_00410604, 90);
    PolyWindBlock *block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Builds the geometry block of a wind polygon effect with at least 3 sides, textured with the
 * given texture or a default one, and initializes its segments. */
PolyWindBlock *effPolyWindGeomCreate1(PolyWindParams *params, void *texture)
{
    PolyWindBlock *block = allocWindBlock(params->segments * 0x30 + 0xc);
    u32 sides;

    sides = atLeastU32(params->sides, 3);
    params->sides = sides;
    block->geom = FUN_002469ec(params->segments & 0xffff, sides & 0xffff, &DAT_00473708, 4, 0x4c);
    if (texture == NULL) {
        refSlotAssign(block->geom, FUN_0024c3c8(20));
    } else {
        asdTextureHolderLoad(block->geom, texture);
    }
    FUN_00326c0c(block, params);
    return block;
}

} /* extern "C" */
