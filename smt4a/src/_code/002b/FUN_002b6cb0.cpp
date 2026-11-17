/* NON_MATCHING: complete rewrite; only VFP/GPR allocation and scheduling differ (retail keeps x/y in s16/s17 and the hoisted constants in s18-s24, loads the zero for indicatorShown with a fresh mov, and tests `hidden` before loading the distance). */
#include "common.h"
#include "game/GameStateA.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

void FUN_0019af70(u32 firstA, u32 firstB, u32 secondA, u32 secondB, f32 x, f32 y, f32 width, f32 height,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 depth);
s32 mapRenderApplyPrimary(void);


static __inline s32 floatBits(f32 value)
{
    union {
        f32 f;
        s32 i;
    } bits;

    bits.f = value;
    return bits.i;
}

/* Draws the edge indicators of the tracked, marked enemies of the map's enemy list. */
void FUN_002b6cb0(void)
{
    MapEnemyA *list = g_mapEnemy;
    if (list != NULL && list->state == 8) {
        if (g_gameState.unk020 == 0 && g_gameState.paused == 0) {
            const f32 u1 = 0.328125f;
            const f32 v1 = 0.65625f;
            s32 i;
            for (i = 0; i < MAP_ENEMY_COUNT_A; i++) {
                MapEnemyEntryA *slot = &list->entries[i];
                if (slot->active != 0) {
                    slot->arrowVisible = 0;
                    if (slot->tracking != 0 && slot->registered != 0 && slot->onRadar != 0) {
                        mapRenderApplyPrimary();
                        s32 distance = floatBits(slot->playerDistance);
                        if (slot->inView == 0) {
                            f32 angle = slot->bearing;
                            f32 x;
                            f32 y;
                            if (angle > 0.0f) {
                                if (floatBits(angle) > 0x42b40000) {
                                    y = 198.0f;
                                    x = (angle - 90.0f) * 1.9888889f;
                                } else {
                                    x = 0.0f;
                                    y = angle * 2.2f;
                                }
                            } else {
                                angle = -angle;
                                if (floatBits(angle) > 0x42b40000) {
                                    y = 198.0f;
                                    x = 358.0f - (angle - 90.0f) * 1.9888889f;
                                } else {
                                    x = 358.0f;
                                    y = angle * 2.2f;
                                }
                            }
                            f32 blink = slot->blinkTimer % 20 < 10 ? 0.0f : u1;
                            u32 first;
                            u32 second;
                            if (distance < 0x43c80000) {
                                first = 0xef6c3eff;
                                second = 0xfe0b22ff;
                            } else if (distance < 0x44480000) {
                                first = 0xfbc30dff;
                                second = 0xff6c2bff;
                            } else if (distance < 0x44960000) {
                                first = 0xfff2c0ff;
                                second = 0xffd52dff;
                            } else {
                                first = 0xffffffff;
                                second = 0x2db5ffff;
                            }
                            slot->arrowVisible = 1;
                            slot->arrowX = x + 12.0f;
                            slot->arrowY = y + 12.0f;
                            FUN_0019af70(first, second, first, second, x, y, 42.0f, 42.0f, blink, 0.0f, u1, v1, 0.0f);
                            FUN_0019af70(0xff, 0xff, 0xff, 0xff, x, y, 42.0f, 42.0f, v1, 0.0f, u1, v1, 0.0f);
                        }
                    }
                }
            }
        }
    }
}

} /* extern "C" */
