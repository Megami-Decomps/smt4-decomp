/* NON_MATCHING: the control flow, calls, constants and frame contents follow retail; the register allocation does not.
 * Retail keeps &g_useCounter in sl and the row depth 211 in fp across the row loop and spills &work->list to
 * sp+176 (here the list address stays in sl and 211 is rematerialised, so the frame is 8 bytes smaller), and
 * passes dataTableGet's section before its table. */
#include <stdio.h>
#include "shard/W6_W6Match6_SortMenu.h"
#include "camp/RenderCtxTitle.h"
#include "camp/CampMenuEntry.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/GameDataAccess.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define SORT_MENU_TEXTURES 30
#define SORT_MENU_GREY 0x5A5A5AFF
#define SORT_MENU_DECIDED_COLOR 0x72E027FF
#define SORT_MENU_PLAYER_KEY 0x3D

extern "C" {

extern SortMenuSingleton g_useCounter;
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
char *terminalGetCharacterDisplayName(s32 id);
const char *tmnlGetEntryText(s32 id);
u8 ifTouchGetSelectionModeForRegion(int id);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId,
    u32 arrowAId, u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
    u32 arrowBRegion, s32 layer, s32 horizontal);
void renderCtxResetColorScale(RenderCtx *context);

/* The label of the list's entry `row` rows below its top: the terminal's text for the terminal list (option 2); else the
 * player's name for the player key and the key table's label for the others. */
static __inline const char *sortMenuEntryName(SortMenuWork *work, GridNavigation *list, s32 row)
{
    if (work->option == 2) {
        return tmnlGetEntryText(work->keys[resourceRunOperationIfUnblocked(list) + row]);
    }
    u8 key = work->keys[resourceRunOperationIfUnblocked(list) + row];
    if (key >= SORT_MENU_KEY_COUNT) {
        return NULL;
    }
    if (key == SORT_MENU_PLAYER_KEY) {
        return reinterpret_cast<const char *>(gameDataGetPlayerName());
    }
    return sortMenuFindKey(key)->name;
}

/* The sort menu's draw: the frame and title (option 2: the terminal list's heading, sliding in), every row
 * but the cursor's with its label (greyed while the story flags lock that entry), the cursor row with its
 * highlight, clipped shine and label, and the scroll bar when the list scrolls. */
