#include "shard/S2NwFont.h"

extern "C" {

extern u32 nw_font_ResFontBase_FindGlyphIndex(NwResFontBase *font, u32 code);
extern void FUN_0050caf0(NwResFontBase *font, NwFontGlyph *glyph, u32 glyphIndex);

/* The glyph index of a character code; missing characters use the font's alternate glyph. */
static __inline u32 fontGlyphIndex(NwResFontBase *font, u32 code)
{
    u32 glyphIndex = nw_font_ResFontBase_FindGlyphIndex(font, code);

    if (glyphIndex == 0xffff) {
        return font->fontInfo->alterCharIndex;
    }
    return glyphIndex;
}

void nw_font_ResFontBase_GetGlyph(NwResFontBase *font, NwFontGlyph *glyph, u32 code)
{
    FUN_0050caf0(font, glyph, fontGlyphIndex(font, code));
}

} /* extern "C" */
