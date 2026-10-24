/* NON_MATCHING: near (207 rows against 204): same overlay kinds, blink offset easing (two steps towards 0/16/32/-16), colour packing and the +2.0 float offsets; retail expands the easing separately in every switch case with the target held in a register and switches through `__switch$$` with different register assignment (r4 colour, r5 mode, r6 selector, r7 state block), ours differs in register choice and case layout */
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

/* Game state block with the screen fade/blink overlay request (observed fields only). */
struct GameStateBlock {
    s32 state;                    /* 0x000 */
    u8 pad004[0x224 - 4];
    s16 blinkSelector;            /* 0x224: -2..2 selects the blink pattern */
    u8 pad226[2];
    s8 blinkInvert;               /* 0x228 */
    u8 pad229[3];
    s8 overlayLocked;             /* 0x22C: nonzero hides the overlay */
    u8 pad22D[0x3A8 - 0x22D];
    s32 overlayKind;              /* 0x3A8: 0 none, 1 and 2 plain overlays, else blink overlay */
    s32 x;                        /* 0x3AC */
    s32 y;                        /* 0x3B0 */
    u32 target;                   /* 0x3B4 */
    u32 colorB;                   /* 0x3B8 */
    s32 flag;                     /* 0x3BC */
    u32 colorA;                   /* 0x3C0 */
    u32 colorR;                   /* 0x3C4 */
    u32 colorG;                   /* 0x3C8 */
};

extern GameStateBlock g_gameState;   /* 0x49f91c */
extern s32 DAT_00448c90;             /* 0x448c90: current blink offset */

s32 frameTextureGetState(void);
void FUN_0024ac7c(s32 enable);
void FUN_0024ac68(s32 enable);
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
    if (g_gameState.overlayLocked != 0) {
        return;
    }
    if (frameTextureGetState() != 0 || g_gameState.overlayKind == 0) {
        FUN_0024ac7c(0);
        FUN_0024ac68(0);
        return;
    }
    if (g_gameState.overlayKind == 1) {
        FUN_0024ac68(1);
        FUN_001dd1e0(g_gameState.target,
                     g_gameState.colorB | (g_gameState.colorA << 24) | (g_gameState.colorR << 16) | (g_gameState.colorG << 8),
                     g_gameState.flag != 0, 1, (f32)g_gameState.x, (f32)g_gameState.y);
        FUN_0024ac7c(0);
        return;
    }
    if (g_gameState.overlayKind == 2) {
        FUN_0024ac7c(1);
        FUN_001dd140(g_gameState.target,
                     g_gameState.colorB | (g_gameState.colorA << 24) | (g_gameState.colorR << 16) | (g_gameState.colorG << 8),
                     g_gameState.flag != 0, 1, (f32)g_gameState.x, (f32)g_gameState.y);
        FUN_0024ac68(0);
        return;
    }

    s32 selector = g_gameState.blinkSelector;
    s32 mode = 2;
    u32 color = g_gameState.colorB;
    if (g_gameState.blinkInvert != 0) {
        selector = -2;
    }
    FUN_0024ac7c(1);
    if (g_gameState.state < 100) {
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
    FUN_001dd140(g_gameState.target,
                 (g_gameState.colorA << 24) | (g_gameState.colorR << 16) | (g_gameState.colorG << 8) | color,
                 1, mode, (f32)g_gameState.x + 2.0f, (f32)g_gameState.y + 2.0f);
    FUN_0024ac68(0);
}

} /* extern "C" */
