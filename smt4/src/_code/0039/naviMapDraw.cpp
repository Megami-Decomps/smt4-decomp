/* NON_MATCHING: 364 lines (302 by shape); the same calls and branches as retail. What differs:
 * - retail reads the four dirty flags through one base (screen + 0x5A00) and keeps only the addresses of the two it
 *   stores more than once (r8, r9), storing eventsDirty through a literal offset; the build keeps all four addresses
 *   and spills the origin index, the navi handle and the map block for them (52-byte frame against 12);
 * - so the screen is in r5 here (r4 in retail), and retail keeps the tuning block's address in fp and the layer 11
 *   in r6 for the two marker draws. */
#include "gamedata/MapSaveBlock.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "game/GameState.h"
#include "shard/NaviMain.h"
#include "map/lmapMain.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "title/TitleSceneTuning.h"
#include "util/MathFunctions.h"
#include "code/Code0023_Smt4.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

/* A map's scroll origin on the navigation screen. */
struct NaviMapOrigin {
    s32 x;
    s32 y;
};

/* The navigation map screen as its draw step sees it (the siblings in this block each have their own view). */
struct NaviMapDrawView {
    /* 0x00000 */ u8 unk00000[0x10];
    /* 0x00010 */ u32 flags;                /* 2: hidden, 0x20: the map is frozen, 0x20000: the marker keeps its place */
    /* 0x00014 */ u8 unk00014[0x4C];
    /* 0x00060 */ s8 map;                   /* the map shown */
    /* 0x00061 */ u8 unk00061[0x101];
    /* 0x00162 */ u8 navi[2];               /* what the NaviMain getters are handed */
    /* 0x00164 */ AsdTextureRegion region;
    /* 0x00184 */ u8 unk00184[0x9FC];
    /* 0x00B80 */ NaviMapOrigin scroll;     /* the shown map's origin moved by the player's position */
    /* 0x00B88 */ NaviMapOrigin origins[8];
    /* 0x00BC8 */ u8 unk00BC8[0x4EC4];
    /* 0x05A8C */ u8 mapDirty;
    /* 0x05A8D */ u8 scrollDirty;
    /* 0x05A8E */ u8 eventsDirty;
    /* 0x05A8F */ u8 iconsDirty;
    /* 0x05A90 */ u8 unk05A90[0xC734];
    /* 0x121C4 */ s32 markerX;              /* where the player's marker was last drawn */
    /* 0x121C8 */ s32 markerY;
    /* 0x121CC */ s32 markerMap;            /* the map the marker is on */
    /* 0x121D0 */ f32 viewHeading;
    /* 0x121D4 */ f32 playerHeading;
    /* 0x121D8 */ MapVector lastPosition;   /* the player's position the scroll was last computed for */
};
typedef char NaviMapDrawViewOffsets[
    offsetof(NaviMapDrawView, map) == 0x60 && offsetof(NaviMapDrawView, region) == 0x164 &&
    offsetof(NaviMapDrawView, scroll) == 0xB80 && offsetof(NaviMapDrawView, mapDirty) == 0x5A8C &&
    offsetof(NaviMapDrawView, markerX) == 0x121C4 && offsetof(NaviMapDrawView, lastPosition) == 0x121D8 ? 1 : -1];

enum {
    NAVI_LAYOUT_FULL = 12,
    NAVI_DRAW_LAYER = 11,
    NAVI_FRAME_LAYER = 0xF1
};

extern "C" {

LmapScenePose *lmapSceneGetObj(void);
f32 cameraViewHeadingDegrees(void *navi);
u32 mapClassifyPlaceState(s32 id);
void titleScissorApplyOrClearRequests(NaviMapDrawView *owner, s32 clip);
void naviPanelDraw(NaviMapDrawView *screen);
void FUN_0039edf0(NaviMapDrawView *screen);
void eventRefreshVisibility(NaviMapDrawView *screen);
void FUN_0039e56c(NaviMapDrawView *screen);
void naviIconsUpdateScreenRects(NaviMapDrawView *screen);
void naviDrawIconsAndMarkers(NaviMapDrawView *screen);
void naviDrawLocationMarkers(NaviMapDrawView *screen);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 state); // declcheck: local (the shared declaration takes Apocalypse's RenderCtxA)
void renderCtxPopState(RenderCtx *context, s32 stack); // declcheck: local (the shared declaration takes Apocalypse's RenderCtxA)
u8 mathHeadingToDirectionCode(NaviMapDrawView *screen, f32 angle);
void uiDrawSizedTextureAtRegionEnd(const AsdTextureRegion *region, u32 id, s32 x, s32 y, u32 depth, u32 mode);

/* Draws the navigation map: rescrolls it and refreshes its layers when the player has moved or something is
 * marked dirty, draws the events and location markers, then the player's marker (the facing of the view and of
 * the player, eight directions each) and the frame. Places of kind 2 and 3 only get the frame. */
