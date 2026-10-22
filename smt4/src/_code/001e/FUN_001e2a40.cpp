/* NON_MATCHING: the input vector uses a paired VFP move and the entry address uses different core registers. */
#include "shard/W6_W6Match6_CollisionQuad.h"

struct MapCircleGimic {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ CollisionVector position;
    /* 0x10 */ u8 unk10[6];
    /* 0x16 */ s16 id;
    /* 0x18 */ u8 unk18[0x10];
};
struct MapCircleGimicState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ MapCircleGimic entries[24];
};

extern "C" {
extern MapCircleGimicState *g_mapGimic;
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

void FUN_001e2a40(CollisionVector *result, CollisionVector point)
{
    for (s32 index = 0; index < 24; ++index) {
        MapCircleGimic *entry = &g_mapGimic->entries[index];
        if (entry->active && entry->id == 13) {
            CollisionVector resolved;
            if (mapResolveCircleOverlapXZ(&resolved, point, 50.0f,
                                          entry->position, 50.0f)) {
                point = resolved;
            }
        }
    }
    *result = point;
}
}
