/* NON_MATCHING: angle branches, global-view aliasing and VFP texture-coordinate scheduling differ from retail. */
#include "battle/btlView.h"
#include "map/lmapMain.h"

extern "C" {
extern BattleViewState g_battleViewState;
extern GameStateA g_gameState;
extern LmapScene *g_lmapScene;
s32 gameFlagIsSet(u32 flag);
void mapRenderApplySecondary();
f32 distSpatial(f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1);
void FUN_0019af70(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x, f32 y, f32 width, f32 height, f32 u0, f32 v0, f32 u1, f32 v1, f32 depth);

// Draw the screen-edge direction indicator with distance-dependent colors and a blinking texture.
void FUN_002cf8e4()
{
    struct IndicatorView { u8 prefix[0xB0]; s32 frame; f32 angle; u8 disabled; };
    struct IndicatorInputView { u8 prefix[0x20]; u8 first; u8 second; };
    if (!gameFlagIsSet(0x4D0))
        return;
    IndicatorView *indicator = reinterpret_cast<IndicatorView *>(&g_battleViewState);
    IndicatorInputView *input = reinterpret_cast<IndicatorInputView *>(&g_gameState);
    if (input->first != 0 || input->second != 0 || indicator->disabled != 0 ||
        (g_battleViewState.unk2c != 8 && g_battleViewState.unk2c != 9))
        return;
    mapRenderApplySecondary();
    const f32 *position = g_lmapScene->transform.position;
    const BattleViewVec3 *target = &g_battleViewState.camera.position;
    f32 distance = distSpatial(position[0], position[1], position[2], target->x, target->y, target->z);
    f32 angle = indicator->angle;
    f32 x;
    f32 y = 198.0f;
    if (angle > 0.0f) {
        if (angle > 90.0f) {
            x = (angle - 90.0f) * 1.98888886f;
        } else {
            x = 0.0f;
            y = angle * 2.2f;
        }
    } else {
        angle = -angle;
        x = 358.0f;
        if (angle <= 90.0f)
            y = angle * 2.2f;
        else
            x -= (angle - 90.0f) * 1.98888886f;
    }
    f32 u0 = indicator->frame % 20 < 10 ? 0.0f : 0.328125f;
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
        x, y, 42.0f, 42.0f, u0, 0.0f, 0.328125f, 0.65625f, 0.0f);
    FUN_0019af70(0xFF, 0xFF, 0xFF, 0xFF,
        x, y, 42.0f, 42.0f, 0.65625f, 0.0f, 0.328125f, 0.65625f, 0.0f);
}
}
