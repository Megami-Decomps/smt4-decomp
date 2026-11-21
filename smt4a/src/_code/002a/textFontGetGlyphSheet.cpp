#include "text/TextFont.h"

/* Resolve a character and return the texture sheet that contains its glyph. */
extern "C" u32 textFontGetGlyphSheet(TextFontResourceView *font, u32 code)
{
    const NwFontSheetInfo *sheet = font->info->sheetInfo;
    u32 cellsPerSheet = sheet->sheetRows * sheet->sheetLines;
    return textFontGetGlyphIndex(font, code) / cellsPerSheet;
}
