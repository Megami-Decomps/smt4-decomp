#include "ui/HowToScreen.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "gamedata/GameDataAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The how-to texture table and the list's entries in it. */
enum {
    HOW_TO_TABLE = 51,
    HOW_TO_ROW_TITLE = 90,              /* where a row's title is drawn, from the row's origin */
    HOW_TO_ROW_NEW_MARK = 91,
    HOW_TO_ROW_FIRST = 93,              /* the ten rows' origins */
    HOW_TO_CURSOR_FRAME_FIRST = 103,    /* three frame pieces, then the frame's plate */
    HOW_TO_CURSOR_PLATE = 106,
    HOW_TO_CURSOR_EDGE_FIRST = 107,     /* three edge pieces */
    HOW_TO_CURSOR_SHINE = 110,
    HOW_TO_CURSOR_TITLE = 111,
    HOW_TO_CURSOR_NEW_MARK = 112,
    HOW_TO_CURSOR_ROW_FIRST = 113,      /* the ten rows' origins for the selected row */
    HOW_TO_NEW_MARK_FIRST = 123,        /* three pieces of the "new" mark */
    HOW_TO_ROW_PLATE = 127,
    HOW_TO_CURSOR_GLOW = 128,
    HOW_TO_CURSOR_PRESSED_EDGE_FIRST = 129, /* the edge pieces while the row is touched */
    HOW_TO_CURSOR_PRESSED_GLOW = 132
};

extern "C" {
s32 flagsAtGetBit1(u16 id);
}

/* Draws the three pieces of a row's "new" mark at (x, y) on `layer`. Both rows call it; retail shares one copy
 * of its loop between them and sets the layer before the opacity call, as an argument. */
static void drawNewMark(s32 x, s32 y, f32 alpha, s32 layer)
{
    efctSetSpeed(alpha);
    for (s32 i = 0; i < 3; i++) {
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, i + HOW_TO_NEW_MARK_FIRST, x, y, layer);
    }
    efctSetSpeed(1.0f);
}

/* Draws the cursor frame and glow of the selected row at (x, y), brighter while the row is touched: the how-to
 * list's copy of the content list's drawFocusFrame (contentListDrawRows). Retail shows the body inlined with its
 * by-value parameters: `pressed` goes from r4 to its own stack slot and `alpha` is copied into s1 before the
 * glow's product (`vmov.f32 s1, s16; vmul.f32 s0, s0, s1`). */
static void drawCursorFrame(HowToScreenWork *work, s32 x, s32 y, f32 alpha, bool pressed)
{
    efctSetSpeed(vec2GetSpeed(&work->sprites[2]) * alpha);
    for (s32 i = 0; i < 3; i++) {
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, i + HOW_TO_CURSOR_FRAME_FIRST, x, y, 171);
    }
    efctSetSpeed(alpha);
    texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_PLATE, x, y, 171);
    s32 glow;
    if (pressed) {
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_PRESSED_EDGE_FIRST, x, y, 172);
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_PRESSED_EDGE_FIRST + 1, x, y, 172);
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_PRESSED_EDGE_FIRST + 2, x, y, 172);
        glow = HOW_TO_CURSOR_PRESSED_GLOW;
    } else {
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_EDGE_FIRST, x, y, 172);
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_EDGE_FIRST + 1, x, y, 172);
        texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_EDGE_FIRST + 2, x, y, 172);
        glow = HOW_TO_CURSOR_GLOW;
    }
    efctSetSpeed(vec2GetSpeed(&work->sprites[3]) * alpha);
    texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, glow, x, y, 172);
    efctSetSpeed(1.0f);
}

/* Draws a row that is not selected: its plate, title and "new" mark. The content list has this as its own
 * function (contentListDrawRow); here retail inlined it. The title's position is its own pair of values: retail
 * forms both sums in core registers before any of the call's arguments and converts them afterwards, y first
 * (`add ip, r1, r5; add r3, r0, r4; vmov s0, r3; ... vcvt.f32.s32 s1, s0`). */
static void drawRow(HowToRecord *record, s32 x, s32 y, f32 alpha)
{
    efctSetSpeed(alpha);
    texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_ROW_PLATE, x, y, 161);
    TextureTableEntryIV *titleAt = asdTMTexTableEntryAt(HOW_TO_TABLE, HOW_TO_ROW_TITLE);
    s32 titleX = titleAt->x + x;
    s32 titleY = titleAt->y + y;
    textDrawString((f32)titleX, (f32)titleY, 0.37109375f, 2, 0.0f, 0xffffffff, alpha, record->title);
    if (flagsAtGetBit1(record->id) != 0) {
        TextureTableEntryIV *markAt = asdTMTexTableEntryAt(HOW_TO_TABLE, HOW_TO_ROW_NEW_MARK);
        x += markAt->x;
        y += markAt->y;
        drawNewMark(x, y, alpha, 166);
        efctSetSpeed(1.0f);
    }
}

/* Draws the selected row over its cursor frame: the shine, the title and the "new" mark (the content list's
 * contentListDrawFocusedRow). Retail keeps `color` in a callee-saved register from the call on. */
static void drawSelectedRow(HowToRecord *record, s32 x, s32 y, f32 alpha, u32 color)
{
    efctSetSpeed(alpha);
    texDrawTableEntryAtStoredOrigin(2, HOW_TO_TABLE, HOW_TO_CURSOR_SHINE, x, y, 181);
    TextureTableEntryIV *titleAt = asdTMTexTableEntryAt(HOW_TO_TABLE, HOW_TO_CURSOR_TITLE);
    s32 titleX = titleAt->x + x;
    s32 titleY = titleAt->y + y;
    textDrawString((f32)titleX, (f32)titleY, 0.29296875f, 3, 0.0f, color, alpha, record->title);
    if (flagsAtGetBit1(record->id) != 0) {
        TextureTableEntryIV *markAt = asdTMTexTableEntryAt(HOW_TO_TABLE, HOW_TO_CURSOR_NEW_MARK);
        x += markAt->x;
        y += markAt->y;
        drawNewMark(x, y, alpha, 186);
        efctSetSpeed(1.0f);
    }
}

extern "C" {

/* Draws the how-to list's ten visible rows at (x, y): each row's plate and title, the selected row's cursor
 * frame (lit while it is touched) and the "new" mark of the pages not read yet. */
void howToDrawRows(HowToScreenWork *work, s32 x, s32 y, f32 alpha)
{
    for (s32 row = 0; row < 10; row++) {
        s32 id = work->entryIds[work->scroll + row];
        if (id <= 0) {
            break;
        }
        HowToRecord *record = &work->table.records[id];
        s32 rowX;
        s32 rowY;
        if (work->cursor == row) {
            TextureTableEntryIV *origin = asdTMTexTableEntryAt(HOW_TO_TABLE, row + HOW_TO_CURSOR_ROW_FIRST);
            rowX = origin->x + x;
            rowY = origin->y + y;
            bool pressed = false;
            u32 color = 0x9fe7ffff;
            s32 mode = recordGetModeForId(work->rowRegions[row]);
            if (mode == 1 || mode == 2 || mode == 6) {
                pressed = true;
                color = 0xf5ff9fff;
            }
            drawCursorFrame(work, rowX, rowY, alpha, pressed);
            drawSelectedRow(record, rowX, rowY, alpha, color);
        } else {
            TextureTableEntryIV *origin = asdTMTexTableEntryAt(HOW_TO_TABLE, row + HOW_TO_ROW_FIRST);
            rowX = origin->x + x;
            rowY = origin->y + y;
            drawRow(record, rowX, rowY, alpha);
        }
    }
}

} /* extern "C" */