s32 sortMenuDraw(u32 job)
{
    SortMenuWork *work = g_useCounter.work;
    u32 title = 0;
    bool opening = false;
    f32 alpha = 1.0f;
    char text[128];

    if (work->state == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushACountedDirect(g_titleScene, renderCtxPackPassFlags(1, 0));

    u32 state = work->state;
    if (state == 1) {
        opening = true;
    }
    if (work->option == 2) {
        /* The heading slides down into place while the menu opens. */
        s32 slide = 0;
        if (state == 1) {
            slide = work->frame * 2 - 12;
            if (slide > 0) {
                slide = 0;
            }
        }
        texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 40, 0, slide, 201);
        texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 41, 0, slide, 201);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 42);
        const char *name = terminalGetCharacterDisplayName(work->terminalMap);
        if (name == NULL) {
            /* "Failed to get the map name" */
            sprintf(text, "\x83\x7d\x83\x62\x83\x76\x96\xbc\x8e\xe6\x93\xbe\x8e\xb8\x94\x73");
        } else {
            sprintf(text, "%s", name);
        }
        s32 width = fontMeasureLineAdvance(text, 2);
        s32 x = label->x + (label->placement->width - width) / 2;
        textDrawString(x, label->y + slide, 0.16f, 2, 0.0f, 0xFFFFFFFF, alpha, text);
    } else {
        texDrawCompositeSprite(2, SORT_MENU_TEXTURES, 0, 0, 0, 201);
        texDrawCompositeSprite(2, SORT_MENU_TEXTURES, 3, 0, 0, 211);
        if (work->option == 0) {
            title = 35;
        } else if (work->option == 1) {
            title = 36;
        }
        texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, title, 0, 0, 216);
    }

    for (s32 row = 0; row < (g_useCounter.work->option == 2 ? 10 : 9); row++) {
        if (!opening && listCursorGetRowIfUnblocked(&work->list) == row) {
            continue;
        }
        alpha = vec2GetSpeed(&work->sprites[row]);
        efctSetSpeed(alpha);
        TextureTableEntryIV *slot;
        if (work->option == 2) {
            slot = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, row + 43);
        } else {
            slot = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, row + 7);
        }
        texDrawCompositeSprite(2, SORT_MENU_TEXTURES, 1, slot->x, slot->y, 211);

        u32 color = 0xFF;
        if (work->keys[resourceRunOperationIfUnblocked(&work->list) + row] == 0x42) {
            if (gameFlagIsSet(500) || gameFlagIsSet(0x1E1)) {
                color = SORT_MENU_GREY;
            }
        }
        if (work->keys[resourceRunOperationIfUnblocked(&work->list) + row] == 0x41) {
            if (gameFlagIsSet(499) || gameFlagIsSet(0x1D8)) {
                color = SORT_MENU_GREY;
            }
        }
        if (work->keys[resourceRunOperationIfUnblocked(&work->list) + row] == SORT_MENU_PLAYER_KEY) {
            sprintf(text, "%s", gameDataGetPlayerName());
            if ((gameFlagIsSet(0x668) && !gameFlagIsSet(0x1D7)) || gameFlagIsSet(0x263)) {
                color = SORT_MENU_GREY;
            }
            if ((gameFlagIsSet(0x13B) || gameFlagIsSet(0x1A0) || gameFlagIsSet(0x1BA)) &&
                !gameFlagIsSet(0x18C) && !gameFlagIsSet(0x1D8)) {
                color = SORT_MENU_GREY;
            }
        } else {
            sprintf(text, "%s", sortMenuEntryName(work, &work->list, row));
        }
        TextureTableEntryIV *label = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 6);
        s32 width = fontMeasureLineAdvance(text, 2);
        s32 x = slot->x + label->x + (label->placement->width - width) / 2;
        textDrawString(x, slot->y + label->y, 0.17578125f, 2, 0.0f, color, alpha, text);
        efctSetSpeed(1.0f);
    }

    if (!opening) {
        s32 cursor = listCursorGetRowIfUnblocked(&work->list);
        TextureTableEntryIV *slot;
        if (work->option == 2) {
            slot = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, cursor + 53);
        } else {
            slot = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, cursor + 24);
        }
        efctSetSpeed(vec2GetSpeed(&work->sprites[10]));
        texDrawCompositeSprite(2, SORT_MENU_TEXTURES, 2, slot->x, slot->y, 221);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 19, slot->x, slot->y, 226);
        if (work->state == 3) {
            texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 21, slot->x, slot->y, 231);
        } else {
            s32 touch = ifTouchGetSelectionModeForRegion(work->ids[3 + listCursorGetRowIfUnblocked(&work->list)]);
            if (touch == 1 || touch == 2 || touch == 6) {
                texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 21, slot->x, slot->y, 231);
            } else {
                texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 20, slot->x, slot->y, 231);
            }
        }

        u32 color = 0xFFFFFFFF;
        if (work->keys[resourceRunOperationIfUnblocked(&work->list) + cursor] == SORT_MENU_PLAYER_KEY) {
            sprintf(text, "%s", gameDataGetPlayerName());
            if ((gameFlagIsSet(0x668) && !gameFlagIsSet(0x1D7)) || gameFlagIsSet(0x263)) {
                color = 0x787878FF;
            } else if (work->state == 3) {
                color = SORT_MENU_DECIDED_COLOR;
            }
        } else {
            if (work->state == 3) {
                color = SORT_MENU_DECIDED_COLOR;
            }
            sprintf(text, "%s", sortMenuEntryName(work, &work->list, cursor));
        }
        TextureTableEntryIV *label = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 23);
        s32 width = fontMeasureLineAdvance(text, 3);
        s32 x = slot->x + label->x + (label->placement->width - width) / 2;
        textDrawString(x, slot->y + label->y, 0.08f, 3, 0.0f, color, 1.0f, text);

        /* The shine slides across the row, clipped to the plate. */
        TextureTableEntryIV *plate = asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 20);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
        gxSetMirroredClippedScissor(slot->x + plate->x, slot->y + plate->y, plate->placement->width,
                                    plate->placement->height, 1);
        s32 shineY = vec2GetYInt(&work->sprites[11]) + slot->y;
        s32 shineX = vec2GetXInt(&work->sprites[11]) + slot->x;
        texDrawTableEntryAtStoredOrigin(2, SORT_MENU_TEXTURES, 22, shineX, shineY, 236);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
    }

    if (static_cast<s32>(gridNavigationGetItemCount(&work->list)) > static_cast<s32>(uiListGetVisibleCount(&work->list))) {
        UiSpriteState *bar = &work->sprites[12];
        efctSetSpeed(vec2GetSpeed(bar));
        s32 y = vec2GetYInt(bar);
        s32 x = vec2GetXInt(bar);
        uiDrawListScrollBar(&work->list, x, y, SORT_MENU_TEXTURES, 67, 68, 69, 63, 65, 64, 66, work->ids[2], work->ids[0],
                            work->ids[1], 251, 0);
        efctSetSpeed(1.0f);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
