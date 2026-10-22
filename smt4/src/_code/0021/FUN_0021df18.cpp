/* NON_MATCHING: Work-table indexing, scene-position argument loads, and the final request stores use different scratch registers. */
#include "map/lmapMain.h"
#include "map/mapDepart.h"

namespace {
struct NearestGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 requested;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ MapVector position;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u16 state;
    /* 0x16 */ u16 kind;
    /* 0x18 */ u8 unk18[0x10];
};
struct NearestGimicWork {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ NearestGimicEntry entries[24];
};
}
extern "C" {
extern NearestGimicWork *g_mapGimic;
extern LmapScene *g_lmapScene;
f32 mathDistanceBetweenPoints(f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1);

/* Requests the nearest active gimmick of the selected interaction kind. */
void FUN_0021df18(void)
{
    s32 bestIndex = -1;
    s32 bestDistance = 99999;
    for (s32 i = 0; i < 24; ++i) {
        NearestGimicEntry *entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->kind == 0xF) {
            s32 distance = static_cast<s32>(mathDistanceBetweenPoints(
                g_lmapScene->transform.position[0], g_lmapScene->transform.position[1], g_lmapScene->transform.position[2],
                entry->position.x, entry->position.y, entry->position.z));
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
    }
    if (bestIndex != -1) {
        g_mapGimic->entries[bestIndex].state = 1;
        g_mapGimic->entries[bestIndex].requested = 1;
    }
}
}
