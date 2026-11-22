#ifndef FONT_FONTSTRINGREADER_H
#define FONT_FONTSTRINGREADER_H
#include "shard/W6_W6Match7_FontResource.h"
#include <stddef.h>

class FontStringCursor {
public:
    const void *state;
};
typedef s32 (FontStringCursor::*FontNextCharacter)();
struct FontStringReader : FontStringCursor {
    FontNextCharacter callback;
    s32 next() { return (this->*callback)(); }
};
struct FontEncodingSource;
struct FontEncodingSourceVtable : FontGlyphLookupVTable {
    s32 (*getKind)(FontEncodingSource *);
};
struct FontEncodingSource : FontGlyphLookup {
    s32 getKind() { return static_cast<FontEncodingSourceVtable *>(vtable)->getKind(this); }
};
struct AsdTexture;
/* One loaded font of AsdFont's table (0x2C bytes): the file, its reader and one texture per glyph sheet. */
struct FontRegisteredRecord : FontGlyphResourceOwner {
    /* 0x0C */ AsdTexture **textures;  /* sheetCount textures over the file's sheet images */
    /* 0x10 */ u32 sheetCount;
    /* 0x14 */ u16 format;             /* the sheets' NwFontSheetInfo::sheetFormat */
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ u32 glFormat;           /* the GL format, type and texel size that format maps to */
    /* 0x1C */ u32 glType;
    /* 0x20 */ u32 bitsPerTexel;
    /* 0x24 */ u8 mode;                /* 2 for alpha-only sheets (GL_ALPHA_NATIVE_DMP), else 1 */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ f32 unk28;              /* cleared on load */
};
struct FontRecordPool {
    FontRegisteredRecord *records;
    u32 count;
};
typedef char FontRecordPoolLayoutCheck[sizeof(FontRegisteredRecord) == 0x2c &&
    offsetof(FontRegisteredRecord, textures) == 0xc && offsetof(FontRegisteredRecord, glFormat) == 0x18 &&
    offsetof(FontRegisteredRecord, mode) == 0x24 && offsetof(FontRegisteredRecord, unk28) == 0x28 &&
    offsetof(FontRecordPool, count) == 4 && sizeof(FontRecordPool) == 8 ? 1 : -1];
typedef char FontStringReaderLayoutCheck[
    sizeof(FontStringReader) == 12 && offsetof(FontStringReader, callback) == 4 &&
    offsetof(FontGlyphLookupVTable, glyph.getGlyph) == 0x40 &&
    offsetof(FontEncodingSourceVtable, getKind) == 0x48 && sizeof(FontEncodingSource) == 4 ? 1 : -1];
extern "C" void callbackBindingInitFromKind(FontStringReader *, FontEncodingSource *, s32 format);
#endif
