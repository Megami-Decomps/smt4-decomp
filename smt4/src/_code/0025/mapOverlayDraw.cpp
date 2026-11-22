/* NON_MATCHING: retail reaches the blink offset as g_mapTable + 0x38 (its file's data base) where this unit names
 * DAT_00448c90, hoists the shared target 32 before the switch, and loads the overlay fields of kinds 1 and 2 in another
 * order; the case layout (2, 1, 0, -1, -2), the easing and the colour packing follow retail. */
#include "code/Code0024.h"
#include "game/GameState.h"
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {


extern s32 DAT_00448c90;             /* 0x448c90: current blink offset */

s32 frameTextureGetState(void);
void FUN_001dd1e0(u32 target, u32 color, s32 flag, s32 mode, f32 x, f32 y);
void FUN_001dd140(u32 target, u32 color, s32 flag, s32 mode, f32 x, f32 y);

/* Moves the blink offset two steps towards `target`, without overshooting it. */
static __inline void approachBlinkOffset(s32 target)
{
    if (DAT_00448c90 < target) {
        DAT_00448c90 = DAT_00448c90 + 2;
        if (DAT_00448c90 > target) {
            DAT_00448c90 = target;
        }
    } else if (DAT_00448c90 > target) {
        DAT_00448c90 = DAT_00448c90 - 2;
        if (DAT_00448c90 < target) {
            DAT_00448c90 = target;
        }
    }
}

/* Draws the screen overlay requested in the game state block (fade/flash, or a pulsing blink). */
void mapOverlayDraw(void)
{
    if (g_gameState.map.mapLoadActive != 0) {
        return;
    }
    if (frameTextureGetState() != 0 || g_gameState.overlayKind == 0) {
        frameTexSetHdrEnabled(0);
        frameTexSetZanEnabled(0);
        return;
    }
    if (g_gameState.overlayKind == 1) {
        frameTexSetZanEnabled(1);
        FUN_001dd1e0(g_gameState.overlayTexture,
                     g_gameState.overlayAlpha | (g_gameState.overlayRed << 24) | (g_gameState.overlayGreen << 16) | (g_gameState.overlayBlue << 8),
                     g_gameState.overlayAdditive != 0, 1, (f32)g_gameState.overlayX, (f32)g_gameState.overlayY);
        frameTexSetHdrEnabled(0);
        return;
    }
    if (g_gameState.overlayKind == 2) {
        frameTexSetHdrEnabled(1);
        FUN_001dd140(g_gameState.overlayTexture,
                     g_gameState.overlayAlpha | (g_gameState.overlayRed << 24) | (g_gameState.overlayGreen << 16) | (g_gameState.overlayBlue << 8),
                     g_gameState.overlayAdditive != 0, 1, (f32)g_gameState.overlayX, (f32)g_gameState.overlayY);
        frameTexSetZanEnabled(0);
        return;
    }

    s32 selector = g_gameState.map.blinkSelector;
    s32 mode = 2;
    u32 color = g_gameState.overlayAlpha;
    if (g_gameState.map.darkZone != 0) {
        selector = -2;
    }
    frameTexSetHdrEnabled(1);
    if (g_gameState.mapId < 100) {
        switch (selector) {
        case 2:
            approachBlinkOffset(32);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case 1:
            approachBlinkOffset(16);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case 0:
            approachBlinkOffset(0);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case -1:
            approachBlinkOffset(-16);
            color = color + DAT_00448c90;
            break;
        case -2:
            approachBlinkOffset(32);
            color = color + DAT_00448c90;
            break;
        default:
            break;
        }
        if ((s32)color < 0) {
            color = 0;
        } else if ((s32)color >= 0x100) {
            color = 0xFF;
        }
    }
    FUN_001dd140(g_gameState.overlayTexture,
                 (g_gameState.overlayRed << 24) | (g_gameState.overlayGreen << 16) | (g_gameState.overlayBlue << 8) | color,
                 1, mode, (f32)g_gameState.overlayX + 2.0f, (f32)g_gameState.overlayY + 2.0f);
    frameTexSetZanEnabled(0);
}

} /* extern "C" */
