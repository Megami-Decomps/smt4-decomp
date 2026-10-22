#ifndef GFX_VERTEX_BUFFER_TABLE_H
#define GFX_VERTEX_BUFFER_TABLE_H
#include "shard/S1NwGfx.h"

struct GfxResourceDictionaryEntry {
    u8 unk00[0x0C]; // 0x00
    RelativePointer resource; // 0x0C

    VertexBufferResource* getResource() const
    {
        return (VertexBufferResource*)resource.get();
    }
};
struct GfxResourceDictionary {
    u8 unk00[0x1C]; // 0x00
    GfxResourceDictionaryEntry entries[1]; // 0x1C, variable length
};
struct VertexBufferTableHeader {
    u8 unk00[0x24]; // 0x00
    u32 count; // 0x24
    RelativePointer dictionary; // 0x28
};
struct VertexBufferTable {
    VertexBufferTableHeader* header; // 0x00

    GfxResourceDictionaryEntry* begin() const
    {
        GfxResourceDictionary* table = (GfxResourceDictionary*)header->dictionary.get();
        return table != NULL ? table->entries : NULL;
    }

    GfxResourceDictionaryEntry* end() const
    {
        return begin() + header->count;
    }
};
typedef char VertexBufferTableLayoutCheck[sizeof(GfxResourceDictionaryEntry) == 0x10 &&
    offsetof(GfxResourceDictionaryEntry, resource) == 0x0C &&
    offsetof(GfxResourceDictionary, entries) == 0x1C &&
    sizeof(VertexBufferTableHeader) == 0x2C &&
    offsetof(VertexBufferTableHeader, count) == 0x24 &&
    offsetof(VertexBufferTableHeader, dictionary) == 0x28 ? 1 : -1];
#endif
