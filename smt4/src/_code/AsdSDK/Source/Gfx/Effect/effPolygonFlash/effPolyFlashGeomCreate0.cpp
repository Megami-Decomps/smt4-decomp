#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "classes/EffGeomRecord.h"

extern "C" {
extern const char DAT_00410408[]; /* effPolygonFlash.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
EffGeomHandle *FUN_00247334(s32 rows, s32 columns, s32 stride, const s16 *indices, u16 tag);
extern const s16 DAT_00473768[];

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    u32 size = params->segments * 0x2c;
    PolyGeomBlock *block;

    asdDebugTrace(DAT_00410408, 2535);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = reinterpret_cast<PolyGeom *>(FUN_00247334(params->segments & 0xffff, 3, 5, DAT_00473768, 72));
    return block;
}

} /* extern "C" */
