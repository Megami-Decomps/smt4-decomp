/* NON_MATCHING: retail reserves 60 frame bytes versus 44; registry registers and missing-glyph loop block placement differ. */
#include "font/FontStringReader.h"
extern "C" {
extern FontRecordPool DAT_005b3bc0;
void FUN_001a64f4(NwFontGlyph *glyph);
u32 libc_strlen(const char *text);

// Measure the decoded text, adding spacing for characters present in the selected font.
f32 FUN_00168594(const char *text, u32 fontIndex, f32 spacing)
{
    f32 width = 0.0f;
    f32 minimum = 0.0f;
    NwFontGlyph glyph;
    FUN_001a64f4(&glyph);
    FontRegisteredRecord *record = NULL;
    if (DAT_005b3bc0.records != NULL && fontIndex < DAT_005b3bc0.count)
        record = &DAT_005b3bc0.records[fontIndex];
    if (record == NULL)
        return width;
    FontEncodingSource *font = static_cast<FontEncodingSource *>(record->font);
    FontStringReader reader;
    callbackBindingInitFromKind(&reader, font, 0x30);
    reader.state = text;
    s32 length = libc_strlen(text);
    s32 character = reader.next();
    while (static_cast<const char *>(reader.state) - text <= length) {
        if (font->vtable->hasGlyph(font, character)) {
            font->vtable->glyph.getGlyph(font, &glyph, character);
            width += static_cast<f32>(static_cast<s8>(glyph.widths.charWidth)) + spacing;
            character = reader.next();
        } else {
            character = reader.next();
            width += static_cast<f32>(static_cast<s8>(glyph.widths.charWidth));
        }
    }
    if (minimum < width)
        minimum = width;
    return minimum;
}
}
