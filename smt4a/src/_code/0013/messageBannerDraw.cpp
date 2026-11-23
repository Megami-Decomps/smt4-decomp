/* NON_MATCHING: 67 lines (13 by shape), all from one call: for uiDrawGroupedNumber retail adds the panel's
 * position into the argument registers directly and loads the count into r0 last, where the build computes
 * the sums from r1/r0, holds the count in ip and moves it; that instruction shifts every later pc-relative
 * offset. Retail's pool also holds a glow's first sprite id before the glow-step offset (0x19F9). */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"

extern "C" {

void messageWindowDrawSprites(MessageWindowA *message);
void FUN_00151e4c(MessageWindowA *message);
void FUN_00164490(s32 index);
const char *dataFindKindRecordWithAocOverrides(s32 value, s32 option);
void uiDrawGroupedNumber(s32 value, s32 x, s32 y, s32 signedDisplay);
void numberFontDrawFormatted(s32 font, s32 x, s32 y, s32 align, s32 digits, s32 layer, const char *format, ...);
void drawSetColorFromRGBA8(u32 packed);
void messageCreatePanelEffects(u32 first, u32 second, u32 accent, u32 last);
void messageDrawPairedFrameSprites(u32 leftBase, u32 leftOverlay, u32 leftEdge,
    u32 rightBase, u32 rightOverlay, u32 rightEdge);

enum {
    MESSAGE_MODE_PLAIN = 11,
    MESSAGE_MODE_WIDE = 20,

    BANNER_TABLE = 8,                   /* the banner's and the counter panel's sprite table */
    BANNER_LAYER = 0x10,
    BANNER_SPRITE_WINDOW = 0,           /* MessageWindowA.sprites */
    BANNER_SPRITE_FRAME = 17,
    BANNER_SPRITE_PANEL = 21,
    BANNER_SPRITE_CHOICE_GLOW = 35,
    BANNER_SPRITE_CHOICE_ROWS = 40,

    BANNER_ENTRY_PANEL = 0xC0,          /* layout entries: the counter panel, */
    BANNER_ENTRY_ICON = 0xC1,           /* the banner's icon, */
    BANNER_ENTRY_NAME = 0xC2,           /* name, */
    BANNER_ENTRY_COUNT = 0xC6,          /* count */
    BANNER_ENTRY_COUNT_MARK = 0xC7,     /* and the mark before it, */
    BANNER_ENTRY_FRAME = 0xC8,          /* and the banner frame they hang from */
    PANEL_ENTRY_MARK_NO_DIGIT = 0x5D,   /* the panel's mark when the count is 0 */
    PANEL_ENTRY_MARK_ONE_DIGIT = 0x65,  /* its mark by the count's first digit position, counted down */

    CHOICE_TABLE = 4,
    CHOICE_LAYER = 0xF1
};

/* The four glow sprites from `firstId`, drawn over a choice panel while its glow is up. */
static __inline void messageDrawChoiceGlow(s32 firstId)
{
    if (g_messageMain.banner->unk19F9 == 3) {
        efctSetSpeed(vec2GetSpeed(&g_messageMain.banner->sprites[BANNER_SPRITE_CHOICE_GLOW]));
        for (s32 i = 0; i < 4; ++i)
            texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, firstId + i, 0, 0, CHOICE_LAYER);
        efctSetSpeed(1.0f);
    }
}

/* Draws the banner window: the message window itself, the item banner, the counter panel and the
 * choice panel of the current panel layout. */
