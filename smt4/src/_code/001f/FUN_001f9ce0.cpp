/* NON_MATCHING: loop-invariant hoisting differs: retail keeps the 400/800 distance bounds (800 derived as 400 + 0x800000), the % 20 magic, both default colours and the 0.328125/0.65625 frame constants in registers and materialises the arrowVisible zero each pass; armcc here hoists the zero instead and reloads the 800 bound. */
#include "common.h"
#include "map/MapEnemyGlobal.h"
#include "game/GameState.h"

extern "C" {
void mapInterfaceForwardResource(void);
void FUN_002aa18c(u32 c0, u32 c1, u32 c2, u32 c3, f32 x, f32 y, f32 w, f32 h, f32 u0, f32 v0, f32 u1, f32 v1, f32 angle);

/* Draws a direction arrow at the screen edge for every tracked, hidden-from-view enemy marker while the map enemy
 * system is in mode 8. The arrow position follows the marker's bearing, its colours its distance. */
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
        if (marker->tracking == 0 || marker->registered == 0 || marker->onRadar == 0) {
            continue;
        }
        mapInterfaceForwardResource();
        if (marker->inView != 0) {
            continue;
        }
        f32 bearing = marker->bearing;
        f32 x;
        f32 y;
        if (bearing > 0.0f) {
            if (bearing > 90.0f) {
                x = (bearing - 90.0f) * 1.9888889f;
                y = 198.0f;
            } else {
                x = 0.0f;
                y = bearing * 2.2f;
            }
        } else {
            bearing = -bearing;
            if (bearing > 90.0f) {
                x = 358.0f - (bearing - 90.0f) * 1.9888889f;
                y = 198.0f;
            } else {
                x = 358.0f;
                y = bearing * 2.2f;
            }
        }
        f32 frameU;
        f32 frameWidth;
        if (marker->blinkTimer % 20 >= 10) {
            frameU = 0.328125f;
            frameWidth = 0.328125f;
        } else {
            frameU = 0.0f;
            frameWidth = 0.328125f;
        }
        u32 first;
        u32 second;
        if (marker->playerDistance < 400.0f) {
            first = 0xef6c3eff;
            second = 0xfe0b22ff;
        } else if (marker->playerDistance < 800.0f) {
            first = 0xfbc30dff;
            second = 0xff6c2bff;
        } else if (marker->playerDistance < 1200.0f) {
            first = 0xfff2c0ff;
            second = 0xffd52dff;
        } else {
            first = 0xffffffff;
            second = 0x2db5ffff;
        }
        marker->arrowVisible = 1;
        marker->arrowX = x + 12.0f;
        marker->arrowY = y + 12.0f;
        FUN_002aa18c(first, second, first, second, x, y, 42.0f, 42.0f, frameU, 0.0f, frameWidth, 0.65625f, 0.0f);
        FUN_002aa18c(0xff, 0xff, 0xff, 0xff, x, y, 42.0f, 42.0f, 0.65625f, 0.0f, 0.328125f, 0.65625f, 0.0f);
    }
}
}
