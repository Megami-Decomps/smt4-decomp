/* NON_MATCHING: the Apocalypse twin of IV's FUN_00124d24, written from it and retail's listing (123 raw / 45 shape
 * rows, 355 rows on both sides); blocks, calls, frame and saved registers are retail's. Left: the final
 * renderCtxPopState becomes a tail call (retail keeps bl and the shared epilogue, as in the twin); retail
 * materialises the change's sign (mov r0, #0; movlt r0, #1; cmp) before it picks the marks' colour where the build
 * tests the sign bit; it loads the counter into ip and moves it into r0 last for the first uiDrawGroupedNumber
 * (messageBannerDraw's open difference) and the cost straight into r0 for the third; for the popup value it adds
 * the plate's x before the value's sign test and its y after it; and it reloads the banner for the slide's y
 * before it adds the slide's x. */
#include <stdlib.h>
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtxA.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void uiDrawGroupedNumber(s32 value, s32 x, s32 y, s32 signedDisplay);
void drawSetColorFromRGBA8(u32 packed);

enum {
    COUNTER_TABLE = 8,          /* the counter plates' sprite table */
    COUNTER_DIGIT_TABLE = 7,    /* the digits and marks drawn over them */
    COUNTER_LAYER = 11,
    COUNTER_DIGIT_LAYER = 16,
    COUNTER_SPRITE_FRAME = 17,  /* MessageWindowA.sprites: the banner frame the plates follow, */
    COUNTER_SPRITE_SLIDE = 18   /* and the slide added while the banner opens or closes */
};

/* Draws the banner's counter plates (the wide layout shifts them by the stereo parallax): the counter, the
 * second plate with its change (three placeholder marks while the change steps), the cost plate and the popup
 * value, a signed grouped number without the sign mark. */
