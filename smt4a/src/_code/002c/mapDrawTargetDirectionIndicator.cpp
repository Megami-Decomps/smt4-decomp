/* NON_MATCHING: 58 lines off: retail loads the texture height 0.65625f with the width before the blink test and
 * keeps it in s19 (passing it again as the second draw's u), and allocates the colour-chain constants differently. */
#include "battle/btlView.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern BattleViewState g_battleViewState;
s32 gameFlagIsSet(u32 flag);
void mapRenderApplySecondary();
void FUN_0019af70(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x, f32 y, f32 width, f32 height, f32 u0, f32 v0, f32 u1, f32 v1, f32 depth);

/* Draws the screen-edge direction indicator with distance-dependent colors and a blinking texture. */
void mapDrawTargetDirectionIndicator()
{
    if (!gameFlagIsSet(0x4D0))
        return;
    BattleViewState *view = &g_battleViewState;
    if (g_gameState.unk020 != 0 || g_gameState.paused != 0 || view->indicator.hidden != 0 ||
        (view->unk2c != 8 && view->unk2c != 9))
        return;
    mapRenderApplySecondary();
    f32 distance = distSpatial(g_lmapScene->pose.position, view->camera.position);
    f32 angle = view->indicator.angle;
    f32 x;
    f32 y;
    if (angle > 0.0f) {
        if (angle > 90.0f) {
            x = (angle - 90.0f) * 1.98888886f;
            y = 198.0f;
        } else {
            x = 0.0f;
            y = angle * 2.2f;
        }
    } else {
        angle = -angle;
        if (angle <= 90.0f) {
            x = 358.0f;
            y = angle * 2.2f;
        } else {
            x = (angle - 90.0f) * 1.98888886f;
            x = 358.0f - x;
            y = 198.0f;
        }
    }
    f32 u0;
    f32 width;
    if (view->indicator.frame % 20 < 10) {
        u0 = 0.0f;
        width = 0.328125f;
    } else {
        u0 = 0.328125f;
        width = 0.328125f;
    }
    u32 nearColor;
    u32 farColor;
    if (distance < 400.0f) {
        nearColor = 0xEF6C3EFF;
        farColor = 0xFE0B22FF;
    } else if (distance < 800.0f) {
        nearColor = 0xFBC30DFF;
        farColor = 0xFF6C2BFF;
    } else if (distance < 1200.0f) {
        nearColor = 0xFFF2C0FF;
        farColor = 0xFFD52DFF;
    } else {
        nearColor = 0xFFFFFFFF;
        farColor = 0x2DB5FFFF;
    }
    FUN_0019af70(nearColor, farColor, nearColor, farColor,
        x, y, 42.0f, 42.0f, u0, 0.0f, width, 0.65625f, 0.0f);
    FUN_0019af70(0xFF, 0xFF, 0xFF, 0xFF,
        x, y, 42.0f, 42.0f, 0.65625f, 0.0f, 0.328125f, 0.65625f, 0.0f);
}
}
