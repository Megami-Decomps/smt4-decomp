/* The number fonts of the UI texture sheet (file 2, table 7): fixed-width digit glyphs in twelve
 * styles, drawn one texture per character. */
#ifndef UI_NUMBERFONT_H
#define UI_NUMBERFONT_H

#include "common.h"

/* The advance of one glyph of the number font `kind`. */
static __inline s32 numberGlyphWidth(u32 kind)
{
    s32 width;

    switch (kind) {
    case 0:
        width = 7;
        break;
    case 4:
    case 5:
        width = 13;
        break;
    case 6:
        width = 8;
        break;
    case 7:
    case 8:
        width = 10;
        break;
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 11:
        width = 4;
        break;
    default:
        width = 0;
        break;
    }
    return width;
}

/* numberFontMeasureFormatted(kind, format, ...) measures and numberFontDrawFormatted(kind, x, y, align, digits,
 * slot, format, ...) draws a formatted number; their callers still declare them locally. */

#endif
