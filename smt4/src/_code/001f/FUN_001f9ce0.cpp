/* NON_MATCHING: readable rewrite of the enemy-marker draw (field-of-view arrows on the map); the build keeps the float constants and the marker pointer in different registers and orders the colour/frame selects differently from retail. */
#include "common.h"
#include "map/MapEnemyGlobal.h"
#include "game/GameState.h"

// An f32 viewed as its bits, for the threshold compares the original made on the raw representation.
union FloatBits {
    f32 value;
    s32 bits;
};

extern "C" {
void mapInterfaceForwardResource(void);
void FUN_002aa18c(u32 c0, u32 c1, u32 c2, u32 c3, f32 x, f32 y, f32 w, f32 h, f32 u0, f32 v0, f32 u1, f32 v1, f32 angle);

// Draws a direction arrow at the screen edge for every tracked, hidden-from-view enemy marker while the map enemy
// system is in mode 8. The arrow position follows the marker's bearing, its colours its distance.
void FUN_001f9ce0(void)
{
    MapEnemy *enemies = g_mapEnemy;
    if (enemies == NULL || enemies->state != 8 || g_gameState.unk019[7] != 0) {
        return;
    }
    for (s32 i = 0; i < MAP_ENEMY_COUNT; i++) {
        MapEnemyEntry *marker = &enemies->entries[i];
        if (marker->active == 0) {
            continue;
        }
        marker->arrowVisible = 0;
        if (marker->tracking == 0 || marker->onRadar == 0) {
            continue;
        }
        mapInterfaceForwardResource();
        if (marker->inView != 0) {
            continue;
        }
        FloatBits bearing;
        bearing.value = marker->bearing;
        f32 x = 0.0f;
        f32 y;
        if (bearing.value > 0.0f) {
            y = 198.0f;
            if (bearing.bits > 0x42b40000) {
                x = (bearing.value - 90.0f) * 1.9888889f;
            } else {
                y = bearing.value * 2.2f;
            }
        } else {
            bearing.value = -bearing.value;
            y = 358.0f;
            x = 0.0f;
            if (bearing.bits > 0x42b40000) {
                x = 358.0f - (bearing.value - 90.0f) * 1.9888889f;
                y = 198.0f;
            } else {
                y = bearing.value * 2.2f;
            }
        }
        FloatBits distance;
        distance.value = marker->playerDistance;
        u32 first = 0xef6c3eff;
        u32 second = 0xfe0b22ff;
        if (distance.bits >= 0x43c80000) {
            if (distance.bits < 0x44480000) {
                first = 0xfbc30dff;
                second = 0xff6c2bff;
            } else if (distance.bits < 0x44960000) {
                first = 0xfff2c0ff;
                second = 0xffd52dff;
            } else {
                first = 0xffffffff;
                second = 0x2db5ffff;
            }
        }
        f32 left = (marker->blinkTimer % 20 >= 10) ? 0.328125f : 0.0f;
        f32 right = (marker->blinkTimer % 20 >= 10) ? left : 0.328125f;
        marker->arrowVisible = 1;
        marker->arrowX = x + 12.0f;
        marker->arrowY = y + 12.0f;
        FUN_002aa18c(first, second, first, second, x, y, 42.0f, 42.0f, left, 0.0f, right, 0.65625f, 0.0f);
        FUN_002aa18c(0xff, 0xff, 0xff, 0xff, x, y, 42.0f, 42.0f, left, 0.0f, 0.328125f, 0.65625f, 0.0f);
    }
}
}
