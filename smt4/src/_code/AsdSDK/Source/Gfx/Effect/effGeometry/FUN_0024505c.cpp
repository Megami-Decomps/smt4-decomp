/* NON_MATCHING: same calls, allocations and loops; armcc keeps rows*triangles*3 and triangles*3 in different registers (retail spills triangles*3 and recomputes rows*triangles*3 at the call), computes columns*2-2 as mvn+add rather than lsl+sub, and hoists the (x+2)/3 division above the rows guard. */
#include "classes/EffGeomRecord.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00414954[];
void *memAlloc(u32 size, u32 alignment, u32 region, u32 heap, u32 pageSize, u32 flags);
void recordPrepareActive(EffGeomRecord *record, u32 buffer, s32 indexCount, s32 vertexCount);

// Build a grid mesh of `rows` bands of `columns` vertices: the one-band index template is repeated
// for every band, each time offset by that band's first vertex.
EffGeomHandle *FUN_0024505c(s32 rows, const u16 *indices, s32 columns, u16 tag)
{
    s32 triangles = columns * 2 - 2;
    s32 vertexCount = (rows + 1) * columns;
    s32 rowIndices = triangles * 3;
    s32 indexCount = rows * triangles * 3;

    asdDebugTrace(DAT_00414954, 112);
    EffGeomHandle *handle = (EffGeomHandle *)memAlloc(0x10000, 0x100, 0, sizeof(EffGeomHandle), 0x10, 1);
    EffGeomRecord *record = new (columns) EffGeomRecord();
    recordPrepareActive(record, 0x25, indexCount, vertexCount);
    handle->tag = tag;
    handle->record = record;
    handle->vertexCount = vertexCount;
    handle->unk54 = 0xa5;

    u16 *vertices = (u16 *)record->vertices;
    for (s32 row = 0; row < rows; row++) {
        s32 bandTriangles = (rowIndices + 2) / 3;
        for (s32 i = 0; i < bandTriangles * 3; i++) {
            vertices[bandTriangles * row * 3 + i] = (u16)(indices[i] + (u16)columns * (u16)row);
        }
    }
    return handle;
}
}
