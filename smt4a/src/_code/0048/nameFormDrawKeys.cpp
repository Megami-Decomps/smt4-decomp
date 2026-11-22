/* NON_MATCHING: 40 lines, same size, frame and block layout as retail; registers only. The two blend restores (6, 7, 0) form the stack slot's address in r2 and read the previous state into r1 (r1/r2 here, as retail does at the two (6, 1, 0) sets), the kind list's row composite loads the slide offset before the entry's x, and the focused row keeps g_renderCtx's address in r7 and the glow's depth in r8 (swapped here). */
#include "shard/W6_W6Match3_NameFormStateA.h"
#include "shard/W6_W6Match7_FontResource.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The name form's texture table and its entries. */
enum {
    NAME_FORM_TABLE = 0x23,
    NAME_FORM_KEY = 1,              /* composite sprites: a key, the key under the cursor and its glow */
    NAME_FORM_KEY_SELECTED = 2,
    NAME_FORM_KEY_GLOW = 3,
    NAME_FORM_KIND = 4,             /* a row of the kind list, the row under the cursor and its glow */
    NAME_FORM_KIND_SELECTED = 5,
    NAME_FORM_KIND_GLOW = 6,
    NAME_FORM_KEY_GLYPH_POINT = 0x1A,
    NAME_FORM_KEY_MARK = 0x21,      /* drawn over the cursor's key while the countdown runs */
    NAME_FORM_SELECTED_GLYPH_POINT = 0x22,
    NAME_FORM_KIND_LABEL_FIRST = 0x29,
    NAME_FORM_KIND_SELECTED_LABEL_FIRST = 0x32,
    NAME_FORM_KIND_MARK = 0x39,
    NAME_FORM_KEY_POINT_FIRST = 0x56,   /* one per key, row by row */
    NAME_FORM_KIND_POINT_FIRST = 0xC6,  /* one per row of the kind list */
    NAME_FORM_DECORATION_LABEL = 0x14F, /* the kind list's fourth row is drawn from three pieces */
    NAME_FORM_DECORATION_LEFT = 0x151,
    NAME_FORM_DECORATION_RIGHT = 0x152,
    NAME_FORM_KIND_DECORATION_ROW = 3
};

