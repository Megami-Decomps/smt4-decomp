#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

PolyGeom *FUN_002b3b58(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 DAT_005c1f3a;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate3(PolyParams *params)
{
    u32 segments = params->segments;
    s32 dataSize = segments * 0x2c;
    PolyGeomBlock *block;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 858);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, dataSize + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = FUN_002b3b58((u16)segments, 12, 13, &DAT_005c1f3a, 72);
    return block;
}

} /* extern "C" */
