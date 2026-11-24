/* NON_MATCHING: 78 lines (78 by shape), registers and scheduling only; the instructions, frame, literal pool
 * and block layout are retail's. Retail keeps the layer 16, &g_messageMain and the layer 11 in r9, sl and fp
 * (built: sl, fp and r9), which accounts for about half the lines; the count's value and format go to the stack
 * separately (built: one stm) and its coordinate loads come in another order; the digit loop's place, leading
 * digit and index are r1, r2, r0 (built: r0, r1, r2). Which register &g_messageMain gets follows how often the
 * source reads g_messageMain.banner: with the wide-banner test reading it twice the base takes r7 and the zero
 * of the backdrops' y argument sl (90 lines). */
#include "ui/MessageMain.h"
#include "camp/RenderCtx.h"
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match8_TitleOverlay.h"
#include "text/TextDraw.h"
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The message sprite table and the banner's entries in it. */
enum {
    MESSAGE_TABLE = 14,
    MESSAGE_ITEM_FRAME = 200,           /* the item banner's origin */
    MESSAGE_ITEM_NAME = 194,
    MESSAGE_ITEM_ICON = 193,
    MESSAGE_ITEM_COUNT = 198,
    MESSAGE_ITEM_TIMES = 199,           /* the multiplication sign before the count */
    MESSAGE_PANEL_FRAME = 192,          /* the counter panel's origin */
    MESSAGE_PANEL_SIGN_NO_DIGITS = 93,
    MESSAGE_PANEL_SIGN_LAST = 101       /* the sign's place for a nine-digit count; one entry lower per digit less */
};

struct RowMenu;

extern "C" {
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 value); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
s32 renderCtxPopState(RenderCtx *context, s32 stack); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void efctSetSpeed(f32 speed); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void gxResetColorQuadToWhite(); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void texDrawCompositeSprite(s32 layer, s32 sheet, s32 part, s32 x, s32 y, s32 priority); // declcheck: local (ui/AnimatedMessage.h declares these for Apocalypse's RenderCtxA; IV's context is a RenderCtx)
void uiDrawGroupedNumber(s32 value, s32 x, s32 y, s32 flag);
void titleOverlayDraw(TitleOverlay *overlay);
void FUN_001189a4(RowMenu *menu);
void messageBannerDrawCounterPlates(s32 wide);
void drawSetColorFromRGBA8(u32 packed);
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 priority, s32 markEquipped); // declcheck: local (the definition's own form; the shared header's BadgeWord last argument is how the forwarding wrappers pass it)
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 layer, const char *format, ...);

/* The banner window's draw task ("MESS_D"): the backdrop and sprites of a kind-11 or kind-19 message, the
 * counter banner, the item banner (icon, name and count) and the counter panel. Returns 0. */
u32 messageBannerDraw(void)
{
    MessageWindow *banner = g_messageMain.banner;
    if (banner->activeState != 0) {
        return 0;
    }

    if (banner->mode == 11) {
        if (banner->state != 0) {
            efctSetSpeed(vec2GetSpeed(&banner->sprites[0]));
            renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
            texDrawTableEntryAtStoredOrigin(2, MESSAGE_TABLE, 257, 0, 0, 6);
            renderCtxPopState(g_titleScene, 3);
            efctSetSpeed(1.0f);
        }
        titleOverlayDraw((TitleOverlay *)banner);
        FUN_001189a4((RowMenu *)g_messageMain.banner);
    } else if (banner->mode == 19) {
        if (banner->state != 0) {
            efctSetSpeed(vec2GetSpeed(&banner->sprites[0]));
            renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
            texDrawTableEntryAtStoredOrigin(2, 58, 141, 0, 0, 6);
            renderCtxPopState(g_titleScene, 3);
            efctSetSpeed(1.0f);
        }
        titleOverlayDraw((TitleOverlay *)banner);
        FUN_001189a4((RowMenu *)g_messageMain.banner);
    }

    banner = g_messageMain.banner;
    if (banner->wideValue != 0 && banner->alternateAnimation == 0) {
        messageBannerDrawCounterPlates(0);
    }

    if (g_messageMain.banner->smallValue != 0) {
        char text[64];
        s32 x = vec2GetXInt(&g_messageMain.banner->sprites[12]);
        s32 y = vec2GetYInt(&g_messageMain.banner->sprites[12]);
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();

        TextureTableEntryIV *frame = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_ITEM_FRAME);
        texDrawCompositeSprite(2, MESSAGE_TABLE, 10, frame->x + x, frame->y + y, 11);

        __2sprintf(text, "%s", dataFindKindRecordWithAocOverrides(g_messageMain.banner->bannerId, 0));
        TextureTableEntryIV *part = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_ITEM_NAME);
        textDrawString((f32)(frame->x + part->x + x), (f32)(frame->y + part->y + y), 0.0f, 2, 0.0f, 0xFF, 1.0f, text);

        part = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_ITEM_ICON);
        itemDrawCategoryBadge((s16)g_messageMain.banner->bannerId, frame->x + part->x + x, frame->y + part->y + y, 16, 0);

        drawSetColorFromRGBA8(0xFF);
        part = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_ITEM_COUNT);
        FUN_002bdf94(0, part->x + frame->x + x, part->y + frame->y + y, 1, 4, 16, "%d",
                     g_messageMain.banner->counterValue);
        part = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_ITEM_TIMES);
        FUN_002bdf94(0, part->x + frame->x + x, frame->y + part->y + y, 0, 1, 16, "*");
        gxResetColorQuadToWhite();
        renderCtxPopState(g_titleScene, 3);
    }

    banner = g_messageMain.banner;
    if (banner->panelStep != 0) {
        s32 x = vec2GetXInt(&banner->sprites[16]);
        s32 y = vec2GetYInt(&banner->sprites[16]);
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();

        TextureTableEntryIV *frame = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_PANEL_FRAME);
        texDrawCompositeSprite(2, MESSAGE_TABLE, 17, frame->x + x, frame->y + y, 11);
        uiDrawGroupedNumber(banner->panelCount, frame->x + x, frame->y + y, 0);

        /* The count's leading decimal place, counted from the hundred millions; -1 for a count of 0. */
        s32 place = 100000000;
        s32 leading = -1;
        for (s32 index = 0; place > 0; index++, place /= 10) {
            if (place <= banner->panelCount && leading < 0) {
                leading = index;
            }
        }
        TextureTableEntryIV *sign;
        if (leading >= 0) {
            sign = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_PANEL_SIGN_LAST - leading);
        } else {
            sign = asdTMTexTableEntryAt(MESSAGE_TABLE, MESSAGE_PANEL_SIGN_NO_DIGITS);
        }
        drawSetColorFromRGBA8(0xFF);
        FUN_002bdf94(0, frame->x + sign->x + x, frame->y + sign->y + y, 0, 15, 16, "*");
        gxResetColorQuadToWhite();
        renderCtxPopState(g_titleScene, 3);
    }
    return 0;
}

} /* extern "C" */
