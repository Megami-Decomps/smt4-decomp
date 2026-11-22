/* NON_MATCHING: 269 lines: the paths now read the colour where retail does, the timed fade (and the map >= 100
 * case, which skips the level update) ends in one draw at the overlay position + 2 as in retail, and the level is
 * g_mapTable's word at 0x38; left: retail reloads g_gameState's address for most colour fields, keeps the 0x20
 * target in r1 across the switch and reaches the alpha through its g_gameState + 0x200 base. */
#include "code/Code0024.h"
#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* The map table global (0x5821c4) as far as the fade reads it; its other users still declare their own views. */
struct MapTableFade {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 fadeLevel;          /* creeps by 2 towards the dim state's target */
};

extern MapTableFade g_mapTable;

s32 frameTextureGetState(void);
void FUN_00283cf4(f32 x, f32 y, u32 texture, u32 color, s32 additive, s32 flag);
void FUN_00283c54(f32 x, f32 y, u32 texture, u32 color, s32 additive, s32 flag);

/* The overlay's colour channels packed as RGBA with a zero alpha. */
static __inline u32 overlayColor(void)
{
    return (g_gameState.overlayRed << 24) | (g_gameState.overlayGreen << 16) | (g_gameState.overlayBlue << 8);
}

/* Moves the fade level by 2 towards `target` without overshooting it. */
static __inline void approachLevel(s32 target)
{
    if (g_mapTable.fadeLevel < target) {
        g_mapTable.fadeLevel += 2;
        if (g_mapTable.fadeLevel > target) {
            g_mapTable.fadeLevel = target;
        }
    } else if (g_mapTable.fadeLevel > target) {
        g_mapTable.fadeLevel -= 2;
        if (g_mapTable.fadeLevel < target) {
            g_mapTable.fadeLevel = target;
        }
    }
}

/* Draws the screen fade for the current request: nothing while blocked, a plain fade out or in
 * for modes 1 and 2, and otherwise the timed fade whose level creeps towards the target of the
 * current dim state. */
void FUN_0033f42c(void)
{
    if (g_gameState.mapLoadActive != 0) {
        return;
    }
    if (frameTextureGetState() != 0 || g_gameState.overlayKind == 0) {
        frameTexSetHdrEnabled(0);
        frameTexSetZanEnabled(0);
        return;
    }
    if (g_gameState.overlayKind == 1) {
        frameTexSetZanEnabled(1);
        FUN_00283cf4((f32)g_gameState.overlayX, (f32)g_gameState.overlayY, g_gameState.overlayTexture,
                     g_gameState.overlayAlpha | overlayColor(), g_gameState.overlayAdditive != 0, 1);
        frameTexSetHdrEnabled(0);
        return;
    }
    if (g_gameState.overlayKind == 2) {
        frameTexSetHdrEnabled(1);
        FUN_00283c54((f32)g_gameState.overlayX, (f32)g_gameState.overlayY, g_gameState.overlayTexture,
                     g_gameState.overlayAlpha | overlayColor(), g_gameState.overlayAdditive != 0, 1);
        frameTexSetZanEnabled(0);
        return;
    }
    s32 state = g_gameState.selection;
    s32 flag = 2;

    if (g_gameState.darkZone != 0) {
        state = -2;
    }
    u32 alpha = g_gameState.overlayAlpha;
    frameTexSetHdrEnabled(1);
    if (g_gameState.mapId < 100) {
        switch (state) {
        case 0:
            approachLevel(0);
            flag = 3;
            alpha += g_mapTable.fadeLevel;
            break;
        case 1:
            approachLevel(0x10);
            flag = 3;
            alpha += g_mapTable.fadeLevel;
            break;
        case 2:
            approachLevel(0x20);
            flag = 3;
            alpha += g_mapTable.fadeLevel;
            break;
        case -2:
            approachLevel(0x20);
            alpha += g_mapTable.fadeLevel;
            break;
        case -1:
            approachLevel(-0x10);
            alpha += g_mapTable.fadeLevel;
            break;
        }
        if ((s32)alpha < 0) {
            alpha = 0;
        } else if ((s32)alpha >= 0x100) {
            alpha = 0xFF;
        }
    }
    FUN_00283c54((f32)g_gameState.overlayX + 2.0f, (f32)g_gameState.overlayY + 2.0f, g_gameState.overlayTexture,
                 overlayColor() | alpha, 1, flag);
    frameTexSetZanEnabled(0);
}

}
