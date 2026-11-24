/* NON_MATCHING: 368 lines (shape 204); the same calls, tests and constants as retail. What differs:
 * - retail stores 1 or 0 into buttonEnabled straight from the exits of the two map-row searches, where this build
 *   keeps the answer in a flag (two single-use predicates returning it score 345, shape 179; they are not written
 *   for want of evidence besides the score);
 * - retail places the button loop's skip tests after the single-button draw and the two skips after the epilogue;
 * - retail spills the navi handle to sp+144 (later reused for screen + 0x12000), keeps 0x529 in r9 for both flag
 *   tests, the tuning block in r8, the scene in sl and the map block in r7, and clears origin.y before origin.x;
 * - the name's x is converted back to a float before its y is, and the single button's counter is addressed as
 *   (screen + 2) + 0x56, as in the loop (naviPanelButtonImage is that shared step, two call sites; a plain static,
 *   which gives the loop's image selection as retail has it: 350 lines but shape 240 as `static __inline`). */
#include <stdio.h>
#include "gamedata/MapSaveBlock.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "game/GameState.h"
#include "map/lmapMain.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "title/TitleSceneTuning.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "code/Code0023_Smt4.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "gfx/SpritePartDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Where the panel is drawn on the lower screen. */
struct NaviPanelOrigin {
    f32 x;
    f32 y;
};

/* A row of the list of maps the navigation screen steps through. */
struct NaviPanelMapRow {
    /* 0x00 */ u16 id;     /* 0 for an unused row */
    /* 0x02 */ s16 map;    /* 0 when the row has no map to show */
};

enum {
    NAVI_BUTTON_PREVIOUS_MAP = 0,
    NAVI_BUTTON_NEXT_MAP = 4,
    NAVI_BUTTONS = 5,
    NAVI_PANEL_BANK = 0x1C,            /* the texture file of the panel's parts */
    NAVI_PANEL_NAME_PLATE = 0xFB4,
    NAVI_PANEL_BUTTON_IMAGE = 0xFB5,   /* the first button; the pressed images follow the five idle ones */
    NAVI_FLAG_PLACE_NAMES = 0x529
};

/* The navigation screen as its panel draw sees it (the siblings in this block each have their own view). */
struct NaviPanelDrawView {
    /* 0x00000 */ u8 unk00000[0xC];
    /* 0x0000C */ u8 detailed;              /* the place's own name and the five buttons are shown */
    /* 0x0000D */ u8 unk0000D[3];
    /* 0x00010 */ u32 flags;                /* 0x20: frozen, 0x1000: no buttons, 0x1000000: drawn at the region's place */
    /* 0x00014 */ u8 unk00014[0x42];
    /* 0x00056 */ s8 buttonFlash[NAVI_BUTTONS]; /* frames each button still shows its pressed image */
    /* 0x0005B */ u8 unk0005B[5];
    /* 0x00060 */ s8 map;                   /* the map shown */
    /* 0x00061 */ u8 unk00061[0x101];
    /* 0x00162 */ u8 navi[2];               /* what the NaviMain getters are handed */
    /* 0x00164 */ AsdTextureRegion region;
    /* 0x00184 */ u8 unk00184[0x494];
    /* 0x00618 */ UiSpriteState buttons[NAVI_BUTTONS];
    /* 0x008D4 */ u8 unk008D4[0x11910];
    /* 0x121E4 */ NaviPanelMapRow mapRows[32];
    /* 0x12264 */ s32 mapRowCount;
    /* 0x12268 */ char placeName[0x80];
    /* 0x122E8 */ u8 buttonEnabled[NAVI_BUTTONS];
};
typedef char NaviPanelDrawViewOffsets[
    offsetof(NaviPanelDrawView, buttonFlash) == 0x56 && offsetof(NaviPanelDrawView, region) == 0x164 &&
    offsetof(NaviPanelDrawView, buttons) == 0x618 && offsetof(NaviPanelDrawView, mapRows) == 0x121E4 &&
    offsetof(NaviPanelDrawView, mapRowCount) == 0x12264 && offsetof(NaviPanelDrawView, placeName) == 0x12268 &&
    offsetof(NaviPanelDrawView, buttonEnabled) == 0x122E8 ? 1 : -1];

