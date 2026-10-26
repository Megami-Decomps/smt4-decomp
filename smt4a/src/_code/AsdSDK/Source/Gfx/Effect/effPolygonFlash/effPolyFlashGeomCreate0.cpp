/* NON_MATCHING: debug trace (asdDebugTrace file/line) and block sizing now match retail; only the order of the two stack arguments of memAlloc (retail loads 1 before 16) and the post-call temporaries differ. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002b3b58(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_005c1f28;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    u32 segmentBytes = params->segments * 0x2c;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 2540);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, segmentBytes + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    block->geom = FUN_002b3b58(params->segments & 0xffff, 3, 5, &DAT_005c1f28, 72);
    return block;
}

} /* extern "C" */
