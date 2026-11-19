/* NON_MATCHING: readable rebuild of the status-down menu draw; retail enters the shared "unselected cell" test by goto from two branches and keeps the cursor row and the highlight flag in registers across the calls, and the banner text literal is the draft's decoding of the original bytes. */
#include <stdio.h>
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
void FUN_002f67c4(s32 card, s32 x, s32 y, s32 order);
void FUN_0037e5c0(s32 card, s32 x, s32 y);

/* Draws the status-down card row and, while confirming, the highlighted card's banner. */
void FUN_00289418(s32 x, s32 y, f32 alpha)
{
    StatusDownStateA *screen = g_statusDown;
    s32 cursor = listCursorGetRowIfUnblocked(&screen->menu.controller);
    bool highlighted = false;
    if (cursor >= screen->menu.count && screen->menu.confirming != 0) {
        highlighted = true;
        u32 color = 0x9FE7FFFF;
        TextureTableEntryIV *banner = asdTMTexTableEntryAt(0x12, 0x58D);
        s32 mode = recordGetModeForId(screen->slots[screen->menu.selectedCard]);
        bool special = mode == 1 || mode == 2 || mode == 6;
        if (special)
            color = 0xF5FF9FFF;
        FUN_00334c6c(banner->x + x, banner->y + y, special);
        efctSetSpeed(alpha);
        u8 text[44];
        sprintf((char *)text, "撂躂蒂＀");
        s32 textWidth = fontMeasureLineAdvance(text, 3);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x12, 0x579);
        textDrawString(3, color, (const char *)text, (f32)(x + banner->x + (banner->placement->width - textWidth) / 2),
                     (f32)(label->y + banner->y + y), 0.2f, 0.0f, alpha);
        efctSetSpeed(1.0f);
    } else {
        statusDownDrawEndBanner(x, y, alpha);
    }
    if (screen->menu.confirming == 0) {
        TextureTableEntryIV *first = asdTMTexTableEntryAt(0x12, screen->menu.selection[0] + 0x566);
        FUN_002f67c4(screen->menu.selection[0], first->x + x, y + vec2GetYInt(&screen->sprites[7]) + first->y, 0x65);
        TextureTableEntryIV *second = asdTMTexTableEntryAt(0x12, screen->menu.selection[1] + 0x566);
        FUN_002f67c4(screen->menu.selection[1], second->x + x, second->y + y + vec2GetYInt(&screen->sprites[7]), 0x65);
    }
    for (s32 i = 0; i < 8; i++) {
        bool skipped = i == cursor && !highlighted;
        if (screen->menu.confirming != 0) {
            if (!skipped) {
                TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, i + 0x566);
                FUN_002f67c4(i, point->x + x, point->y + y, 0x97);
            }
        } else if (screen->menu.selection[0] != i && screen->menu.selection[1] != i) {
            TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, i + 0x566);
            FUN_002f67c4(i, point->x + x, point->y + y, 0x97);
        }
    }
    if (!highlighted && screen->menu.confirming != 0) {
        TextureTableEntryIV *point = asdTMTexTableEntryAt(0x12, cursor + 0x585);
        FUN_0037e5c0(cursor, point->x + x, point->y + y);
    }
}

} /* extern "C" */
