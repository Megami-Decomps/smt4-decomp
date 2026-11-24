/* NON_MATCHING: complete rewrite, 472 lines (356 by shape): the same blocks, calls and arguments as retail. Retail
 * keeps the window in r5 and the parallax in r4 (r4/r5 here, about half the lines); it tests `window != NULL` and
 * reloads the state at each of the three window tests (finished and unlocked, open, finished) where the build
 * merges them into one chain; it reads a card's alphaDone into a saved register before the scale getter and keeps
 * the kind-12 line count in a stack slot; and it sets up the debug rectangles' float arguments in another order. */
#include "ui/MessageMain.h"
#include "ui/MessageControl.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/RenderCtxSelect.h"
#include "ui/UiSpriteApi.h"
#include "gfx/StereoParallax.h"
#include "shard/JobWork.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match8_TitleOverlay.h"
#include "util/BitsAndBytes.h"
#include "code/Code002b.h"
#include "code/Code0012_Smt4.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_AsdText.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The message sprite table and the window's entries in it. */
enum {
    MESSAGE_TABLE = 14,
    MESSAGE_PLAIN_BACKDROP = 262,
    MESSAGE_CURSOR = 6,                 /* the advance cursor and its shadow */
    MESSAGE_CURSOR_SHADOW = 7,
    MESSAGE_CURSOR_HELD = 0x117,        /* the same pair while the advance button is held */
    MESSAGE_CURSOR_HELD_SHADOW = 0x116,
    MESSAGE_WIDE_CURSOR = 222,          /* the pair the wide layouts draw at an anchor entry */
    MESSAGE_WIDE_CURSOR_SHADOW = 223,
    MESSAGE_WIDE_CURSOR_ANCHOR_9 = 224,
    MESSAGE_WIDE_CURSOR_ANCHOR_7 = 225,
    MESSAGE_PROMPT = 0x182,             /* the page prompt and its pulsing overlay */
    MESSAGE_PROMPT_OVERLAY = 0x183,
    MESSAGE_LINES = 0x7D8,              /* the dialogue layouts' three text lines (touch regions up to 0x7DB) */
    MESSAGE_WIDE_LINES_7 = 107,
    MESSAGE_WIDE_LINES_9 = 105,
    MESSAGE_SPEAKER = 66,               /* the speaker name's plate */
    MESSAGE_CARD_TEXT = 142,            /* a kind-12 card's text origin */
    MESSAGE_CARD_SPRITE = 7             /* the first of the five card sprites */
};

/* A colour byte as the float component the rectangle draw takes. */
#define COLOR_BYTE(value) ((value) * (1.0f / 255.0f))

struct EntryList;

extern "C" {
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 value); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
s32 renderCtxPopState(RenderCtx *context, s32 stack); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void efctSetSpeed(f32 speed); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void gxResetColorQuadToWhite(); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void titleOverlayDraw(TitleOverlay *overlay);
void messageBannerDrawCounterPlates(s32 wide);
u32 entryListCurrentIsUsable(EntryList *list);
u8 ifTouchIsActive(void);
u32 FUN_002b753c(int *text);
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 horizontalOffset);
void textDrawRangeFaded(const void *text, s32 x, s32 y, s32 fade, u32 start, s32 length, f32 scale);
f32 asdTextDrawAtInt(AsdText *text, s32 x, s32 y, s32 layer, f32 alpha);

/* The message window's draw task: the window's backdrop and overlay, its advance cursor or page prompt, then the
 * text (the dialogue lines and speaker name, or the kind-12 cards' lines). Returns 0. */
