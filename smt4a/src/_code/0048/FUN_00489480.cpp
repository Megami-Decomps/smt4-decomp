/* NON_MATCHING: typed rewrite of the navigation map button handler; same blocks and calls as retail (232 vs 230 rows): the two stack arguments of rectRecRead are stored separately instead of one strd, early exits share the return and the saved registers are numbered differently (retail game state r7, navigation block r6, zero r8). */
#include "map/mapDepart.h"
#include "map/NavigationInterpolation.h"
#include "shard/NaviMain_GetCurrentMap.h"

/* The navigation panel as this input handler reads it. */
struct NaviInputPanel {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 step;
    /* 0x00008 */ s32 state;
    /* 0x0000C */ u8 unk0000C[4];
    /* 0x00010 */ u32 flags;
    /* 0x00014 */ u8 unk00014[0x48];
    /* 0x0005C */ s8 mode;
    /* 0x0005D */ u8 unk0005D[7];
    /* 0x00064 */ u8 selectedMarker;
    /* 0x00065 */ u8 infoPending;
    /* 0x00066 */ u8 unk00066[0x466];
    /* 0x004CC */ u8 scene[4];
    /* 0x004D0 */ u8 unk004D0[0x770];
    /* 0x00C40 */ u8 sprites[6][0x8C];
    /* 0x00F88 */ u8 unk00F88[0x6C08];
    /* 0x07B90 */ u8 refreshCategory;
    /* 0x07B91 */ u8 refreshMarker;
    /* 0x07B92 */ u8 unk07B92[0x1897E];
    /* 0x20510 */ u32 selectedIcon;
    /* 0x20514 */ u8 unk20514[0x130];
    /* 0x20644 */ u8 listActive;
};

/* A rectangle read from the screen's rectangle table. */
struct ScreenRect {
    s32 x, y, width, height;
};

/* The game flag block's counter at +0x15BC. */
struct GameFlagBlock {
    u8 unk0000[0x15BC];
    s32 pendingCount;
};

/* The game state's block at +0x400 holds the navigation flags. */
struct GameStateNavBlock {
    u8 unk00[0x60];
    u8 alternateNaviMap;
    u8 unk61;
    u8 naviMapPending;
};

extern "C" {
void rectRecRead(u32 group, u32 id, s32 *x, s32 *y, s32 *width, s32 *height);

GameFlagBlock *gameFlagsGetBlock(void);
s32 gameFlagIsSet(u32 id);
s32 setFullScreenRect(void);
s32 gameFlagsClassify(void);
s32 FUN_004d0420(ScreenRect rect);
u32 naviGetActiveStateValue(void *scene);
NavigationPoint *sub68OwnerGetBlock60(void *scene);
void naviMainSetValuePair(void *scene, const NavigationPoint *position);
void naviRequestSelectedMap(void);
void sysPlayVoice(u32 id);
void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 frame);
void dialogClose(s32 immediate);
void dialogOpen(s32 mode);
s32 FUN_002d22c0(s32 value);
void lmapEnableSceneState(void);
s32 lmapSceneGetUnk0(void);
s32 mapIfGetState(void);
void infoWinExpandAndSetText(const void *text);
void infoWinSetTimer(s32 frames);
extern u8 DAT_00532760[];
extern GameStateA g_gameState;
extern GameStateNavBlock DAT_005f19fc;

// Handles the navigation map button: starts the map change or the input feedback and reports whether it did.
u32 FUN_00489480(NaviInputPanel *panel)
{
    GameFlagBlock *settings = gameFlagsGetBlock();
    u32 handled = 0;
    if ((panel->flags & 0x2000000) && (setFullScreenRect() == 0 || g_gameState.inputBlocked != 0))
        panel->flags &= ~0x2000000;
    if (gameFlagIsSet(0x49A) == 0)
        return handled;
    if (gameFlagIsSet(12) != 0 && gameFlagIsSet(16) == 0)
        return handled;
    NaviMain_GetCurrentMap(reinterpret_cast<int>(panel->scene));
    s32 kind = gameFlagsClassify();
    if (kind == 2 || kind == 3)
        return handled;
    ScreenRect rect;
    rectRecRead(0x13, 0x112D, &rect.x, &rect.y, &rect.width, &rect.height);
    if (g_gameState.inputBlocked != 0)
        return handled;
    s32 hit = FUN_004d0420(rect);
    if (hit != 0) {
        if (g_gameState.controllerFlags.primary == 0) {
            if (lmapSceneGetUnk0() == 1 || g_gameState.mode >= 100) {
                sysPlayVoice(0x10000D3);
                panel->mode = 5;
                panel->state = 0;
                panel->step = 13;
                FUN_002d22c0(1);
                for (s32 i = 0; i < 6; ++i)
                    uiSpriteSetKeyframe(panel->sprites[i], 4, 0);
                panel->infoPending = 1;
                if (settings->pendingCount != 0)
                    settings->pendingCount = 0;
                handled = 1;
            }
        } else if (DAT_005f19fc.naviMapPending != 0 &&
                   naviGetActiveStateValue(panel->scene) != static_cast<u32>(NaviMain_GetCurrentMap(reinterpret_cast<int>(panel->scene))) &&
                   DAT_005f19fc.alternateNaviMap == 0) {
            sysPlayVoice(0x100020F);
            naviRequestSelectedMap();
            for (s32 i = 0; i < 6; ++i)
                uiSpriteSetKeyframe(panel->sprites[i], 7, 0);
            panel->listActive = 1;
            handled = 1;
        } else {
            sysPlayVoice(0x100020F);
            panel->mode = 5;
            panel->state = 0;
            panel->step = 13;
            NavigationPoint point = *sub68OwnerGetBlock60(panel->scene);
            point.x = 0.0f;
            point.y = 0.0f;
            naviMainSetValuePair(panel->scene, &point);
            panel->selectedMarker = panel->selectedIcon;
            panel->refreshCategory = 1;
            panel->refreshMarker = 1;
            for (s32 i = 0; i < 6; ++i)
                uiSpriteSetKeyframe(panel->sprites[i], 7, 0);
            dialogClose(1);
            if (naviGetActiveStateValue(panel->scene) == static_cast<u32>(NaviMain_GetCurrentMap(reinterpret_cast<int>(panel->scene))))
                g_gameState.navigation.naviMapPending = 0;
            if (DAT_005f19fc.alternateNaviMap != 0) {
                FUN_002d22c0(0);
                lmapEnableSceneState();
            } else {
                FUN_002d22c0(0);
            }
            handled = 1;
        }
    }
    if (DAT_005f19fc.alternateNaviMap == 0 && g_gameState.controllerFlags.primary != 0 && mapIfGetState() == 0 &&
        panel->infoPending != 0) {
        infoWinExpandAndSetText(DAT_00532760);
        dialogOpen(1);
        infoWinSetTimer(-1);
        panel->infoPending = 0;
    }
    return handled;
}
}
