/* NON_MATCHING: the frame size, scroll loop and draw order follow retail. The prologue schedules
 * the sprite address early, the pressed-badge arm is laid out differently, and argument moves differ. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code0029.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002e.h"
#include "gamedata/DataTableAccess_Smt4.h"
#include "gamedata/GameDataAccess.h"
#include "runtime/Stdio.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"

extern "C" {
u16 dataTable0BGetValueById(u32 id);
u8 appCheckPurchaseRequirements(u32 id);
s32 resourceRunOperationIfUnblocked(void *widget);
void drawSetColorFromRGBA8(u32 color);
void textDrawFormattedAligned(u32 kind, s32 x, s32 y, u32 align, u32 digits, u32 slot, const char *format, ...);
void fadeObjectResetIfActive(UiSpriteState *sprite);
u8 ifTouchGetSelectionModeForRegion(s32 region);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                        u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                        u32 arrowBRegion, s32 layer, s32 horizontal);
} /* extern "C" */

enum {
    GAUNTLET_TEXTURES = 0x1D,
    GAUNTLET_APP_HIGHLIGHT = 2,
    GAUNTLET_APP_PREVIEW = 3,
    GAUNTLET_APP_FADE = 5,
    GAUNTLET_PRICE_NORMAL = 0,
    GAUNTLET_PRICE_UNAFFORDABLE = 1,
    GAUNTLET_PRICE_HIDDEN = 2,
    GAUNTLET_FRAME_SPRITE = 0,
    GAUNTLET_CURSOR_SPRITE = 1,
    GAUNTLET_DETAILS_SPRITE = 2,
    GAUNTLET_FADE_SPRITE = 3
};

