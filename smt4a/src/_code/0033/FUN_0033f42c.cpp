/* NON_MATCHING: the fade request fields are loaded and the packed colour assembled in another order and the level update is scheduled differently from retail (221 vs 226 rows); the fade behaviour is the same. */
#include "common.h"

extern "C" {

/* The screen fade request: the mode, a position, a texture, the base alpha and the colour bytes. */
typedef struct FadeRequest {
    s32 mode;                        /* 0: off, 1: fade out, 2: fade in, other: timed */
    s32 x;
    s32 y;
    u32 texture;
    u32 alpha;
    s32 additive;
    s32 red;
    s32 green;
    s32 blue;
} FadeRequest;

/* The game state slice the fade reads: the progress word, the dim state and the fade request. */
typedef struct FadeGameState {
    /* 0x000 */ s32 progress;
    /* 0x004 */ u8 unk004[0x254];
    /* 0x258 */ s16 dimState;
    /* 0x25A */ u8 unk25a[2];
    /* 0x25C */ s8 dimOverride;
    /* 0x25D */ u8 unk25d[3];
    /* 0x260 */ s8 blocked;
    /* 0x261 */ u8 unk261[0x3C7];
    /* 0x628 */ FadeRequest fade;
} FadeGameState;

extern s32 DAT_005821fc;
extern FadeGameState g_gameState;

s32 frameTextureGetState(void);
void FUN_00348c28(s32 arg);
void FUN_00348c3c(s32 arg);
void FUN_00283cf4(f32 x, f32 y, u32 texture, u32 color, s32 additive, s32 flag);
void FUN_00283c54(f32 x, f32 y, u32 texture, u32 color, s32 additive, s32 flag);

/* Moves the fade level by 2 towards `target` without overshooting it. */
static __inline void approachLevel(s32 target)
{
    if (DAT_005821fc < target) {
        DAT_005821fc += 2;
        if (DAT_005821fc > target) {
            DAT_005821fc = target;
        }
    } else if (DAT_005821fc > target) {
        DAT_005821fc -= 2;
        if (DAT_005821fc < target) {
            DAT_005821fc = target;
        }
    }
}

/* Draws the screen fade for the current request: nothing while blocked, a plain fade out or in
 * for modes 1 and 2, and otherwise the timed fade whose level creeps towards the target of the
 * current dim state. */
void FUN_0033f42c(void)
{
    if (g_gameState.blocked != 0) {
        return;
    }
    s32 busy = frameTextureGetState();
    u32 alpha = g_gameState.fade.alpha;

    if (busy != 0 || g_gameState.fade.mode == 0) {
        FUN_00348c28(0);
        FUN_00348c3c(0);
        return;
    }
    u32 color = (g_gameState.fade.red << 24) | (g_gameState.fade.green << 16) | (g_gameState.fade.blue << 8);

    if (g_gameState.fade.mode == 1) {
        FUN_00348c3c(1);
        FUN_00283cf4((f32)g_gameState.fade.x, (f32)g_gameState.fade.y, g_gameState.fade.texture, alpha | color,
                     g_gameState.fade.additive != 0, 1);
        FUN_00348c28(0);
        return;
    }
    if (g_gameState.fade.mode == 2) {
        FUN_00348c28(1);
        FUN_00283c54((f32)g_gameState.fade.x, (f32)g_gameState.fade.y, g_gameState.fade.texture, alpha | color,
                     g_gameState.fade.additive != 0, 1);
        FUN_00348c3c(0);
        return;
    }
    s32 state = g_gameState.dimState;
    s32 flag = 2;

    if (g_gameState.dimOverride != 0) {
        state = -2;
    }
    FUN_00348c28(1);
    if (g_gameState.progress >= 100) {
        FUN_00283c54((f32)g_gameState.fade.x, (f32)g_gameState.fade.y, g_gameState.fade.texture, color | alpha, 1, flag);
        FUN_00348c3c(0);
        return;
    }
    switch (state) {
    case 0:
        approachLevel(0);
        flag = 3;
        alpha += DAT_005821fc;
        break;
    case 1:
        approachLevel(0x10);
        flag = 3;
        alpha += DAT_005821fc;
        break;
    case 2:
        approachLevel(0x20);
        flag = 3;
        alpha += DAT_005821fc;
        break;
    case -2:
        approachLevel(0x20);
        alpha += DAT_005821fc;
        break;
    case -1:
        approachLevel(-0x10);
        alpha += DAT_005821fc;
        break;
    }
    if ((s32)alpha < 0) {
        alpha = 0;
    } else if ((s32)alpha >= 0x100) {
        alpha = 0xFF;
    }
    FUN_00283c54((f32)g_gameState.fade.x, (f32)g_gameState.fade.y, g_gameState.fade.texture, color | alpha, 1, flag);
    FUN_00348c3c(0);
}

}
