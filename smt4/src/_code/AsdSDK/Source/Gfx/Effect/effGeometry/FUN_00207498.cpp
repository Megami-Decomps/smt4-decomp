/* NON_MATCHING: armcc predicates the zero initializer for the guarded color loop. */
#include "classes/EffGeomRecord.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern const char g_effGeometrySourceFileName[];
void recordPrepareActive(EffGeomRecord *record, u32 buffer, s32 indexCount, s32 vertexCount);
void matrix44SetIdentity(f32 *matrix);

// Build a geometry of `count` points, each colored opaque white, over a rows x columns layout.
EffGeomPointHandle *FUN_00207498(s32 count, s16 rows, s16 columns, u32 flags)
{
    asdDebugTrace(g_effGeometrySourceFileName, 506);
    EffGeomPointHandle *handle = static_cast<EffGeomPointHandle *>(memAlloc(0x10000, 0x100, 0, sizeof(EffGeomPointHandle), 0x10, 1));
    EffGeomRecord *record = new (count) EffGeomRecord();
    recordPrepareActive(record, 0x25, columns * count * 3, rows * count);
    handle->record = record;
    asdDebugTrace(g_effGeometrySourceFileName, 513);
    handle->points = static_cast<EffectColor *>(memAlloc(0x10000, 0x100, 0, count * sizeof(EffectColor), 0x10, 1));
    if (count > 0) {
        u16 i = 0;
        do {
            effectColorSet(&handle->points[i], 1.0f, 1.0f, 1.0f, 1.0f);
        } while (++i < count);
    }
    matrix44SetIdentity(handle->transform);
    handle->flags = flags | 0x100;
    handle->pointCount = count;
    handle->vertexCount = rows * count;
    handle->elementCount = columns * count;
    handle->unk58 = 0xa5;
    handle->rows = rows;
    handle->columns = columns;
    return handle;
}
}
