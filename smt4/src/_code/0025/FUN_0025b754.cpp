/* NON_MATCHING: near (207 rows against 204): same overlay kinds, blink offset easing (two steps towards 0/16/32/-16), colour packing and the +2.0 float offsets; retail expands the easing separately in every switch case with the target held in a register and switches through `__switch$$` with different register assignment (r4 colour, r5 mode, r6 selector, r7 state block), ours differs in register choice and case layout */
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
void FUN_0025b754(void)
{
    if (g_gameState.map.mapLoadActive != 0) {
        return;
    }
    if (frameTextureGetState() != 0 || g_gameState.overlayKind == 0) {
        FUN_0024ac7c(0);
        FUN_0024ac68(0);
        return;
    }
    if (g_gameState.overlayKind == 1) {
        FUN_0024ac68(1);
        FUN_001dd1e0(g_gameState.overlayTarget,
                     g_gameState.overlayColorB | (g_gameState.overlayColorA << 24) | (g_gameState.overlayColorR << 16) | (g_gameState.overlayColorG << 8),
                     g_gameState.overlayFlag != 0, 1, (f32)g_gameState.overlayX, (f32)g_gameState.overlayY);
        FUN_0024ac7c(0);
        return;
    }
    if (g_gameState.overlayKind == 2) {
        FUN_0024ac7c(1);
        FUN_001dd140(g_gameState.overlayTarget,
                     g_gameState.overlayColorB | (g_gameState.overlayColorA << 24) | (g_gameState.overlayColorR << 16) | (g_gameState.overlayColorG << 8),
                     g_gameState.overlayFlag != 0, 1, (f32)g_gameState.overlayX, (f32)g_gameState.overlayY);
        FUN_0024ac68(0);
        return;
    }

    s32 selector = g_gameState.map.blinkSelector;
    s32 mode = 2;
    u32 color = g_gameState.overlayColorB;
    if (g_gameState.map.darkZone != 0) {
        selector = -2;
    }
    FUN_0024ac7c(1);
    if (g_gameState.mapId < 100) {
        switch (selector) {
        case 0:
            approachBlinkOffset(0);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case 1:
            approachBlinkOffset(16);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case 2:
            approachBlinkOffset(32);
            mode = 3;
            color = color + DAT_00448c90;
            break;
        case -2:
            approachBlinkOffset(32);
            color = color + DAT_00448c90;
            break;
        case -1:
            approachBlinkOffset(-16);
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
    FUN_001dd140(g_gameState.overlayTarget,
                 (g_gameState.overlayColorA << 24) | (g_gameState.overlayColorR << 16) | (g_gameState.overlayColorG << 8) | color,
                 1, mode, (f32)g_gameState.overlayX + 2.0f, (f32)g_gameState.overlayY + 2.0f);
    FUN_0024ac68(0);
}

} /* extern "C" */