s32 messageWindowDraw(u32 job)
{
    MessageWindow *window = (MessageWindow *)jobGetWork(job);
    if (window == g_messageMain.banner && g_messageMain.banner->wideValue != 0 &&
        g_messageMain.banner->alternateAnimation != 0) {
        messageBannerDrawCounterPlates(1);
    }
    if (window->activeState != 0) {
        return 0;
    }
    if (window->state == 0 && window->closeRequested == 0) {
        return 0;
    }
    renderCtxSelectTexture(g_titleScene, asdTMTexTableCallFileB(MESSAGE_TABLE, 0)->loaded.texture);
    renderCtxSelectStereoLayout(g_titleScene);

    switch (window->mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 16:
    case 17:
    case 18: {
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        if (window->mode == 7 || window->mode == 9) {
            efctSetSpeed(vec2GetSpeed(&window->sprites[0]));
            renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
            texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_PLAIN_BACKDROP, 0, 0, 6);
            renderCtxPopState(g_titleScene, 3);
            efctSetSpeed(1.0f);
        }
        titleOverlayDraw((TitleOverlay *)window);
        if ((window->flags & 0x20) != 0) {
            break;
        }
        /* The advance cursor, until the finished window may close. */
        if (!(window != NULL && window->state == 4 && window->closeLocked == 0) &&
            window != NULL && window->state != 0) {
            if (entryListCurrentIsUsable((EntryList *)window->box) ||
                (window->state == 4 && window->closeLocked != 0)) {
                renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
                s32 x = vec2GetXInt(&window->sprites[4]) + parallax;
                s32 y = vec2GetYInt(&window->sprites[4]);
                efctSetSpeed(1.0f);
                gxResetColorQuadToWhite();
                if (window->mode == 7 || window->mode == 8) {
                    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_WIDE_CURSOR_ANCHOR_7);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_WIDE_CURSOR_SHADOW, anchor->x + parallax,
                                                    anchor->y, 19);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_WIDE_CURSOR, anchor->x + x,
                                                    anchor->y + y, 21);
                } else if (window->mode == 9) {
                    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_WIDE_CURSOR_ANCHOR_9);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_WIDE_CURSOR_SHADOW, anchor->x + parallax,
                                                    anchor->y, 19);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_WIDE_CURSOR, anchor->x + x,
                                                    anchor->y + y, 21);
                } else if (g_messageControl.latched == 0 || window->closeLocked != 0) {
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_CURSOR_SHADOW, parallax, 0, 19);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_CURSOR, x, y, 21);
                } else {
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_CURSOR_HELD_SHADOW, parallax, 0, 19);
                    renderStackPushIndexed(g_titleScene, 6, packNibblesAndByte(6, 1, 0));
                    efctSetSpeed(g_messageControl.cursorOpacity);
                    texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_CURSOR_HELD, x, 0, 21);
                    efctSetSpeed(1.0f);
                    renderCtxPopState(g_titleScene, 6);
                }
                renderCtxPopState(g_titleScene, 3);
            }
            if ((window->flags & 0x20) != 0) {
                break;
            }
        }
        /* The page prompt of a finished dialogue window, while no banner or lock is in the way. */
        if (window != NULL && window->state == 4) {
            if (g_messageMain.banner->state == 0 || g_messageMain.banner->closeLocked != 0 ||
                g_messageMain.window->closeLocked != 0) {
                break;
            }
            s32 x = vec2GetXInt(&window->sprites[4]) + parallax;
            vec2GetYInt(&window->sprites[4]);
            renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
            efctSetSpeed(1.0f);
            texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_PROMPT, parallax, (s32)window->promptY, 26);
            renderStackPushIndexed(g_titleScene, 6, packNibblesAndByte(6, 1, 0));
            efctSetSpeed(window->promptOpacity);
            texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, MESSAGE_PROMPT_OVERLAY, x, (s32)window->promptY, 26);
            renderCtxPopState(g_titleScene, 6);
            efctSetSpeed(1.0f);
            renderCtxPopState(g_titleScene, 3);
        }
        break;
    }
    case 12:
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        for (s32 i = 0; i < 5; i++) {
            if (window->cardStates[i] != 0) {
                effectRenderTransformedInstance(&window->sprites[MESSAGE_CARD_SPRITE + i],
                                                (f32)(s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
            }
        }
        renderCtxPopState(g_titleScene, 3);
        break;
    default:
        break;
    }
    if (window->state == 0) {
        return 0;
    }

    switch (window->mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 16:
    case 17:
    case 18: {
        s32 firstLine = 0;
        s32 lineCount = 0;
        switch (window->mode) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 16:
        case 17:
        case 18:
            firstLine = MESSAGE_LINES;
            lineCount = 3;
            break;
        case 7:
        case 8:
            firstLine = MESSAGE_WIDE_LINES_7;
            lineCount = 7;
            break;
        case 9:
            firstLine = MESSAGE_WIDE_LINES_9;
            lineCount = 8;
            break;
        default:
            break;
        }
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        if (window->state == 1 || window->state == 4) {
            if (ifTouchIsActive()) {
                /* The touch regions, as translucent rectangles: blue, red and green at alpha 102. */
                f32 color[4];
                TextureTableEntryIV *region = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_LINES);
                color[0] = COLOR_BYTE(0);
                color[1] = COLOR_BYTE(0);
                color[2] = COLOR_BYTE(255);
                color[3] = COLOR_BYTE(102);
                renderCtxSelectTexture(g_titleScene, NULL);
                FUN_002b7638((f32)region->x, (f32)region->y, (f32)region->placement->width,
                             (f32)region->placement->height, (u32)color, (u32)color, (u32)color, (u32)color, 0.0f);
                region = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_LINES + 1);
                FUN_002b7638((f32)region->x, (f32)region->y, (f32)region->placement->width,
                             (f32)region->placement->height, (u32)color, (u32)color, (u32)color, (u32)color, 0.0f);
                color[0] = COLOR_BYTE(255);
                color[1] = COLOR_BYTE(0);
                color[2] = COLOR_BYTE(0);
                color[3] = COLOR_BYTE(102);
                region = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_LINES + 2);
                FUN_002b7638((f32)region->x, (f32)region->y, (f32)region->placement->width,
                             (f32)region->placement->height, (u32)color, (u32)color, (u32)color, (u32)color, 0.0f);
                region = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_LINES + 3);
                FUN_002b7638((f32)region->x, (f32)region->y, (f32)region->placement->width,
                             (f32)region->placement->height, (u32)color, (u32)color, (u32)color, (u32)color, 0.0f);
                color[0] = COLOR_BYTE(0);
                color[1] = COLOR_BYTE(255);
                color[2] = COLOR_BYTE(0);
                color[3] = COLOR_BYTE(102);
                region = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_SPEAKER);
                FUN_002b7638((f32)region->x, (f32)region->y, (f32)region->placement->width,
                             (f32)region->placement->height, (u32)color, (u32)color, (u32)color, (u32)color, 0.0f);
            }
            asdTextSetBaseColor((AsdText *)window->box, window->color);
            for (s32 i = 0; i < lineCount; i++) {
                TextureTableEntryIV *line = asdTMTexTableEntryAt(MESSAGE_TABLE, firstLine + i);
                s32 x = line->x + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
                /* The dialogue lines sit 16 apart from 190 down, whatever the table says. */
                s32 y;
                if (firstLine == MESSAGE_LINES) {
                    y = 190 + i * 16;
                } else {
                    y = line->y;
                }
                textDrawRangeFaded((void *)window->box, x, y, 51, 6, i, 1.0f);
            }
            if (FUN_001247d0((Obj48 *)window->box)) {
                TextureTableEntryIV *plate = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_SPEAKER);
                s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
                AsdText *name = (AsdText *)window->box;
                f32 left = (f32)(plate->x + plate->placement->width / 2) - name->width * 0.5f;
                asdTextDrawAtInt(name, (s32)((f32)parallax + left), plate->y - 1, 51, 1.0f);
            }
        }
        break;
    }
    case 12: {
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        s32 lines = FUN_002b753c((int *)window->box);
        TextureTableEntryIV *origin = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_CARD_TEXT);
        s32 centerX = origin->x + origin->placement->width / 2;
        s32 top = origin->y;
        for (s32 i = 0; i < 5; i++) {
            if (window->cardStates[i] != 0) {
                UiSpriteState *card = &window->sprites[MESSAGE_CARD_SPRITE + i];
                /* Each card shows its line once it has faded and scaled in. */
                if ((card->alphaDone & uiSpriteGetScaleDone(card)) != 0 && lines > i) {
                    textDrawRangeFaded((void *)window->box,
                                       card->centerX + centerX - window->lineWidths[i] / 2 + parallax,
                                       card->centerY + top, 61, 6, window->lineOrder[i], 1.0f);
                }
            }
        }
        break;
    }
    default:
        return 0;
    }
    renderCtxPopState(g_titleScene, 3);
    return 0;
}

} /* extern "C" */
