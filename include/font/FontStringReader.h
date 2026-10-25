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
struct FontRegisteredRecord : FontGlyphResourceOwner {
    u8 unk0c[0x20];
};
struct FontRecordPool {
    FontRegisteredRecord *records;
    u32 count;
};
typedef char FontRecordPoolLayoutCheck[sizeof(FontRegisteredRecord) == 0x2c &&
    offsetof(FontRecordPool, count) == 4 && sizeof(FontRecordPool) == 8 ? 1 : -1];
typedef char FontStringReaderLayoutCheck[
    sizeof(FontStringReader) == 12 && offsetof(FontStringReader, callback) == 4 &&
    offsetof(FontGlyphLookupVTable, glyph.getGlyph) == 0x40 &&
    offsetof(FontEncodingSourceVtable, getKind) == 0x48 && sizeof(FontEncodingSource) == 4 ? 1 : -1];
extern "C" void callbackBindingInitFromKind(FontStringReader *, FontEncodingSource *, s32 format);
#endif
