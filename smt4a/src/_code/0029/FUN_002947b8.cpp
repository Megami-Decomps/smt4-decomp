/* NON_MATCHING: Retail ldr r6, [pc, #132] differs from recovered ldr r6, [pc, #128]. */
#include "common.h"

struct CirclePositionView {
    f32 x;
    f32 y;
    f32 z;
};

struct MapGimicRecordView {
    u8 unk00;                    // 0x00
    u8 unk01[3];                 // 0x01
    CirclePositionView position; // 0x04
    u8 unk10[6];                 // 0x10
    u16 unk16;                   // 0x16
    u8 unk18[0x24];              // 0x18
};

struct MapGimicView {
    u8 unk00[0x90];                  // 0x00
    MapGimicRecordView records[35];  // 0x90
};

extern "C" {
extern MapGimicView* g_mapGimic;

s32 mapResolveCircleOverlapXZ(CirclePositionView* result,
                             f32 x, f32 y, f32 z, f32 radius,
                             f32 otherX, f32 otherY, f32 otherZ,
                             f32 otherRadius);

// Resolve the position sequentially against active type-13 gimmick circles.
void FUN_002947b8(CirclePositionView* result, f32 x, f32 y, f32 z)
{
    for (s32 index = 0; index < 35; ++index) {
        const MapGimicRecordView& record = g_mapGimic->records[index];
        if (record.unk00 != 0 && record.unk16 == 13) {
            CirclePositionView resolved;
            if (mapResolveCircleOverlapXZ(&resolved,
                                          x, y, z, 50.0f,
                                          record.position.x, record.position.y,
                                          record.position.z, 50.0f) != 0) {
                x = resolved.x;
                y = resolved.y;
                z = resolved.z;
            }
        }
    }

    result->x = x;
    result->y = y;
    result->z = z;
}
}