void naviMapDraw(NaviMapDrawView *screen)
{
    MapSaveBlock *block = gameGetMapBlock();
    void *navi = screen->navi;
    bool redraw = false;
    LmapScenePose *pose = lmapSceneGetObj();
    f32 x = pose->position.x;
    f32 y = pose->position.y;
    f32 z = pose->position.z;
    s32 map = NaviMain_GetCurrentMap(navi);
    s32 originIndex = NaviMain_GetPosY(navi);

    if (g_gameState.currentObjectId == 0x73) {
        x -= 1000.0f;
        x = -x;
    } else if (g_gameState.currentObjectId == 0x77) {
        x -= 1050.0f;
        x = -x;
    }
    if (screen->flags & 2) {
        return;
    }
    if (g_gameState.currentObjectId != 0xB6 && g_gameState.currentObjectId != 0xB7 &&
        g_gameState.currentObjectId != 0xB8) {
        u32 place = mapClassifyPlaceState(map);
        if (place == 2 || place == 3) {
            DAT_0044cdc8.unk10 = NAVI_FRAME_LAYER;
            naviPanelDraw(screen);
            DAT_0044cdc8.unk10++;
            return;
        }
        if (place != 0) {
            return;
        }
    }

    titleScissorApplyOrClearRequests(screen, 1);
    DAT_0044cdc8.unk10 = NAVI_DRAW_LAYER;
    if (!(screen->flags & 0x20)) {
        if (!screen->scrollDirty) {
            if (mathDistanceBetweenPoints(screen->lastPosition.x, screen->lastPosition.y, screen->lastPosition.z,
                                          x, y, z) > 1.0f) {
                screen->scrollDirty = 1;
            }
        }
        if (screen->scrollDirty || screen->mapDirty || screen->eventsDirty || screen->iconsDirty) {
            screen->scroll.x = (s32)(x * 0.024f) + screen->origins[originIndex].x;
            screen->scroll.y = screen->origins[originIndex].y + (s32)(z * 0.024f);
            if (screen->mapDirty) {
                FUN_0039edf0(screen);
                screen->scrollDirty = 1;
                screen->eventsDirty = 1;
            }
            if (screen->eventsDirty) {
                eventRefreshVisibility(screen);
                screen->iconsDirty = 1;
            }
            if (screen->scrollDirty) {
                FUN_0039e56c(screen);
                redraw = true;
                screen->iconsDirty = 1;
            }
            if (screen->iconsDirty) {
                naviIconsUpdateScreenRects(screen);
            }
        }
    }
    naviDrawIconsAndMarkers(screen);
    naviDrawLocationMarkers(screen);

    if (NaviMain_GetPosX(navi) == NaviMain_GetCurrentMap(navi) && screen->map == screen->markerMap) {
        NaviValuePair *cursor = NaviMain_GetCursorPos(navi);
        f32 cursorX = cursor->first;
        f32 cursorY = cursor->second;
        f32 markerX;
        f32 markerY;

        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        if (!(screen->flags & 0x20000)) {
            redraw = true;
        }
        if (!(screen->flags & 0x20) && redraw) {
            screen->markerX = (s32)cursorX + 160;
            screen->markerY = (s32)cursorY + 120;
            screen->lastPosition.x = x;
            screen->lastPosition.y = y;
            screen->lastPosition.z = z;
            markerX = (f32)screen->markerX;
            markerY = (f32)screen->markerY;
            if (g_gameState.currentObjectId == 0x73 || g_gameState.currentObjectId == 0x77) {
                screen->viewHeading = -NaviMain_GetState(navi);
                screen->playerHeading = -cameraViewHeadingDegrees(navi);
            } else {
                screen->viewHeading = NaviMain_GetState(navi);
                screen->playerHeading = cameraViewHeadingDegrees(navi);
            }
        } else {
            markerX = (f32)screen->markerX;
            markerY = (f32)screen->markerY;
        }

        u8 direction = mathHeadingToDirectionCode(screen, screen->playerHeading);
        if (block->layout == NAVI_LAYOUT_FULL) {
            uiDrawSizedTextureAtRegionEnd(&screen->region, direction + 0xBC1, (s32)markerX, (s32)markerY, NAVI_DRAW_LAYER, 1);
        } else {
            uiDrawSizedTextureAtRegionEnd(&screen->region, direction + 0xBD5, (s32)markerX, (s32)markerY, NAVI_DRAW_LAYER, 1);
        }
        direction = mathHeadingToDirectionCode(screen, screen->viewHeading);
        if (block->layout == NAVI_LAYOUT_FULL) {
            uiDrawSizedTextureAtRegionEnd(&screen->region, direction + 0xBB9, (s32)markerX, (s32)markerY, NAVI_DRAW_LAYER, 1);
        } else {
            uiDrawSizedTextureAtRegionEnd(&screen->region, direction + 0xBCD, (s32)markerX, (s32)markerY, NAVI_DRAW_LAYER, 1);
        }
        renderCtxPopState(g_titleScene, 3);
    }

    titleScissorApplyOrClearRequests(screen, 0);
    DAT_0044cdc8.unk10 = NAVI_FRAME_LAYER;
    naviPanelDraw(screen);
    DAT_0044cdc8.unk10++;
}

} /* extern "C" */
