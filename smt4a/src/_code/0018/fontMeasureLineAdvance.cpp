#include "font/FontStringReader.h"
extern "C" {
FontRegisteredRecord *FUN_0019dc44(u32 index);
void FUN_001a64f4(NwFontGlyph *glyph);

// Sum character advances up to the first newline or string terminator.
s32 fontMeasureLineAdvance(const void *text, s32 fontIndex)
{
    FontEncodingSource *font = static_cast<FontEncodingSource *>(FUN_0019dc44(fontIndex)->font);
    s32 characterCount = 0;
    s32 width = 0;
    FontStringReader reader;
    NwFontGlyph glyph;
    callbackBindingInitFromKind(&reader, font, 0x30);
    FUN_001a64f4(&glyph);
    reader.state = text;
    s32 character = reader.next();
    while (character != 0 && character != '\n') {
        font->vtable->glyph.getGlyph(font, &glyph, character);
        ++characterCount;
        width += static_cast<s8>(glyph.widths.charWidth);
        character = reader.next();
    }
    if (characterCount > 0)
        width = static_cast<s32>(static_cast<f32>(width));
    return width;
}
}
