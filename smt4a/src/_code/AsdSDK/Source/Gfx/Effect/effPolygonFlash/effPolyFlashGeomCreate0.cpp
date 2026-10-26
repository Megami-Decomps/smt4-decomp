/* NON_MATCHING: allocation head matches retail (plain static allocGeomBlock keeps the element size in a register); params/size swap r4/r5, the two stack constants load in the other order and the 72 tag lands in r1 instead of r2. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002b3b58(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_005c1f28;

/* Allocates a geometry block (16-byte header plus one `elemSize`-byte element per parameter segment), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(PolyParams *params, u32 elemSize)
{
    u32 payloadBytes = params->segments * elemSize;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 2540);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    PolyGeomBlock *block = allocGeomBlock(params, 0x2c);

    block->geom = FUN_002b3b58(params->segments & 0xffff, 3, 5, &DAT_005c1f28, 72);
    return block;
}

} /* extern "C" */
