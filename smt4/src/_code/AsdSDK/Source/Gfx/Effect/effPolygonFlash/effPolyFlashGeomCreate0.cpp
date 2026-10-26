/* NON_MATCHING: allocation head now matches retail (plain static allocGeomBlock keeps the element size in a register); params/size swap r4/r5 and the 72 tag lands in r1 instead of r2. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "classes/EffGeomRecord.h"

extern "C" {
extern const char DAT_00410408[]; /* effPolygonFlash.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
EffGeomHandle *FUN_00247334(s32 rows, s32 columns, s32 stride, const s16 *indices, u16 tag);
extern const s16 DAT_00473768[];

/* Allocates a geometry block (16-byte header plus `count` segments of `elemSize` bytes), recording the allocation site first. */
static PolyGeomBlock *allocGeomBlock(PolyParams *params, u32 elemSize)
{
    u32 payloadBytes = params->segments * elemSize;
    asdDebugTrace(DAT_00410408, 2535);
    PolyGeomBlock *block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, payloadBytes + 0x10, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    return block;
}

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    PolyGeomBlock *block = allocGeomBlock(params, 0x2c);

    block->geom = reinterpret_cast<PolyGeom *>(FUN_00247334(params->segments & 0xffff, 3, 5, DAT_00473768, 72));
    return block;
}

} /* extern "C" */
