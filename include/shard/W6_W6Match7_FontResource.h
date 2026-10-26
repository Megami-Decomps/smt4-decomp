#ifndef SHARD_W6_W6MATCH7_FONTRESOURCE_H
#define SHARD_W6_W6MATCH7_FONTRESOURCE_H

#include "shard/S2NwFont.h"
#include <stddef.h>

struct NwFontFileHeader {
    /* 0x00 */ u32 signature;
    /* 0x04 */ u16 byteOrder;
    /* 0x06 */ u16 headerSize;
    /* 0x08 */ u32 version;
    /* 0x0c */ u32 fileSize;
    /* 0x10 */ u16 blockCount;
    /* 0x12 */ u16 reserved;
};

struct NwFontBlockHeader {
    u32 signature;
    u32 byteSize;
};
struct NwFontCharacterMap {
    u16 first;
    u16 last;
    u16 method;
    u16 reserved;
    NwFontCharacterMap *next;
};
typedef char NwFontBinaryBlockOffsets[sizeof(NwFontBlockHeader) == 8 &&
    offsetof(NwFontCharacterMap, next) == 8 &&
    sizeof(NwFontCharacterMap) == 0xC ? 1 : -1];

struct FontGlyphLookup;
struct FontGlyphLookupVTable {
    union {
        u8 unk00[0x44];
        struct {
            u8 unk00[0x40];
            void (*getGlyph)(FontGlyphLookup *font, NwFontGlyph *glyph, s32 character); // 0x40
        } glyph;
    };
    /* 0x44 */ bool (*hasGlyph)(FontGlyphLookup *font, u32 code);
};
struct FontGlyphLookup {
    /* 0x00 */ FontGlyphLookupVTable *vtable;
};
struct FontGlyphResourceOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ FontGlyphLookup *font;
};
typedef char FontGlyphLookupVTableSizeCheck[sizeof(FontGlyphLookupVTable) == 0x48 ? 1 : -1];
typedef char FontGlyphResourceOwnerSizeCheck[sizeof(FontGlyphResourceOwner) == 0x0C ? 1 : -1];

extern "C" {
bool nw_font_ResFontSetResource(NwResFontBase* font, NwFontFileHeader* file);
void nw_font_ResFontSetResourceBuffer(NwResFontBase* font, NwFontFileHeader* file, NwFontInfo* info);
}

#endif
