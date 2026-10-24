/* NON_MATCHING: logic, record class (EffGeomRecord with operator new(bytes, arg)) and calls match; armcc allocates the parameters/products to different callee-saved registers (stride r5 vs r4, tag loaded late) and schedules the index loop's setup differently. */
#include "classes/EffGeomRecord.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00414954[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effGeometry.cpp": __FILE__ */

void *memAlloc(int, int, int, s32 size, int align, int);
void recordPrepareActive(EffGeomRecord *record, u32 first, u32 second, u32 third);

/* Builds a rows x columns grid of vertex indices: each row repeats `indices` offset by `stride` per row. */
EffGeomHandle *FUN_00247334(s32 rows, s32 columns, s32 stride, const s16 *indices, u16 tag)
{
    s32 vertexCount = rows * stride;
    s32 cellCount = rows * columns;
    s32 rowIndices = columns * 3;

    asdDebugTrace(DAT_00414954, 112);
    EffGeomHandle *handle = (EffGeomHandle *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
    EffGeomRecord *record = new (stride) EffGeomRecord;

    recordPrepareActive(record, 0x25, cellCount * 3, vertexCount);
    handle->tag = tag;
    handle->record = record;
    handle->vertexCount = vertexCount;
    handle->unk54 = 0xA5;
    s16 *vertices = record->vertices;
    for (s32 row = 0; row < rows; row++) {
        s32 triangles = (rowIndices + 2) / 3;
        s32 count = triangles * 3;
        if (count > 0) {
            s16 *dest = vertices + triangles * row * 3;
            for (s32 i = 0; i < count; i++) {
                dest[i] = indices[i] + stride * row;
            }
        }
    }
    return handle;
}

} /* extern "C" */
