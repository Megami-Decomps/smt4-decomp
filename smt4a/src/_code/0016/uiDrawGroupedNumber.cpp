#include "common.h"
#include <stdlib.h>
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/AnimatedMessage.h"

extern "C" {
void drawSetColorFromRGBA8(u32 packed);

/* Draws `value` as digits with thousands marks at (x, y); with `signedDisplay` the number is coloured by sign and prefixed with +/-. */
void uiDrawGroupedNumber(s32 value, s32 x, s32 y, s32 signedDisplay)
{
    TextureTableEntryIV *sprite = NULL;
    s32 digit = 0;
    s32 firstDigit = -1;
    s32 remaining = value;
    if (signedDisplay != 0) {
        if (value < 0) {
            drawSetColorFromRGBA8(0xDC0F14FF);
        } else if (value > 0) {
            drawSetColorFromRGBA8(0x72E027FF);
        } else {
            drawSetColorFromRGBA8(0xFFFFFFFF);
        }
    } else {
        drawSetColorFromRGBA8(0xFFFFFFFF);
    }
    if (value < 0) {
        remaining = -value;
        drawSetColorFromRGBA8(0xFF0000FF);
    }
    if (remaining == 0) {
        sprite = asdTMTexTableEntryAt(8, 0x5C);
        texDrawTableEntryAtStoredOrigin(2, 7, 0, sprite->x + x, sprite->y + y, 16);
    } else {
        s32 divisor = 100000000;
        do {
            if (abs(value) >= divisor) {
                if (firstDigit < 0) {
                    firstDigit = digit;
                }
                s32 glyph = remaining / divisor;
                sprite = asdTMTexTableEntryAt(8, 100 - digit);
                texDrawTableEntryAtStoredOrigin(2, 7, glyph, sprite->x + x, sprite->y + y, 16);
                remaining -= divisor * glyph;
                if (digit == 2) {
                    sprite = asdTMTexTableEntryAt(8, 0x67);
                    texDrawTableEntryAtStoredOrigin(2, 7, 12, sprite->x + x, sprite->y + y, 16);
                } else if (digit == 5) {
                    sprite = asdTMTexTableEntryAt(8, 0x66);
                    texDrawTableEntryAtStoredOrigin(2, 7, 12, sprite->x + x, sprite->y + y, 16);
                }
            }
            digit++;
            divisor /= 10;
        } while (divisor > 0);
    }
    if (signedDisplay != 0) {
        if (firstDigit >= 0) {
            sprite = asdTMTexTableEntryAt(8, 0x65 - firstDigit);
        }
        if (value < 0) {
            texDrawTableEntryAtStoredOrigin(2, 7, 11, sprite->x + x, sprite->y + y, 16);
        } else if (value > 0) {
            texDrawTableEntryAtStoredOrigin(2, 7, 10, sprite->x + x, sprite->y + y, 16);
        }
    }
    gxResetColorQuadToWhite();
}

} /* extern "C" */