extern "C" {

/* The character code of each key, -1 where the grid has none. */
extern const s16 g_nameFormKeyCodes[NAME_FORM_KEY_ROWS][NAME_FORM_KEY_COLUMNS];

s32 uiSearchSecondary(void *list);
void textDrawEncodedGlyph(void *form, u32 code, s32 x, s32 y, s32 dim, s32 highlighted, f32 alpha);
void FUN_00485108(NameFormStateA *form, s32 x, s32 y, f32 alpha);

/* textDrawEncodedGlyph's body (the same file's glyph draw), as the key loop inlines it: a plain static copy,
 * which armcc inlines as it does the real function (the glyph buffer shares the outgoing arguments' slot and
 * the last efctSetSpeed stays a tail call). */
static void drawEncodedGlyph(void *, u32 code, s32 x, s32 y, s32 dim, s32 highlighted, f32 alpha)
{
    if (code == 0xFFFFFFFF) {
        return;
    }
    FontGlyphResourceOwner *resource = recordTableGet(3);
    FontGlyphLookup *font = resource->font;
    if (!font->vtable->hasGlyph(font, (u16)code) && code != 0) {
        code = 0xFFFF8140;
    }
    f32 drawAlpha = alpha;
    u32 color = 0xFFFFFFFF;
    if (highlighted != 0) {
        color = 0x57D8FFFF;
    }
    if (dim != 0) {
        drawAlpha -= 0.7f;
        if (drawAlpha < 0.0f) {
            drawAlpha = 0.0f;
        }
    }
    {
        char text[3];
        text[0] = (char)(code >> 8);
        text[1] = (char)code;
        text[2] = 0;
        if (highlighted != 0) {
            textDrawString((f32)x, (f32)y, 0.0f, 4, 0.0f, color, drawAlpha, text);
        } else {
            textDrawString((f32)x, (f32)y, 0.0f, 3, 0.0f, color, drawAlpha, text);
        }
    }
    efctSetSpeed(alpha);
}

/* Draws the name form's keys with their characters, the key under the cursor, and the list of character
 * kinds beside them with its own cursor row, all at opacity `alpha`. */
void nameFormDrawKeys(NameFormStateA *form, u8 page, f32 alpha)
{
    for (s32 row = 0; row < NAME_FORM_KEY_ROWS; row++) {
        for (s32 column = 0; column < NAME_FORM_KEY_COLUMNS; column++) {
            if (form->keyboard.cursorColumn == column && form->keyboard.cursorRow == row) {
                continue;
            }
            s16 code = g_nameFormKeyCodes[row][column];
            TextureTableEntryIV *key =
                asdTMTexTableEntryAt(NAME_FORM_TABLE, row * NAME_FORM_KEY_COLUMNS + column + NAME_FORM_KEY_POINT_FIRST);
            texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KEY, form->keyboard.sideOffset + key->x, key->y, 21);
            TextureTableEntryIV *point = asdTMTexTableEntryAt(NAME_FORM_TABLE, NAME_FORM_KEY_GLYPH_POINT);
            drawEncodedGlyph(form, code, form->keyboard.sideOffset + key->x + point->x, key->y + point->y, 0, 0, alpha);
        }
    }

    if (!form->kindListFocused) {
        s16 code = g_nameFormKeyCodes[form->keyboard.cursorRow][form->keyboard.cursorColumn];
        TextureTableEntryIV *key = asdTMTexTableEntryAt(
            NAME_FORM_TABLE,
            form->keyboard.cursorRow * NAME_FORM_KEY_COLUMNS + NAME_FORM_KEY_POINT_FIRST + form->keyboard.cursorColumn);
        texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KEY_SELECTED, form->keyboard.sideOffset + key->x, key->y, 21);
        TextureTableEntryIV *point = asdTMTexTableEntryAt(NAME_FORM_TABLE, NAME_FORM_SELECTED_GLYPH_POINT);
        textDrawEncodedGlyph(form, code, form->keyboard.sideOffset + key->x + point->x, key->y + point->y, 0, 1, alpha);
        if (form->phase == 2) {
            /* The cursor's glow, added over the key. */
            efctSetSpeed(vec2GetSpeed(&form->cursorSprite));
            renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
            texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KEY_GLOW, form->keyboard.sideOffset + key->x, key->y, 31);
            if (form->countdown > 0) {
                texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, NAME_FORM_KEY_MARK, form->keyboard.sideOffset + key->x,
                                                key->y, 31);
            }
            renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
            efctSetSpeed(alpha);
        }
    }

    if (form->keyboard.kindListHidden) {
        return;
    }
    for (s32 i = 0; i < uiSearchSecondary(form->kindList); i++) {
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(NAME_FORM_TABLE, i + NAME_FORM_KIND_POINT_FIRST);
        if (i == NAME_FORM_KIND_DECORATION_ROW) {
            s32 x = form->keyboard.sideOffset + entry->x;
            s32 y = entry->y;
            efctSetSpeed(alpha);
            texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, NAME_FORM_DECORATION_LEFT, x, y, 21);
            texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, NAME_FORM_DECORATION_RIGHT, x, y, 21);
            texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, NAME_FORM_DECORATION_LABEL, x, y, 26);
        } else {
            texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KIND, entry->x + form->keyboard.sideOffset, entry->y, 21);
            texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, i + NAME_FORM_KIND_LABEL_FIRST,
                                            form->keyboard.sideOffset + entry->x, entry->y, 26);
            efctSetSpeed(alpha);
        }
    }

    if (!form->kindListFocused) {
        return;
    }
    s32 row = listCursorGetRowOfChildIfUnblocked(form->kindList);
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(NAME_FORM_TABLE, row + NAME_FORM_KIND_POINT_FIRST);
    if (row == NAME_FORM_KIND_DECORATION_ROW) {
        FUN_00485108(form, form->keyboard.sideOffset + entry->x, entry->y, alpha);
    } else {
        texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KIND_SELECTED, form->keyboard.sideOffset + entry->x, entry->y,
                               31);
        texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, row + NAME_FORM_KIND_SELECTED_LABEL_FIRST,
                                        form->keyboard.sideOffset + entry->x, entry->y, 36);
        efctSetSpeed(1.0f);
        efctSetSpeed(vec2GetSpeed(&form->cursorSprite));
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
        texDrawCompositeSprite(2, NAME_FORM_TABLE, NAME_FORM_KIND_GLOW, form->keyboard.sideOffset + entry->x, entry->y, 41);
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        if (form->countdown > 0) {
            texDrawTableEntryAtStoredOrigin(2, NAME_FORM_TABLE, NAME_FORM_KIND_MARK, form->keyboard.sideOffset + entry->x,
                                            entry->y, 41);
        }
    }
    efctSetSpeed(alpha);
}

} /* extern "C" */
