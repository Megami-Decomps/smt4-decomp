#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"
#include "util/MathFunctions.h"
#include "shard/W6_W6Match1_PositionedStream.h"

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
extern "C" {
extern MapBreakableWork* g_mapHakai;
}


/* Whether a breakable object stands within reach in front of the player. */
extern "C" u32 mapHasFacingBreakableInReach(void)
{
    for (s32 index = 0; index < 16; ++index) {
        if (g_mapHakai->entries[index].active == 0) {
            continue;
        }
        const MapBreakableEntry &entry = g_mapHakai->entries[index];
        if (entry.state == 2 || entry.state == 3 || entry.state == 0) {
            continue;
        }
        const f32 difference = mathAngleDeltaDegrees(
            entry.heading, mathPositionHeadingDegrees(entry.position, g_lmapScene->pose.position));
        if (entry.kind != 1 && entry.kind != 6) {
            continue;
        }
        u8 frontFacing;
        if (difference > -90.0f && difference < 90.0f) {
            frontFacing = 1;
        } else {
            frontFacing = 0;
        }
        f32 distance = distSpatial(g_lmapScene->pose.position, entry.position);
        const f32 cachedDistance = distSpatial(g_gameState.breakableCheckPosition, entry.position);
        if (distance > cachedDistance) {
            distance = cachedDistance;
        }
        if (distance < 300.0f &&
            mathAbsHeadingErrorToPoint(g_lmapScene->pose.position, g_lmapScene->pose.heading, entry.position) < 70.0f) {
            if (frontFacing != 0) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
