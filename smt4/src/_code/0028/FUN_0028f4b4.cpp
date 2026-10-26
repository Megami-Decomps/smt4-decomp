/* NON_MATCHING: same rows as retail; the stack frame differs (retail 60 bytes: reader at sp+0, glyph at sp+32; ours 44: reader at sp+4, glyph at sp+16, so the 20 bytes of call-live local slots are missing) plus a register swap around the font-record lookup. */
#include "font/FontStringReader.h"
extern "C" {
extern FontRecordPool DAT_00464a70;
void FUN_002aea44(NwFontGlyph *glyph);
u32 libc_strlen(const char *text);

// Measure the decoded text, adding spacing for characters present in the selected font.
f32 FUN_0028f4b4(const char *text, u32 fontIndex, f32 spacing)
{
    f32 width = 0.0f;
    f32 minimum = 0.0f;
    NwFontGlyph glyph;
    FUN_002aea44(&glyph);
    FontRegisteredRecord *record = NULL;
    if (DAT_00464a70.records != NULL && fontIndex < DAT_00464a70.count)
        record = &DAT_00464a70.records[fontIndex];
    if (record == NULL)
        return width;
    FontEncodingSource *font = static_cast<FontEncodingSource *>(record->font);
    FontStringReader reader;
    callbackBindingInitFromKind(&reader, font, 0x30);
    reader.state = text;
    s32 length = libc_strlen(text);
    s32 character = reader.next();
    while (static_cast<const char *>(reader.state) - text <= length) {
        if (!font->vtable->hasGlyph(font, character)) {
            character = reader.next();
            width += static_cast<f32>(static_cast<s8>(glyph.widths.charWidth));
        } else {
            font->vtable->glyph.getGlyph(font, &glyph, character);
            width += static_cast<f32>(static_cast<s8>(glyph.widths.charWidth)) + spacing;
            character = reader.next();
        }
    }
    if (minimum < width)
        minimum = width;
    return minimum;
}
}
