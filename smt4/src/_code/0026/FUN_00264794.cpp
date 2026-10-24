/* NON_MATCHING: only the literal-pool order (retail: gameState, scene, mainState) and the first loads' order differ */
#include "map/lmapMain.h"

struct Vec3f {
    f32 x, y, z;
};

/* A saved map position: map and area ids, the object id, the position and the heading. */
struct MapSavedPositionA {
    s32 map;        // 0x00
    s32 area;       // 0x04
    u32 objectId;   // 0x08
    Vec3f position; // 0x0C
    f32 heading;    // 0x18
};

struct MapSavedPositionB {
    s32 map;        // 0x00
    s32 area;       // 0x04
    Vec3f position; // 0x08
    f32 heading;    // 0x14
};

struct MapGameState {
    u8 unk000[8];                // 0x000
    u32 currentObjectId;         // 0x008
    u8 unk00C[0x2EC];            // 0x00C
    u8 saved;                    // 0x2F8
    u8 unk2F9[3];                // 0x2F9
    MapSavedPositionA current;   // 0x2FC
    u8 unk318[4];                // 0x318
    MapSavedPositionB origin;    // 0x31C
};

extern "C" {

extern MapGameState g_gameState;
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;

/* Records the current map, area, object and position (twice: as the current and the origin position). */
void FUN_00264794(void)
{
    g_gameState.saved = 1;
    g_gameState.current.map = g_lmapMainState->unk40;
    g_gameState.current.area = g_lmapMainState->unk48;
    g_gameState.current.objectId = g_gameState.currentObjectId;
    g_gameState.current.position = *(Vec3f *)g_lmapScene->transform.position;
    g_gameState.current.heading = g_lmapScene->transform.headingDegrees;
    g_gameState.origin.map = g_lmapMainState->unk40;
    g_gameState.origin.area = g_lmapMainState->unk48;
    g_gameState.origin.position = *(Vec3f *)g_lmapScene->transform.position;
    g_gameState.origin.heading = g_lmapScene->transform.headingDegrees;
}

} /* extern "C" */
