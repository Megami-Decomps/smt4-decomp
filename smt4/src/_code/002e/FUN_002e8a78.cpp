/* NON_MATCHING: loop/record and saved X/Z registers are swapped; effect vector load/multiply scheduling differs. */
#include "map/mapIf.h"
#include "map/mapDepart.h"

extern "C" {
extern MapIfState *g_mapIf;
extern GameState g_gameState;
f32 mathDistanceBetweenPoints(f32, f32, f32, f32, f32, f32);
void FUN_00291e40(u32, f32, f32, f32);

// Trigger the first nearby waiting map marker and place its appearance effect above the player.
void FUN_002e8a78(f32 x, f32 y, f32 z)
{
    MapIfState *work = g_mapIf;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &work->records[i];
        if (record->active &&
            (record->display.category == 29 || record->display.category == 38 ||
             record->display.category == 30 || record->display.category == 31 ||
             record->display.category == 37) && record->state == 6) {
            if (mathDistanceBetweenPoints(x, y, z, record->position.x, record->position.y, record->position.z) < 10.0f) {
                f32 effectX = record->position.x;
                f32 effectY = y + 120.0f;
                f32 effectZ = record->position.z;
                if (!g_gameState.unk18) {
                    if (record->display.category == 38 || record->display.category == 37)
                        FUN_00291e40(0x10001FF, effectX * (1.0f / 3.0f), effectY * (1.0f / 3.0f), effectZ * (1.0f / 3.0f));
                    else
                        FUN_00291e40(0x10001FF, effectX, effectY, effectZ);
                }
                record->state = 7;
                record->proximity.timer = 0;
                return;
            }
        }
    }
}
}