/* Draws the app list, redrawing the selected row above the highlight when it is open. */
extern "C" void gauntletAppMenuDrawScreen(GauntletAppMenuWork *menu)
{
    const s32 x = vec2GetXInt(&menu->list.sprites[GAUNTLET_FRAME_SPRITE]);
    const s32 y = vec2GetYInt(&menu->list.sprites[GAUNTLET_FRAME_SPRITE]);
    u32 labelColor = 0;
    u32 priceColor = 0;
    char number[64];
    texDrawCompositeSprite(2, GAUNTLET_TEXTURES, 9, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x57C, x, y, 0x6A);
    texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x57D, x, y, 0x6A);
    texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x57E, x, y, 0x6A);
    texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x57F, x, y, 0x6A);
    const TextureTableEntryIV *balance = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x583);
    __2sprintf(number, "%u", gameSaveGetPoints());
    textDrawFormattedAligned(0, balance->x + x, balance->y + y, 1, 4, 0x6A, number);
    for (s32 row = 0; row < (s32)uiListGetVisibleCount(menu->list.controller); ++row) {
        if ((menu->list.mode == GAUNTLET_APP_HIGHLIGHT || menu->list.mode == GAUNTLET_APP_PREVIEW) &&
            listCursorGetRowIfUnblocked(menu->list.controller) == row) {
            continue;
        }
        const u32 app = menu->list.entries[resourceRunOperationIfUnblocked(menu->list.controller) + row];
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, row + 0x40E);
        const TextureTableEntryIV *icon = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x58F);
        gauntletAppDrawCategoryLabel((u16)app, position->x + icon->x + x, position->y + icon->y + y, 0x6A);
        if (flagBitIsSet(app)) {
            labelColor = 0x008400FF;
            const TextureTableEntryIV *ownedMark = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x595);
            texDrawCompositeSprite(2, GAUNTLET_TEXTURES, 8, position->x + ownedMark->x + x,
                                   position->y + ownedMark->y + y, 0x6A);
        } else {
            texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x58B, position->x + x, position->y + y, 0x6A);
            texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x58C, position->x + x, position->y + y, 0x6A);
            texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x58D, position->x + x, position->y + y, 0x6A);
            switch (appCheckPurchaseRequirements(app)) {
            case GAUNTLET_PRICE_NORMAL:
                labelColor = 0x000000FF;
                priceColor = 0xFFFFFFFF;
                __2sprintf(number, "%d", (s32)dataTable0BGetValueById(app));
                break;
            case GAUNTLET_PRICE_UNAFFORDABLE:
                labelColor = 0x5A5A5AFF;
                priceColor = 0xDC0F14FF;
                __2sprintf(number, "%d", (s32)dataTable0BGetValueById(app));
                break;
            case GAUNTLET_PRICE_HIDDEN:
                labelColor = 0x5A5A5AFF;
                priceColor = 0x787878FF;
                __2sprintf(number, "???");
                break;
            }
            const TextureTableEntryIV *cost = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x594);
            drawSetColorFromRGBA8(priceColor);
            textDrawFormattedAligned(0, position->x + cost->x + x, position->y + cost->y + y, 1, 4, 0x6F, number);
            gxResetColorQuadToWhite();
        }
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x590);
        const char *name = (const char *)dataTable0BFindById(app);
        textDrawString((f32)(position->x + label->x + x), (f32)(position->y + label->y + y), 0.5859375f,
                       2, 0.0f, labelColor, 1.0f, name);

    }

    if (menu->list.mode == GAUNTLET_APP_HIGHLIGHT || menu->list.mode == GAUNTLET_APP_PREVIEW) {
        const s32 firstRow = resourceRunOperationIfUnblocked(menu->list.controller);
        const u32 app = menu->list.entries[firstRow + listCursorGetRowIfUnblocked(menu->list.controller)];
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(GAUNTLET_TEXTURES,
                                                                 listCursorGetRowIfUnblocked(menu->list.controller) + 0x42F);
        efctSetSpeed(vec2GetSpeed(&menu->list.sprites[GAUNTLET_CURSOR_SPRITE]));
        texDrawCompositeSprite(2, GAUNTLET_TEXTURES, 6, position->x + x, position->y + y, 0x79);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x429, position->x + x, position->y + y, 0x7E);
        const u8 touchMode = ifTouchGetSelectionModeForRegion(menu->touch.regions[listCursorGetRowIfUnblocked(menu->list.controller)]);
        const bool pressed = touchMode == 1 || touchMode == 2 || touchMode == 6;
        if (!pressed) {
            texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x42A, position->x + x, position->y + y, 0x83);
        } else {
            texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x42B, position->x + x, position->y + y, 0x83);
        }
        const TextureTableEntryIV *clip = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x42A);
        const s32 detailX = vec2GetXInt(&menu->list.sprites[GAUNTLET_DETAILS_SPRITE]);
        const s32 detailY = vec2GetYInt(&menu->list.sprites[GAUNTLET_DETAILS_SPRITE]);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, RENDER_STATE_SCISSOR);
        gxSetMirroredClippedScissor(position->x + clip->x + x, position->y + clip->y + y,
                                   position->placement->width, position->placement->height, 1);
        texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x42C,
                                        position->x + x + detailX, position->y + y + detailY, 0x88);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
        texDrawTableEntryAtStoredOrigin(2, GAUNTLET_TEXTURES, 0x596, position->x + x, position->y + y, 0x8D);
        const TextureTableEntryIV *icon = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x598);
        gauntletAppDrawCategoryLabel((u16)app, position->x + icon->x + x, position->y + icon->y + y, 0x92);
        if (flagBitIsSet(app)) {
            labelColor = 0x72E027FF;
            const TextureTableEntryIV *ownedMark = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x59E);
            texDrawCompositeSprite(2, GAUNTLET_TEXTURES, 8, position->x + ownedMark->x + x,
                                   position->y + ownedMark->y + y, 0x92);
        } else {
            switch (appCheckPurchaseRequirements(app)) {
            case GAUNTLET_PRICE_NORMAL:
                priceColor = 0xFFFFFFFF;
                labelColor = 0xFFFFFFFF;
                __2sprintf(number, "%d", (s32)dataTable0BGetValueById(app));
                break;
            case GAUNTLET_PRICE_UNAFFORDABLE:
                labelColor = 0x787878FF;
                priceColor = 0xDC0F14FF;
                __2sprintf(number, "%d", (s32)dataTable0BGetValueById(app));
                break;
            case GAUNTLET_PRICE_HIDDEN:
                labelColor = priceColor = 0x787878FF;
                __2sprintf(number, "???");
                break;
            }
            const TextureTableEntryIV *cost = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x59D);
            drawSetColorFromRGBA8(priceColor);
            textDrawFormattedAligned(0, position->x + cost->x + x, position->y + cost->y + y, 1, 4, 0x97, number);
            gxResetColorQuadToWhite();
        }
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x599);
        const char *name = (const char *)dataTable0BFindById(app);
        textDrawString((f32)(position->x + label->x + x), (f32)(position->y + label->y + y), 0.4296875f,
                       3, 0.0f, labelColor, 1.0f, name);

    }
    uiDrawListScrollBar(menu->list.controller, x, y, GAUNTLET_TEXTURES, 0x56A, 0x56B, 0x56C,
                        0x566, 0x568, 0x567, 0x569, menu->touch.regions[13], menu->touch.regions[11],
                        menu->touch.regions[12], 0x97, 0);
    if (menu->list.mode == GAUNTLET_APP_FADE) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        fadeObjectResetIfActive(&menu->list.sprites[GAUNTLET_FADE_SPRITE]);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
}
