/* NON_MATCHING: with -Ospace (trial cflags override) the code, loop shape and constants match retail; only register numbering differs (retail keeps rows/columns in r6/r7 and the products in sl/r9, armcc here r9/sl and r6/r8; the loop counter lives in r1 before the points store). */
#include "classes/EffGeomRecord.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00414954[];
void *memAlloc(u32 size, u32 alignment, u32 region, u32 heap, u32 pageSize, u32 flags);
void recordPrepareActive(EffGeomRecord *record, u32 buffer, s32 indexCount, s32 vertexCount);
void matrix44SetIdentity(f32 *matrix);

// Build a geometry of `count` points, each with a four-float vertex set to one, over a
// rows x columns element layout.
EffGeomPointHandle *FUN_00207498(s32 count, u16 rows, u16 columns, u16 flags)
{
    asdDebugTrace(DAT_00414954, 506);
    EffGeomPointHandle *handle = (EffGeomPointHandle *)memAlloc(0x10000, 0x100, 0, 0x5c, 0x10, 1);
    EffGeomRecord *record = new (count) EffGeomRecord();
    s32 elementCount = columns * count;
    s32 vertexCount = rows * count;
    recordPrepareActive(record, 0x25, elementCount * 3, vertexCount);
    handle->record = record;
    asdDebugTrace(DAT_00414954, 513);
    handle->points = (f32 *)memAlloc(0x10000, 0x100, 0, count << 4, 0x10, 1);
    if (count > 0) {
        u16 i = 0;
        do {
            f32 *point = &handle->points[i * 4];
            point[0] = 1.0f;
            point[1] = 1.0f;
            point[2] = 1.0f;
            point[3] = 1.0f;
            i++;
        } while (count > i);
    }
    matrix44SetIdentity(handle->transform);
    handle->flags = flags | 0x100;
    handle->pointCount = count;
    handle->vertexCount = vertexCount;
    handle->elementCount = elementCount;
    handle->unk58 = 0xa5;
    handle->rows = rows;
    handle->columns = columns;
    return handle;
}
}