u32 messageBannerDraw(void)
{
    char name[0x44];
    s32 i;
    s32 x;
    s32 y;
    TextureTableEntryIV *frame;
    TextureTableEntryIV *part;
    MessageWindowA *window = g_messageMain.banner;

    if (window->activeState != 0)
        return 0;

    if (window->mode == MESSAGE_MODE_PLAIN) {
        if (window->state != 0) {
            efctSetSpeed(vec2GetSpeed(&window->sprites[BANNER_SPRITE_WINDOW]));
            renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
            texDrawTableEntryAtStoredOrigin(2, BANNER_TABLE, 0x101, 0, 0, 6);
            renderCtxPopState(g_renderCtx, 3);
            efctSetSpeed(1.0f);
        }
        messageWindowDrawSprites(window);
        FUN_00151e4c(g_messageMain.banner);
    } else if (window->mode == MESSAGE_MODE_WIDE) {
        if (window->state != 0) {
            efctSetSpeed(vec2GetSpeed(&window->sprites[BANNER_SPRITE_WINDOW]));
            renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
            texDrawTableEntryAtStoredOrigin(2, 0x2F, 0x8D, 0, 0, 6);
            renderCtxPopState(g_renderCtx, 3);
            efctSetSpeed(1.0f);
        }
        messageWindowDrawSprites(window);
        FUN_00151e4c(g_messageMain.banner);
    }

    if (g_messageMain.banner->wideValue != 0 && g_messageMain.banner->alternateAnimation == 0)
        FUN_00164490(0);

    if (g_messageMain.banner->smallValue != 0) {
        f32 alpha;
        x = vec2GetXInt(&g_messageMain.banner->sprites[BANNER_SPRITE_FRAME]);
        y = vec2GetYInt(&g_messageMain.banner->sprites[BANNER_SPRITE_FRAME]);
        alpha = vec2GetSpeed(&g_messageMain.banner->sprites[BANNER_SPRITE_FRAME]);
        renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(alpha);
        gxResetColorQuadToWhite();
        frame = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_FRAME);
        texDrawCompositeSprite(2, BANNER_TABLE, 10, frame->x + x, frame->y + y, 11);

        __2sprintf(name, "%s", dataFindKindRecordWithAocOverrides(g_messageMain.banner->bannerId, 0));
        part = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_NAME);
        textDrawString((f32)(frame->x + part->x + x), (f32)(frame->y + part->y + y), 0.0f, 2, 0.0f, 0xFFFFFFFF,
                       alpha, name);

        part = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_ICON);
        uiDrawItemCategoryIcon((s16)g_messageMain.banner->bannerId, frame->x + part->x + x,
                               frame->y + part->y + y, BANNER_LAYER, 0);

        drawSetColorFromRGBA8(0xFFFFFFFF);
        part = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_COUNT);
        numberFontDrawFormatted(0, frame->x + part->x + x, frame->y + part->y + y, 1, 4, BANNER_LAYER, "%d",
                                g_messageMain.banner->counterValue);
        part = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_COUNT_MARK);
        numberFontDrawFormatted(0, frame->x + part->x + x, frame->y + part->y + y, 0, 1, BANNER_LAYER, "*");
        gxResetColorQuadToWhite();
        efctSetSpeed(1.0f);
        renderCtxPopState(g_renderCtx, 3);
    }

    window = g_messageMain.banner;
    if (window->panelStep != 0) {
        s32 firstDigit;
        s32 divisor;
        x = vec2GetXInt(&window->sprites[BANNER_SPRITE_PANEL]);
        y = vec2GetYInt(&window->sprites[BANNER_SPRITE_PANEL]);
        renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        frame = asdTMTexTableEntryAt(BANNER_TABLE, BANNER_ENTRY_PANEL);
        texDrawCompositeSprite(2, BANNER_TABLE, 17, frame->x + x, frame->y + y, 11);
        uiDrawGroupedNumber(window->panelCount, frame->x + x, frame->y + y, 0);

        /* the mark sits before the count's first digit */
        firstDigit = -1;
        i = 0;
        for (divisor = 100000000; divisor > 0; divisor /= 10) {
            if (window->panelCount >= divisor && firstDigit < 0)
                firstDigit = i;
            ++i;
        }
        if (firstDigit >= 0)
            part = asdTMTexTableEntryAt(BANNER_TABLE, PANEL_ENTRY_MARK_ONE_DIGIT - firstDigit);
        else
            part = asdTMTexTableEntryAt(BANNER_TABLE, PANEL_ENTRY_MARK_NO_DIGIT);
        drawSetColorFromRGBA8(0xFF);
        numberFontDrawFormatted(0, frame->x + part->x + x, frame->y + part->y + y, 0, 15, BANNER_LAYER, "*");
        gxResetColorQuadToWhite();
        renderCtxPopState(g_renderCtx, 3);
    }

    window = g_messageMain.banner;
    if (window->unk19FB != 0) {
        switch (window->unk19FC) {
        case 0:
            break;
        case 1:
            efctSetSpeed(1.0f);
            texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, 0xAC2C, 0, 0, CHOICE_LAYER);
            messageDrawChoiceGlow(0xAC2D);
            messageCreatePanelEffects(0xAC31, 0xAC36, 0xAC37, 0xAC38);
            messageDrawPairedFrameSprites(0xAC32, 0xAC33, 0xAC39, 0xAC34, 0xAC35, 0xAC3A);
            efctSetSpeed(1.0f);
            break;
        case 2:
            efctSetSpeed(1.0f);
            texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, 0xABF9, 0, 0, CHOICE_LAYER);
            messageDrawChoiceGlow(0xABFA);
            messageCreatePanelEffects(0xABFE, 0xAC03, 0xAC04, 0xAC05);
            messageDrawPairedFrameSprites(0xABFF, 0xAC00, 0xAC06, 0xAC01, 0xAC02, 0xAC07);
            efctSetSpeed(1.0f);
            break;
        case 3:
            efctSetSpeed(1.0f);
            texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, 0xAC0F, 0, 0, CHOICE_LAYER);
            texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, 0xAC10, 0, 0, CHOICE_LAYER);
            messageDrawChoiceGlow(0xAC11);
            messageCreatePanelEffects(0xAC15, 0xAC1A, 0xAC1B, 0xAC22);
            efctSetSpeed(vec2GetSpeed(&window->sprites[BANNER_SPRITE_CHOICE_ROWS]));
            for (i = 0; i < 6; ++i)
                texDrawTableEntryAtStoredOrigin(2, CHOICE_TABLE, 0xAC1C + i, 0, 0, CHOICE_LAYER);
            efctSetSpeed(1.0f);
            messageDrawPairedFrameSprites(0xAC16, 0xAC17, 0xAC23, 0xAC18, 0xAC19, 0xAC24);
            efctSetSpeed(1.0f);
            break;
        }
    }
    return 0;
}

} /* extern "C" */
