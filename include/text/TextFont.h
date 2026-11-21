/* The game's text font object and its nw::font glyph lookup, inlined from ResFontBase. */
#ifndef TEXT_TEXT_FONT_H
#define TEXT_TEXT_FONT_H

#include "shard/S2NwFont.h"

/* This text-font wrapper has its resource pointer at 4, unlike NwResFontBase. */
struct TextFontResourceView {
    /* 0x0 */ u32 reserved;
    /* 0x4 */ NwFontInfo *info;
};

/* One entry of a scan code map: a character code and its glyph index. */
struct TextFontMapEntry {
    /* 0x0 */ u16 code;
    /* 0x2 */ u16 glyphIndex;
};

/* nw::font FontCodeMap: a character code range and how it maps to glyph indices. */
struct TextFontCharMap {
    /* 0x0 */ u16 firstCode;
    /* 0x2 */ u16 lastCode;
    /* 0x4 */ u16 method; /* 0 direct, 1 table, 2 scan */
    /* 0x6 */ u16 reserved;
    /* 0x8 */ TextFontCharMap *next;
    /* 0xc */ u16 data[1];  /* direct: the first glyph index; table: one index per code;
                               scan: an entry count, then TextFontMapEntry pairs */
};

/* nw::font ResFontBase::FindGlyphIndex(const FontCodeMap *, CharCode): one code map's glyph
 * index for a code inside its range, 0xffff if a scan map lacks it. */
static __inline u32 textFontMapGlyphIndex(const TextFontCharMap *map, u32 code)
{
    u16 index = 0xffff;
    switch (map->method) {
    case 0: {
        u16 offset = map->data[0];
        index = (u16)(code - map->firstCode + offset);
        break;
    }
    case 1:
        index = map->data[code - map->firstCode];
        break;
    case 2: {
        const u16 *data = map->data;
        const TextFontMapEntry *first = (const TextFontMapEntry *)(data + 1);
        const TextFontMapEntry *last = (const TextFontMapEntry *)(data + 2 * data[0] - 1);
        while (first <= last) {
            const TextFontMapEntry *middle = first + (last - first) / 2;
            if (middle->code < code) {
                first = middle + 1;
            } else if (code < middle->code) {
                last = middle - 1;
            } else {
                index = middle->glyphIndex;
                break;
            }
        }
        break;
    }
    }
    return index;
}

/* nw::font ResFontBase::FindGlyphIndex(CharCode): the glyph index of a code, 0xffff if no map
 * holds it. */
static __inline u16 textFontFindGlyphIndex(const TextFontResourceView *font, u32 code)
{
    const TextFontCharMap *map = (const TextFontCharMap *)font->info->charMap;
    while (map != NULL) {
        if (map->firstCode <= code && code <= map->lastCode) {
            return textFontMapGlyphIndex(map, code);
        }
        map = map->next;
    }
    return 0xffff;
}

/* nw::font ResFontBase::GetGlyphIndex: missing characters use the font's alternate glyph. */
static __inline u16 textFontGetGlyphIndex(const TextFontResourceView *font, u32 code)
{
    u16 index = textFontFindGlyphIndex(font, code);
    if (index == 0xffff) {
        return font->info->alterCharIndex;
    }
    return index;
}

#endif
