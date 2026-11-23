/* NON_MATCHING: 134 lines. The card draws take the alpha (the two selections scaled by their sprites' opacity,
 * vec2GetSpeed), the banner text is formatted with __2sprintf from its global format, the menu is reached through
 * its sub-struct pointer and the card loop is written with continues (retail's shared draw block). Left: in the
 * confirm banner retail rereads g_statusDown, spills the colour, the special flag and the menu address to the
 * stack (a 76-byte frame, text at sp+40) and keeps 1.0f in s17 from entry. */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "status/StatusDownA.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The status-down screen. */

extern "C" {

s32 listCursorGetRowIfUnblocked(GridNavigation *cursor);
s32 recordGetModeForId(s32 id);
void FUN_00334c6c(s32 x, s32 y, s32 flag);
void efctSetSpeed(f32 alpha);
s32 fontMeasureLineAdvance(u8 *text, s32 font);
void statusDownDrawEndBanner(s32 x, s32 y, f32 alpha);
void FUN_002f67c4(s32 card, s32 x, s32 y, s32 order, f32 alpha);
void FUN_0037e5c0(s32 card, s32 x, s32 y, f32 alpha);

extern const char g_statusDownEndBannerText[]; /* the confirm banner's text */

/* Draws the status-down card row and, while confirming, the highlighted card's banner. */
void statusDownDrawCardRow(s32 x, s32 y, f32 alpha)
{
    StatusDownStateA *screen = g_statusDown;
    StatusDownSkillMenuA *menu = &screen->menu;
    s32 cursor = listCursorGetRowIfUnblocked(&screen->menu.controller);
    bool highlighted = false;

    if (cursor >= menu->count && menu->confirming != 0) {
        highlighted = true;
        u32 color = 0x9FE7FFFF;
        s32 special = 0;
        TextureTableEntryIV *banner = asdTMTexTableEntryAt(0x12, 0x58D);
        s32 mode = recordGetModeForId(g_statusDown->slots[g_statusDown->menu.selectedCard]);

        if (mode == 1 || mode == 2 || mode == 6) {
            special = 1;
            color = 0xF5FF9FFF;
        }
        FUN_00334c6c(banner->x + x, banner->y + y, special);
        efctSetSpeed(alpha);
        char text[36];
        __2sprintf(text, g_statusDownEndBannerText);
        s32 textWidth = fontMeasureLineAdvance((u8 *)text, 3);
        s32 textX = x + (banner->x + (banner->placement->width - textWidth) / 2);
        s32 textY = banner->y + y;
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x12, 0x579);

        textDrawString((f32)textX, (f32)(label->y + textY), 0.2f, 3, 0.0f, color, alpha, text);
        efctSetSpeed(1.0f);
    } else {
        statusDownDrawEndBanner(x, y, alpha);
    }
    if (menu->confirming == 0) {
        s32 offset = vec2GetYInt(&screen->sprites[7]);
        f32 fade = vec2GetSpeed(&screen->sprites[7]);
        s32 card = menu->selection[0];
        TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, card + 0x566);

        FUN_002f67c4(card, point->x + x, y + offset + point->y, 0x65, alpha * fade);
        offset = vec2GetYInt(&screen->sprites[8]);
        fade = vec2GetSpeed(&screen->sprites[8]);
        card = menu->selection[1];
        point = asdTMTexTableEntryAt(0x12, card + 0x566);
        FUN_002f67c4(card, point->x + x, point->y + (y + offset), 0x65, alpha * fade);
    }
    for (s32 i = 0; i < 8; i++) {
        if (i == cursor && !highlighted) {
            if (menu->confirming != 0)
                continue;
        } else if (menu->confirming != 0) {
            TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, i + 0x566);
            FUN_002f67c4(i, point->x + x, point->y + y, 0x97, alpha);
            continue;
        }
        if (menu->selection[0] == i || menu->selection[1] == i)
            continue;
        {
            TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, i + 0x566);
            FUN_002f67c4(i, point->x + x, point->y + y, 0x97, alpha);
        }
    }
    if (!highlighted && menu->confirming != 0) {
        TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, cursor + 0x585);
        FUN_0037e5c0(cursor, point->x + x, point->y + y, alpha);
    }
}

} /* extern "C" */
