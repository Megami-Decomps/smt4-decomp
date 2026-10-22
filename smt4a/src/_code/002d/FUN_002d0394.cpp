/* NON_MATCHING: compiler saves input floats as paired doubles and hoists fewer proximity constants than retail. */
#include "battle/btlView.h"
#include "map/mapDepart.h"

extern "C" {
extern BattleViewState g_battleViewState;
extern GameStateA g_gameState;
f32 distSpatial(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);
f32 FUN_00384830(f32 x, f32 y, f32 z, f32 heading, f32 targetX, f32 targetY, f32 targetZ);
void FUN_002d8614(s32 enabled, f32 x, f32 y, f32 z);

// Activate the camera navigation point while the player is close and facing it.
void FUN_002d0394(f32 x, f32 y, f32 z, f32 heading)
{
    if (g_battleViewState.unk28 == 0) {
        g_battleViewState.navigationSetting = 0;
        if (!g_gameState.inputBlocked) {
            const BattleViewVec3 &point = g_battleViewState.camera.position;
            if (distSpatial(x, y, z, point.x, point.y, point.z) < 90.0f &&
                FUN_00384830(x, y, z, heading, point.x, point.y, point.z) < 80.0f) {
                if (g_battleViewState.navigationSetting)
                    return;
                g_battleViewState.unk2c = 7;
                g_battleViewState.navigationSetting = 1;
                FUN_002d8614(1, point.x, point.y, point.z);
            }
            if (!g_battleViewState.navigationSetting)
                FUN_002d8614(0, point.x, point.y, point.z);
        }
    }
}
}
