/* NON_MATCHING: canonical vector arguments are restored; saved vector copy order and gimmick record address registers differ. */
#include "shard/W6_W6Match6_CollisionQuad.h"

struct MapGimicRecordView {
    u8 unk00;                    // 0x00
    u8 unk01[3];                 // 0x01
    CollisionVector position; // 0x04
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

bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first, f32 firstRadius,
                              CollisionVector second, f32 secondRadius);

// Resolve the position sequentially against active type-13 gimmick circles.
void FUN_002947b8(CollisionVector *result, CollisionVector position)
{
    for (s32 index = 0; index < 35; ++index) {
        const MapGimicRecordView& record = g_mapGimic->records[index];
        if (record.unk00 != 0 && record.unk16 == 13) {
            CollisionVector resolved;
            if (mapResolveCircleOverlapXZ(&resolved, position, 50.0f, record.position, 50.0f)) {
                position = resolved;
            }
        }
    }

    *result = position;
}
}
