/* NON_MATCHING: same instructions as retail now (the +0x400 block view reproduces `ldr r6, =g_gameState+0x400; sub r9, r6, #1024`); only the saved-register numbering differs (retail frozen r5, sprite r7, zero r8, game state r9). */
#include "map/mapDepart.h"
#include "ui/UiSpriteState.h"

/* A field-map panel with two animated sprites and two pulse timers. */
struct PulsePanel {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ s8 mode;            /* -1 = inactive */
    /* 0x00D */ u8 unk00D[3];
    /* 0x010 */ u32 flags;          /* bit 0: shown, bit 12: frozen */
    /* 0x014 */ u8 unk014[0x4A8];
    /* 0x4BC */ s32 pulseTimer;     /* counts up to 10 in both states */
    /* 0x4C0 */ s32 pulseState;
    /* 0x4C4 */ s32 stepTimer;
    /* 0x4C8 */ s32 stepState;
    /* 0x4CC */ u8 unk4CC[0xCEC];
    /* 0x11B8 */ UiSpriteState first;
    /* 0x1244 */ UiSpriteState second;
};
typedef char PulsePanelLayout[offsetof(PulsePanel, first) == 0x11B8 && offsetof(PulsePanel, second) == 0x1244 &&
    offsetof(PulsePanel, stepState) == 0x4C8 ? 1 : -1];

extern "C" {

extern GameStateA g_gameState;

/* The game state's block at +0x400 holds the navigation flags. */
struct GameStateNavBlock {
    u8 unk00[0x60];
    u8 alternateNaviMap;
};

s32 FUN_0048e40c(PulsePanel *panel);
void FUN_0048c394(PulsePanel *panel);
s32 FUN_00485d1c(PulsePanel *panel);
s32 FUN_00163aa4(UiSpriteState *sprite, f32 speed);
s32 uiSpriteGetMode(const UiSpriteState *sprite);
s32 uiSpriteGetCompletionState(const UiSpriteState *sprite);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 keyframe, s32 frame);

/* Per-frame update of the panel: advances its two sprite animations and the pulse timers. */
void _ZN9Obj53230012FUN_00487124Ev(PulsePanel *panel)
{
    u32 frozen;

    if (panel->mode == -1) {
        return;
    }
    GameStateNavBlock *nav = reinterpret_cast<GameStateNavBlock *>(reinterpret_cast<u8 *>(&g_gameState) + 0x400);
    if (nav->alternateNaviMap != 0) {
        g_gameState.inputBlocked = 0;
    }
    frozen = (panel->flags & 0x1000) >> 12;
    if (FUN_0048e40c(panel) != 0 && panel->mode != 0 && g_gameState.controllerFlags.primary != 0) {
        FUN_0048c394(panel);
    }
    if (g_gameState.controllerFlags.primary != 0) {
        FUN_00163aa4(&panel->first, 1.0f);
        if (uiSpriteGetCompletionState(&panel->first) != 0) {
            if (uiSpriteGetMode(&panel->first) == 3) {
                uiSpriteSetImageKeyframe(&panel->first, 4, 0);
            } else {
                uiSpriteSetImageKeyframe(&panel->first, 3, 0);
            }
        }
        FUN_00163aa4(&panel->second, 1.0f);
        if (uiSpriteGetCompletionState(&panel->second) != 0) {
            if (uiSpriteGetMode(&panel->second) == 5) {
                uiSpriteSetImageKeyframe(&panel->second, 6, 0);
            } else {
                uiSpriteSetImageKeyframe(&panel->second, 5, 0);
            }
        }
    }
    if (panel->pulseState == 0) {
        panel->pulseTimer++;
        if (panel->pulseTimer > 10) {
            panel->pulseState = 1;
            panel->pulseTimer = 0;
        }
    } else if (panel->pulseState == 1) {
        panel->pulseTimer++;
        if (panel->pulseTimer > 10) {
            panel->pulseTimer = 0;
            panel->pulseState = 0;
        }
    }
    if (panel->stepState == 0) {
        panel->stepTimer++;
        if (panel->pulseTimer > 9) {
            panel->stepState = 1;
            panel->stepTimer = 0;
        }
    } else if (panel->stepState == 1) {
        panel->stepTimer++;
        if (panel->pulseTimer > 9) {
            panel->stepState = 2;
            panel->stepTimer = 0;
        }
    } else if (panel->stepState == 2) {
        panel->stepTimer++;
        if (panel->pulseTimer > 9) {
            panel->stepState = 0;
            panel->stepTimer = 0;
        }
    }
    if (frozen == 0) {
        if (FUN_00485d1c(panel) != 0) {
            panel->flags |= 1;
        }
        if (nav->alternateNaviMap != 0) {
            g_gameState.inputBlocked = 1;
        }
    }
}

} /* extern "C" */
