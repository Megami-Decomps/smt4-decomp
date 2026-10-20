/* NON_MATCHING: register allocation (retail holds the sheet index in r2 and the font info in r3, built swaps them). */
#include "shard/S2NwFont.h"

extern "C" {

/* The widths of a glyph index: from the first width table covering it, else the font default. */
static __inline NwFontCharWidths *fontCharWidths(NwResFontBase *font, u32 glyphIndex)
{
    NwFontInfo *info = font->fontInfo;
    NwFontWidthTable *table;

    for (table = info->widthTable; table != NULL; table = table->next) {
        if (table->firstIndex <= glyphIndex && glyphIndex <= table->lastIndex) {
            return &table->widths[glyphIndex - table->firstIndex];
        }
    }
    return &info->defaultWidths;
}

/* Fills in the glyph record (texture, cell position, widths) for a glyph index. */
void FUN_0050caf0(NwResFontBase *font, NwFontGlyph *glyph, u32 glyphIndex)
{
    NwFontSheetInfo *sheet = font->fontInfo->sheetInfo;
    u32 sheetIndex = glyphIndex / (sheet->sheetRows * sheet->sheetLines);

    glyph->pTexture = sheet->sheetImage + sheet->sheetSize * sheetIndex;
    NwFontCharWidths *widths = fontCharWidths(font, glyphIndex);
    glyph->widths = *widths;
    glyph->pTexObj = font->texObjs != NULL ? &font->texObjs[sheetIndex] : NULL;

    {
        u32 cellInSheet = glyphIndex % (sheet->sheetRows * sheet->sheetLines);
        u32 cellColumn = cellInSheet % sheet->sheetRows;
        u32 cellRow = cellInSheet / sheet->sheetRows;
        u32 cellX = (sheet->cellWidth + 1) * cellColumn + 1;
        u32 cellY = (sheet->cellHeight + 1) * cellRow + 1;

        glyph->height = sheet->cellHeight;
        glyph->texFormat = sheet->sheetFormat;
        glyph->texWidth = sheet->sheetWidth;
        glyph->texHeight = sheet->sheetHeight;
        glyph->cellX = cellX;
        glyph->cellY = cellY;
    }
}

} /* extern "C" */
