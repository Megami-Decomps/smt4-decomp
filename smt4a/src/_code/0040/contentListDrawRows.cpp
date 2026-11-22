/* NON_MATCHING: same instructions, frame and block layout, 30 rows differ. Retail keeps x in r9 and the focused
 * entry in sl (here sl and r9), spills the first-set flag to sp+28 and the plate colour to sp+24 (here the other way
 * round) and, for the focused row, adds the entry's x before its y and stores the pressed flag first. */
#include "common.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "addon/ContentListScreen.h"
#include "gamedata/GameDataAccess.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

struct Object;
u32 tableFlagBit1(s32 index);
u32 tableFlagBit2(s32 index);
void contentListDrawRow(ContentListScreen *screen, f32 speed, u32 id, s32 x, s32 y, s32 useFirstSet, s32 useSecondSet);
void contentListDrawFocusedRow(ContentListScreen *screen, u16 id, s32 x, s32 y, f32 speed, u32 useFirstSet, u32 useSecondSet, u32 color);
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                         u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                         u32 arrowBRegion, s32 layer, s32 horizontal);

/* Draws the cursor frame and glow of the focused row at (x, y), brighter while the row is pressed.
 * Retail shows this body inlined with its by-value parameters: `pressed` is copied from r4 to its own slot
 * (sp+64), x to sp+8, and `alpha` into s1 before each product (`vmov.f32 s1, s16; vmul.f32 s0, s0, s1`); written
 * in place, armcc keeps the flag in one slot and multiplies by s16 directly (57 rows off instead of 30). */
static void drawFocusFrame(ContentListScreen *screen, s32 x, s32 y, f32 alpha, bool pressed)
{
    if (screen->state != CONTENT_LIST_STATE_NO_CURSOR) {
        efctSetSpeed(vec2GetSpeed(&screen->sprites[CONTENT_LIST_SPRITE_CURSOR]) * alpha);
        for (s32 i = 0; i < 3; i++) {
            texDrawTableEntryAtStoredOrigin(2, 0x32, i + 0x7d, x, y, 0x7e);
        }
        efctSetSpeed(alpha);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x80, x, y, 0x7e);
        s32 glow;
        if (pressed) {
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0xa2, x, y, 0x83);
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0xa3, x, y, 0x83);
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0xa4, x, y, 0x88);
            glow = 0xa5;
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0x81, x, y, 0x83);
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0x82, x, y, 0x83);
            texDrawTableEntryAtStoredOrigin(2, 0x32, 0x83, x, y, 0x88);
            glow = 0xa1;
        }
        efctSetSpeed(vec2GetSpeed(&screen->sprites[CONTENT_LIST_SPRITE_GLOW]) * alpha);
        texDrawTableEntryAtStoredOrigin(2, 0x32, glow, x, y, 0x8d);
        efctSetSpeed(1.0f);
    }
}

/* Draws the content list: the window, a plate for each visible row, the enlarged row under the cursor with
 * its cursor frame and glow, the scroll bar and, from the detail state on, the cover over the list. */
void contentListDrawRows(ContentListScreen *screen)
{
    s32 x = vec2GetXInt(&screen->sprites[CONTENT_LIST_SPRITE_WINDOW]);
    s32 y = vec2GetYInt(&screen->sprites[CONTENT_LIST_SPRITE_WINDOW]);
    f32 alpha = vec2GetSpeed(&screen->sprites[CONTENT_LIST_SPRITE_WINDOW]);
    s32 drawX = x;  /* where the current piece goes: the window, then the focused row */
    s32 drawY = y;

    efctSetSpeed(alpha);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4d, drawX, drawY, 0x60);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4e, drawX, drawY, 0x60);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4a, drawX, drawY, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4b, drawX, drawY, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4c, drawX, drawY, 0x66);
    for (s32 i = 0; i < 9; i++) {
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x4f + i * 2, drawX, drawY, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x50 + i * 2, drawX, drawY, 0x6a);
    }
    efctSetSpeed(1.0f);

    for (s32 row = 0; row < 10; row++) {
        if (row >= screen->rowCount) {
            break;
        }
        u16 id = screen->ids[screen->firstRow + row];
        u32 useFirstSet = tableFlagBit1(id);
        u32 useSecondSet = tableFlagBit2(id);
        if (screen->focusedRow == row) {
            TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x32, row + 0x72);
            u32 color = 0x9fe7ffff;
            bool pressed = false;
            s32 mode = recordGetModeForId(screen->rowRegions[row]);
            if (mode == 1 || mode == 2 || mode == 6) {
                color = 0xf5ff9fff;
                pressed = true;
            }
            drawX = entry->x + x;
            drawY = entry->y + y;
            drawFocusFrame(screen, drawX, drawY, alpha, pressed);
            contentListDrawFocusedRow(screen, id, entry->x + x, entry->y + y, alpha, useFirstSet, useSecondSet, color);
        } else {
            TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x32, row + 0x67);
            contentListDrawRow(screen, alpha, id, entry->x + x, entry->y + y, useFirstSet, useSecondSet);
        }
    }

    efctSetSpeed(alpha);
    uiDrawListScrollBar((Object *)screen->scroller, x, y, 0x32, 0x88, 0x89, 0x8a, 0x84, 0x85, 0x86, 0x87,
                        screen->scrollThumbRegion, screen->scrollUpRegion, screen->scrollDownRegion, 0x6a, 0);
    if (screen->state >= CONTENT_LIST_STATE_DETAIL) {
        efctSetSpeed(alpha);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x95, x, y, 0x97);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
