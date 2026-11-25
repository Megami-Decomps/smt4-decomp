/* NON_MATCHING: 186 lines (160 with branch targets blanked). The translate/scale builds are nn::math's inlines now (nw/math/MTX44Transform.h); retail still reads the caption's opacity through the sprite getter (add r0, r4, #60; vldr s0, [r0, #32]) and keeps 0.0f in s20 with a 16-byte larger frame, where the build reads the field directly and saves one VFP pair fewer. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"
#include "nw/math/MTX44Transform.h"
#include "ui/NumberFont.h"

using nw::math::MTX44;
using nw::math::VEC3Value;


// Sprite placement record: x/y at +8/+10; the second record also carries a pointer to
// a widths table at +12.

// Item count badge: caption text, the item icon and the badge's pop-in animation.
struct ItemBadge {
    u8 unk00[0x18];
    s16 category;           // 0x018
    u8 unk1a[0x3c - 0x1a];
    u8 unk3c[0x20];
    f32 textAlpha;          // 0x05c
    u8 unk60[0x154 - 0x60];
    UiSpriteState anchor;        // 0x154: position vector of the badge
    u8 unk1e0[0x204 - 0x1e0];
    f32 scale;              // 0x204
    u8 unk208[0x26c - 0x208];
    char caption[0x50];     // 0x26c
    s32 mode;               // 0x2bc
    u8 unk2c0[8];
    s32 count;              // 0x2c8
};

extern "C" {


s32 fontMeasureLineAdvance(const char* text, s32 font);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
MTX44 FUN_0019a0dc(RenderCtxA *scene);
void camSetMatrixA(RenderCtxA *ctx, const MTX44 *matrix);

// Draws an item badge: the caption centred in `frame`, the category icon and the count
// (two digits once it reaches ten), the count part scaled around its anchor while it pops in.
void FUN_00165778(ItemBadge* badge, TextureTableEntryIV* frame)
{
    s32 captionWidth = fontMeasureLineAdvance(badge->caption, 4);
    s32 left = (frame->placement->width - captionWidth) / 2;
    textDrawString((f32)left, 6.0f, 0.57f, 4, 0.0f, -1, badge->textAlpha, badge->caption);
    uiDrawItemCategoryIcon(badge->category, left - 13, 8, 121, 0);
    skinObjectUpdateMatrices(g_renderCtx);

    TextureTableEntryIV* rect = asdTMTexTableEntryAt(8, 427);
    texDrawTableEntryAtStoredOrigin(2, 8, 424, rect->x + vec2GetXInt(&badge->anchor), rect->y, 101);
    TextureTableEntryIV* countRect = asdTMTexTableEntryAt(8, 426);
    if (badge->mode != 3) {
        numberFontDrawFormatted(6, rect->x + countRect->x + vec2GetXInt(&badge->anchor), rect->y + countRect->y, 1, 2, 121, "%d", badge->count);
        return;
    }

    f32 scale = badge->scale;
    f32 offsetX;
    f32 offsetY;
    s32 digits;
    if (badge->count < 10) {
        countRect = asdTMTexTableEntryAt(8, 425);
        digits = 1;
        offsetX = (8.0f - scale * 8.0f) * 0.5f;
        offsetY = (12.0f - scale * 12.0f) * 0.5f;
    } else {
        countRect = asdTMTexTableEntryAt(8, 426);
        digits = 2;
        offsetX = (16.0f - scale * 16.0f) * 0.5f;
        offsetY = (12.0f - scale * 12.0f) * 0.5f;
    }

    MTX44 saved;
    MTX44 composed;
    MTX44 factor;
    MTX44Identity(&saved);
    MTX44Identity(&composed);
    MTX44Identity(&factor);
    VEC3Value position((f32)(rect->x + countRect->x) + offsetX, (f32)(rect->y + countRect->y) + offsetY, 0.0f);
    MTX44Translate(&factor, &position);
    MTX44Mult(&composed, &composed, &factor);
    VEC3Value scales(scale, scale, 1.0f);
    MTX44Scale(&factor, &scales);
    MTX44Mult(&composed, &composed, &factor);
    saved = FUN_0019a0dc(g_renderCtx);
    camSetMatrixA(g_renderCtx, &composed);
    numberFontDrawFormatted(6, 0, 0, 1, digits, 121, "%d", badge->count);
    camSetMatrixA(g_renderCtx, &saved);
}

} /* extern "C" */
