/* NON_MATCHING: logic matches retail; armcc lays out the digit-2/digit-5 comma blocks and the zero case in a different order and emits strd for the glyph args */
#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* A sprite of an image bank: where it sits. */
struct BankSprite {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

BankSprite *asdTMTexTableEntryAt(s32 bank, s32 sprite);
void FUN_00183bb0(void);
void drawSetColorFromRGBA8(u32 packed);
s32 __aeabi_idivmod(s32 numerator, s32 denominator);

/* Draws `value` as digits with thousands marks at (x, y); with `signed` the number is coloured by sign and prefixed with +/-. */
void FUN_00169e38(s32 value, s32 x, s32 y, s32 signedDisplay)
{
    BankSprite *sprite = NULL;
    s32 digit = 0;
    s32 firstDigit = -1;
    s32 remaining = value;
    if (signedDisplay != 0) {
        if (value < 0) {
            drawSetColorFromRGBA8(0xDC0F14FF);
        } else {
            drawSetColorFromRGBA8(value > 0 ? 0x72E027FF : 0xFFFFFFFF);
        }
    } else {
        drawSetColorFromRGBA8(0xFFFFFFFF);
    }
    if (value < 0) {
        remaining = -value;
    }
    drawSetColorFromRGBA8(0xFF0000FF);
    if (remaining != 0) {
        s32 divisor = 100000000;
        do {
            if ((value < 0 ? -value : value) >= divisor) {
                if (firstDigit < 0) {
                    firstDigit = digit;
                }
                s32 glyph = remaining / divisor;
                sprite = asdTMTexTableEntryAt(8, 100 - digit);
                FUN_001835b4(2, 7, glyph, sprite->x + x, sprite->y + y, 16);
                remaining -= divisor * glyph;
                if (digit == 2) {
                    sprite = asdTMTexTableEntryAt(8, 0x67);
                    FUN_001835b4(2, 7, 12, sprite->x + x, sprite->y + y, 16);
                } else if (digit == 5) {
                    sprite = asdTMTexTableEntryAt(8, 0x66);
                    FUN_001835b4(2, 7, 12, sprite->x + x, sprite->y + y, 16);
                }
            }
            digit++;
            divisor /= 10;
        } while (divisor > 0);
    } else {
        sprite = asdTMTexTableEntryAt(8, 0x5C);
        FUN_001835b4(2, 7, 0, sprite->x + x, sprite->y + y, 16);
    }
    if (signedDisplay != 0) {
        if (firstDigit >= 0) {
            sprite = asdTMTexTableEntryAt(8, 0x65 - firstDigit);
        }
        if (value < 0) {
            FUN_001835b4(2, 7, 11, sprite->x + x, sprite->y + y, 16);
        } else if (value > 0) {
            FUN_001835b4(2, 7, 10, sprite->x + x, sprite->y + y, 16);
        }
    }
    FUN_00183bb0();
}

} /* extern "C" */
