#include "ui/NumberFont.h"
#include "shard/TextureDrawCall.h"
#include <stdarg.h>

extern "C" {

s32 textFormatProcessRange(char *buffer, u32 capacity, const char *format, va_list arguments);

/* The texture of one character in the number font `kind`: the signs and punctuation each font has,
 * else the digit counted from the font's '0' (0 where a font lacks the character).
 * Retail returns from inside this lookup: the digit bases sit after the caller's epilogue and join in
 * one shared `c + base - '0'`, and the character is sign-extended once, as a by-value parameter. */
static __inline s32 numberGlyph(u32 kind, s8 c)
{
    s32 base;

    switch (c) {
    case '+':
        if (kind == 0) {
            return 10;
        } else if (kind == 1) {
            return 1047;
        } else if (kind == 2) {
            return 1059;
        } else if (kind == 3) {
            return 1071;
        } else if (kind == 8) {
            return 5020;
        } else if (kind == 9) {
            return 1011;
        } else if (kind == 10) {
            return 1023;
        } else if (kind == 11) {
            return 1035;
        }
        break;
    case '-':
        if (kind == 0) {
            return 11;
        } else if (kind == 2) {
            return 1073;
        } else if (kind == 7) {
            return 5021;
        }
        break;
    case ',':
        if (kind == 0) {
            return 12;
        }
        break;
    case '?':
        if (kind == 0) {
            return 14;
        }
        break;
    case '/':
        if (kind == 0) {
            return 15;
        }
        break;
    case '%':
        if (kind == 0) {
            return 16;
        }
        break;
    case '*':
        if (kind == 0) {
            return 13;
        } else if (kind == 1) {
            return 1046;
        } else if (kind == 2) {
            return 1058;
        } else if (kind == 3) {
            return 1070;
        } else if (kind == 9) {
            return 1010;
        } else if (kind == 10) {
            return 1022;
        } else if (kind == 11) {
            return 1034;
        }
        break;
    case ':':
        if (kind == 0) {
            return 17;
        }
        break;
    default:
        switch (kind) {
        case 1:
            base = 1036;
            break;
        case 2:
            base = 1048;
            break;
        case 3:
            base = 1060;
            break;
        case 4:
            base = 2000;
            break;
        case 5:
            base = 2010;
            break;
        case 6:
            base = 3000;
            break;
        case 7:
            base = 5010;
            break;
        case 8:
            base = 5000;
            break;
        case 9:
            base = 1000;
            break;
        case 10:
            base = 1012;
            break;
        case 11:
            base = 1024;
            break;
        default:
            base = 0;
            break;
        }
        return c + base - '0';
    }
    return 0;
}

/* Formats the variadic text and scales its length by the glyph width of the number font `kind`. */
s32 numberFontMeasureFormatted(u32 kind, const char *format, ...)
{
    char buffer[32];
    va_list arguments;
    va_start(arguments, format);
    s32 length = textFormatProcessRange(buffer, sizeof(buffer), format, arguments);
    va_end(arguments);

    return numberGlyphWidth(kind) * length;
}

/* Draws the formatted text at (x, y) with the glyphs of the number font `kind`, aligned in a field
 * `digits` glyphs wide (align 0: left, 1: right, 2: centred). Spaces advance without drawing. */
void numberFontDrawFormatted(s32 kind, s32 x, s32 y, s32 align, s32 digits, u32 slot, const char *format, ...)
{
    char text[32];
    va_list arguments;
    va_start(arguments, format);
    textFormatProcessRange(text, sizeof(text), format, arguments);
    va_end(arguments);

    s32 textWidth = numberFontMeasureFormatted(kind, text);
    s32 fieldWidth = numberGlyphWidth(kind) * digits;
    if (align != 0) {
        if (align == 1) {
            x += fieldWidth - textWidth;
        } else if (align == 2) {
            x += (fieldWidth - textWidth) / 2;
        }
    }

    const char *cursor = text;
    s32 advance = numberGlyphWidth(kind);
    while (*cursor != '\0') {
        s8 c = *cursor;

        if (c != ' ') {
            texDrawTableEntryAtStoredOrigin(2, 7, numberGlyph(kind, c), x, y, slot);
        }
        cursor++;
        x += advance;
    }
}

} /* extern "C" */
