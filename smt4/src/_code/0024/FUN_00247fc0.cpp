/* NON_MATCHING: equivalent glyph search, but register allocation and fallback block placement differ. */
#include "shard/S2NwFont.h"

/* This text-font wrapper has its resource pointer at 4, unlike NwResFontBase. */
struct TextFontResourceView {
    u32 reserved;
    NwFontInfo *info;
};

struct TextFontMapEntry {
    u16 code;
    u16 glyphIndex;
};

struct TextFontCharMap {
    u16 firstCode;
    u16 lastCode;
    u16 method;
    u16 reserved;
    TextFontCharMap *next;
    u16 data[1];
};

static inline u32 textFontFindGlyphIndex(NwFontInfo *info, u32 code)
{
    for (TextFontCharMap *map = (TextFontCharMap *)info->charMap; map; map = map->next) {
        if (code < map->firstCode || code > map->lastCode)
            continue;
        u32 index = 0xffff;
        switch (map->method) {
        case 0:
            index = (u16)(map->data[0] + (code - map->firstCode));
            break;
        case 1:
            index = map->data[code - map->firstCode];
            break;
        case 2: {
            u16 *data = map->data;
            TextFontMapEntry *first = (TextFontMapEntry *)(data + 1);
            TextFontMapEntry *last = (TextFontMapEntry *)(data + 2 * data[0] - 1);
            while (first <= last) {
                TextFontMapEntry *middle = first + (last - first) / 2;
                if (middle->code > code)
                    last = middle - 1;
                if (middle->code < code)
                    first = middle + 1;
                if (middle->code == code) {
                    index = middle->glyphIndex;
                    break;
                }
            }
            break;
        }
        }
        return index == 0xffff ? info->alterCharIndex : index;
    }
    return info->alterCharIndex;
}

/* Resolve a character and return the texture sheet that contains its glyph. */
extern "C" u32 FUN_00247fc0(TextFontResourceView *font, u32 code)
{
    NwFontInfo *info = font->info;
    u32 cellsPerSheet = info->sheetInfo->sheetRows * info->sheetInfo->sheetLines;
    return textFontFindGlyphIndex(info, code) / cellsPerSheet;
}