void messageBannerDrawCounterPlates(s32 wide)
{
    if (gameFlagIsSet(0x402)) {
        s32 x = vec2GetXInt(&g_messageMain.banner->sprites[COUNTER_SPRITE_FRAME]);
        s32 y = vec2GetYInt(&g_messageMain.banner->sprites[COUNTER_SPRITE_FRAME]);
        f32 speed = vec2GetSpeed(&g_messageMain.banner->sprites[COUNTER_SPRITE_FRAME]);
        if (g_messageMain.banner->transition > 0) {
            x += vec2GetXInt(&g_messageMain.banner->sprites[COUNTER_SPRITE_SLIDE]);
            y += vec2GetYInt(&g_messageMain.banner->sprites[COUNTER_SPRITE_SLIDE]);
        }
        renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(speed);
        gxResetColorQuadToWhite();

        TextureTableEntryIV *part;
        if (wide) {
            part = asdTMTexTableEntryAt(COUNTER_TABLE, 148);
            x += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        } else {
            part = asdTMTexTableEntryAt(COUNTER_TABLE, 192);
        }
        texDrawCompositeSprite(2, COUNTER_TABLE, 0, part->x + x, part->y + y, COUNTER_LAYER);
        uiDrawGroupedNumber(g_messageMain.banner->counterValue, part->x + x, part->y + y, 0);

        if (g_messageMain.banner->unk0092) {
            if (wide) {
                part = asdTMTexTableEntryAt(COUNTER_TABLE, 256);
            } else {
                part = asdTMTexTableEntryAt(COUNTER_TABLE, 287);
            }
            texDrawCompositeSprite(2, COUNTER_TABLE, 12, part->x + x, part->y + y, COUNTER_LAYER);
            if (!g_messageMain.banner->stepActive) {
                uiDrawGroupedNumber(g_messageMain.banner->counterElapsed, part->x + x, part->y + y, 1);
            } else {
                /* The change is still stepping: three marks in its colour instead of the number. */
                s32 markX = part->x + x;
                s32 markY = y + part->y;
                bool negative = g_messageMain.banner->counterElapsed < 0;
                drawSetColorFromRGBA8(negative ? 0xDC0F14FF : 0x008400FF);
                for (s32 i = 0; i < 3; i++) {
                    TextureTableEntryIV *mark = asdTMTexTableEntryAt(COUNTER_TABLE, i + 0x5C);
                    texDrawTableEntryAtStoredOrigin(2, COUNTER_DIGIT_TABLE, 14, mark->x + markX, mark->y + markY,
                                                    COUNTER_DIGIT_LAYER);
                }
                gxResetColorQuadToWhite();
            }
        }

        MessageWindowA *banner = g_messageMain.banner;
        if (banner->unk016D) {
            s32 bx = vec2GetXInt(&banner->sprites[COUNTER_SPRITE_FRAME]);
            s32 by = vec2GetYInt(&banner->sprites[COUNTER_SPRITE_FRAME]);
            bx = (s32)(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f) + bx);
            part = asdTMTexTableEntryAt(COUNTER_TABLE, 256);
            texDrawCompositeSprite(2, COUNTER_TABLE, 22, part->x + bx, part->y + by, COUNTER_LAYER);
            uiDrawGroupedNumber(-(s32)banner->unk0168, part->x + bx, part->y + by, 1);
        }

        banner = g_messageMain.banner;
        if (banner->popupShown) {
            s32 bx = vec2GetXInt(&banner->sprites[COUNTER_SPRITE_FRAME]);
            s32 by = vec2GetYInt(&banner->sprites[COUNTER_SPRITE_FRAME]);
            bx = (s32)(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f) + bx);
            part = asdTMTexTableEntryAt(COUNTER_TABLE, 256);
            texDrawCompositeSprite(2, COUNTER_TABLE, 23, part->x + bx, part->y + by, COUNTER_LAYER);

            /* uiDrawGroupedNumber's signed display without the sign mark (the first digit is still tracked). */
            s32 value = banner->popupValue;
            s32 numberX = bx + part->x;
            s32 numberY = by + part->y;
            TextureTableEntryIV *sprite;
            s32 digit = 0;
            s32 firstDigit = -1;
            s32 remaining = value;
            if (value < 0) {
                drawSetColorFromRGBA8(0xDC0F14FF);
            } else if (value > 0) {
                drawSetColorFromRGBA8(0x72E027FF);
            } else {
                drawSetColorFromRGBA8(0xFFFFFFFF);
            }
            if (value < 0) {
                remaining = -remaining;
                drawSetColorFromRGBA8(0xFF0000FF);
            }
            if (remaining == 0) {
                sprite = asdTMTexTableEntryAt(COUNTER_TABLE, 0x5C);
                texDrawTableEntryAtStoredOrigin(2, COUNTER_DIGIT_TABLE, 0, sprite->x + numberX, sprite->y + numberY,
                                                COUNTER_DIGIT_LAYER);
            } else {
                s32 divisor = 100000000;
                do {
                    if (abs(value) >= divisor) {
                        if (firstDigit < 0) {
                            firstDigit = digit;
                        }
                        s32 glyph = remaining / divisor;
                        sprite = asdTMTexTableEntryAt(COUNTER_TABLE, 100 - digit);
                        texDrawTableEntryAtStoredOrigin(2, COUNTER_DIGIT_TABLE, glyph, sprite->x + numberX,
                                                        sprite->y + numberY, COUNTER_DIGIT_LAYER);
                        remaining -= divisor * glyph;
                        if (digit == 2) {
                            sprite = asdTMTexTableEntryAt(COUNTER_TABLE, 0x67);
                            texDrawTableEntryAtStoredOrigin(2, COUNTER_DIGIT_TABLE, 12, sprite->x + numberX,
                                                            sprite->y + numberY, COUNTER_DIGIT_LAYER);
                        } else if (digit == 5) {
                            sprite = asdTMTexTableEntryAt(COUNTER_TABLE, 0x66);
                            texDrawTableEntryAtStoredOrigin(2, COUNTER_DIGIT_TABLE, 12, sprite->x + numberX,
                                                            sprite->y + numberY, COUNTER_DIGIT_LAYER);
                        }
                    }
                    digit++;
                    divisor /= 10;
                } while (divisor > 0);
            }
            gxResetColorQuadToWhite();
        }
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        renderCtxPopState(g_renderCtx, 3);
    }
}

} /* extern "C" */