/* The image of button `index`: its pressed one while the button flashes, which this counts down. */
static s32 naviPanelButtonImage(NaviPanelDrawView *screen, s32 index)
{
    s32 image = NAVI_PANEL_BUTTON_IMAGE + index;
    s8 flash = screen->buttonFlash[index];

    if (flash > 0) {
        image += NAVI_BUTTONS;
        screen->buttonFlash[index] = flash - 1;
    }
    return image;
}

extern "C" {

LmapScenePose *lmapSceneGetObj(const void *unused); // declcheck: local (this caller hands it the navi handle)
u32 mapClassifyPlaceState(s32 id);
void mapDepartFormatPlaceName(s32 kind, s32 id, s32 mode, char *output);
const char *FUN_002e039c(s32 kind, f32 x, f32 z);
s32 gameFlagIsSet(u32 flag); // declcheck: local (its headers belong to the battle and camp menus)
s32 textMeasureOnLayer(const char *text, u32 layer);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared one takes unsigned int pointers)
void pairCopy(const AsdTextureRegion *source, NaviPanelOrigin *destination); // declcheck: local (the shared one takes word pointers)
void gxResetColorQuadToWhite(void); // declcheck: local (the only shared declaration is in Apocalypse's ui/AnimatedMessage.h)
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 state); // declcheck: local (the shared declaration takes Apocalypse's RenderCtxA)
void renderCtxPopState(RenderCtx *context, s32 stack); // declcheck: local (the shared declaration takes Apocalypse's RenderCtxA)
void FUN_00231bcc(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags);
void FUN_0039fb38(u32 id, u32 x, u32 y, u32 depth, u32 mode);
void drawEffectResourceWithColors(u32 id, u32 x, u32 y, u32 depth, u32 alpha, u32 mode);

/* Draws the navigation screen's panel: its frame, the name of the place, the panel's parts and, unless the
 * scene hides them, the five buttons (the previous-map and next-map ones dimmed while they lead nowhere). */
