/* NON_MATCHING: -O2 candidate; active/state guards merge, entry addressing uses pre-indexed LDRB, and global/distance-argument register roles differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

struct MapBreakableEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ MapVector position;
    /* 0x18 */ f32 heading;
    /* 0x1c */ u8 unk1c[0x34];
    /* 0x50 */ s16 kind;
    /* 0x52 */ u8 unk52[2];
};
struct MapBreakableWork {
    /* 0x00 */ u8 unk00[0x5c];
    /* 0x5c */ MapBreakableEntry entries[16];
};
struct BreakablePlayerPosition {
    /* 0x000 */ u8 unk000[0x3dc];
    /* 0x3dc */ MapVector position;
};

extern "C" {
extern MapBreakableWork* g_mapHakai;
f32 FUN_002b5cd4(f32 current, f32 target);
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
f32 FUN_00384830(MapVector from, f32 heading, MapVector to);
}

namespace {
inline f32 distanceBetween(const MapVector& first, const MapVector& second)
{
    return distSpatial(first.x, first.y, first.z, second.x, second.y, second.z);
}
}

extern "C" u32 mapHasFacingBreakableInReach(void)
{
    for (s32 index = 0; index < 16; ++index) {
        const MapBreakableEntry& entry = g_mapHakai->entries[index];
        if (entry.active == 0) {
            continue;
        }
        if (entry.state == 2 || entry.state == 3 || entry.state == 0) {
            continue;
        }
        const f32 difference = FUN_002b5cd4(
            entry.heading, mathPositionHeadingDegrees(entry.position, g_lmapScene->position));
        if (entry.kind != 1 && entry.kind != 6) {
            continue;
        }
        u8 frontFacing;
        if (difference > -90.0f && difference < 90.0f) {
            frontFacing = 1;
        } else {
            frontFacing = 0;
        }
        f32 distance = distanceBetween(g_lmapScene->position, entry.position);
        const MapVector& cachedPosition =
            reinterpret_cast<const BreakablePlayerPosition*>(&g_gameState)->position;
        const f32 cachedDistance = distanceBetween(cachedPosition, entry.position);
        if (distance > cachedDistance) {
            distance = cachedDistance;
        }
        if (distance < 300.0f &&
            FUN_00384830(g_lmapScene->position, g_lmapScene->heading, entry.position) < 70.0f) {
            if (frontFacing != 0) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
