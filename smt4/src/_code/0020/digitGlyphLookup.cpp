#include "common.h"

extern "C" const u8 g_digitGlyphs[];

/* Look up a digit glyph, defaulting to ASCII zero outside the table. */
extern "C" u32 digitGlyphLookup(u32 index)
{
    return index < 11 ? g_digitGlyphs[index] : '0';
}