void naviPanelDraw(NaviPanelDrawView *screen)
{
    MapSaveBlock *block = gameGetMapBlock();

    renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(5, 1));

    f32 depth = (256 - DAT_0044cdc8.unk10) * 0.00390625f;
    const void *navi = screen->navi;
    u32 posX = NaviMain_GetPosX(navi);
    u32 posY = NaviMain_GetPosY(navi);
    LmapScenePose *pose = lmapSceneGetObj(navi);
    f32 playerX = pose->position.x;
    f32 playerZ = pose->position.z;
    NaviPanelOrigin origin;
    char buffer[0x80];

    origin.x = 0.0f;
    origin.y = 0.0f;
    if (screen->flags & 0x1000000) {
        pairCopy(&screen->region, &origin);
    }
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, NAVI_PANEL_BANK, 8, (s32)origin.x, (s32)origin.y, DAT_0044cdc8.unk10);

    char *name = screen->placeName;

    if (!(screen->flags & 0x20)) {
        if (!screen->detailed) {
            if (gameFlagIsSet(NAVI_FLAG_PLACE_NAMES) && mapClassifyPlaceState(posX) != 3) {
                libc_strcpy(name, FUN_002e039c((s16)posY, playerX, playerZ));
            } else {
                sprintf(buffer, "\x81\x48\x81\x48\x81\x48");  /* three full-width question marks */
                libc_strcpy(name, buffer);
            }
        } else {
            u32 currentMap = NaviMain_GetCurrentMap(navi);

            mapDepartFormatPlaceName(currentMap, NaviMain_GetPosY(navi), 1, buffer);
            libc_strcpy(name, buffer);
        }
    }
    if (screen->placeName[0] != '\0') {
        f32 width = textMeasureOnLayer(name, 2);
        TextureTableEntryIV *plate = asdTMTexTableEntryAt(NAVI_PANEL_BANK, NAVI_PANEL_NAME_PLATE);
        s32 x = (s32)(plate->x + origin.x);
        s32 y = (s32)(plate->y + origin.y);

        /* centred on the plate */
        x += plate->placement->width / 2;
        x = (s32)(x - width * 0.5f);
        textDrawString(x, y, depth, 2, 0.0f, 0xFFFFFFFF, 1.0f, name);
    }

    renderStackPushIndexed(g_titleScene, 6, packNibblesAndByte(6, 1, 0));
    FUN_00231bcc(&screen->region, 0xFA0, 0, 0, DAT_0044cdc8.unk10, 1);
    FUN_00231bcc(&screen->region, 0xFA1, 0, 0, DAT_0044cdc8.unk10, 1);
    FUN_00231bcc(&screen->region, 0xFA2, 0, 0, DAT_0044cdc8.unk10, 1);
    FUN_00231bcc(&screen->region, 0xFA3, 0, 0, DAT_0044cdc8.unk10, 1);
    renderCtxPopState(g_titleScene, 6);
    for (s32 image = 0xFA5; image <= 0xFA8; image++) {
        FUN_00231bcc(&screen->region, image, 0, 0, DAT_0044cdc8.unk10, 1);
    }
    for (s32 image = 0xFA9; image <= 0xFAC; image++) {
        FUN_00231bcc(&screen->region, image, 0, 0, DAT_0044cdc8.unk10, 1);
    }

    if (!(g_gameState.mapId == 0x13 &&
          (g_gameState.areaId == 6 || g_gameState.areaId == 7 || g_gameState.areaId == 8)) &&
        !(screen->flags & 0x1000)) {
        if (!screen->detailed) {
            if (gameFlagIsSet(NAVI_FLAG_PLACE_NAMES)) {
                u32 place = mapClassifyPlaceState(NaviMain_GetCurrentMap(navi));

                if (place != 2 && place != 3) {
                    s32 image = naviPanelButtonImage(screen, 2);

                    UiSpriteState *button = &screen->buttons[2];
                    s32 x = (s32)(vec2GetXInt(button) + origin.x);
                    s32 y = (s32)(vec2GetYInt(button) + origin.y);

                    FUN_0039fb38(image, x, y, DAT_0044cdc8.unk10, 1);
                }
            }
        } else {
            u32 place = mapClassifyPlaceState(NaviMain_GetCurrentMap(navi));

            if (place != 2 && place != 3) {
                for (s32 i = 0; i < NAVI_BUTTONS; i++) {
                    s8 flash = screen->buttonFlash[i];

                    /* Buttons 1 and 3 give way to each other's pressed image and to the layouts without them. */
                    if (flash == 0) {
                        if (i == 1) {
                            if (block->layout == 12 || screen->buttonFlash[3] > 0) {
                                continue;
                            }
                        } else if (i == 3) {
                            if (block->layout == 6 || screen->buttonFlash[1] > 0) {
                                continue;
                            }
                        }
                    }

                    s32 image = naviPanelButtonImage(screen, i);

                    UiSpriteState *button = &screen->buttons[i];
                    s32 x = (s32)(vec2GetXInt(button) + origin.x);
                    s32 y = (s32)(vec2GetYInt(button) + origin.y);

                    if (!(screen->flags & 0x20)) {
                        if (i == NAVI_BUTTON_PREVIOUS_MAP) {
                            if (screen->buttonFlash[NAVI_BUTTON_PREVIOUS_MAP] == 0) {
                                /* the row before the shown one must have a map */
                                bool known = false;

                                for (s32 row = 0; row < screen->mapRowCount; row++) {
                                    if (screen->mapRows[row].id != 0 && screen->mapRows[row].map == screen->map) {
                                        if (row - 1 >= 0 && screen->mapRows[row - 1].map != 0) {
                                            known = true;
                                        }
                                        break;
                                    }
                                }
                                screen->buttonEnabled[i] = known;
                            } else {
                                screen->buttonEnabled[i] = true;
                            }
                        } else if (i == NAVI_BUTTON_NEXT_MAP && screen->buttonFlash[NAVI_BUTTON_NEXT_MAP] == 0) {
                            /* the row after the shown one must have a map */
                            bool known = false;

                            for (s32 row = 0; row < screen->mapRowCount; row++) {
                                if (screen->mapRows[row].id != 0 && screen->mapRows[row].map == screen->map) {
                                    if (row + 1 < screen->mapRowCount && screen->mapRows[row + 1].map != 0) {
                                        known = true;
                                    }
                                    break;
                                }
                            }
                            screen->buttonEnabled[i] = known;
                        } else {
                            screen->buttonEnabled[i] = true;
                        }
                    }
                    if (screen->buttonEnabled[i]) {
                        FUN_0039fb38(image, x, y, DAT_0044cdc8.unk10, 1);
                    } else {
                        drawEffectResourceWithColors(image, x, y, DAT_0044cdc8.unk10, 0x80, 1);
                    }
                }
            }
        }
    }
    renderCtxPopState(g_titleScene, 3);
}

} /* extern "C" */
