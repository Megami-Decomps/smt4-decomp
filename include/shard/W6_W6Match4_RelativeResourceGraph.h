#ifndef SHARD_W6_W6MATCH4_RELATIVERESOURCEGRAPH_H
#define SHARD_W6_W6MATCH4_RELATIVERESOURCEGRAPH_H

#include "common.h"

template <class T> struct ResourceRelativePointer {
    s32 offset;

    T *get() const
    {
        return offset != 0 ? (T *)((u8 *)this + offset) : NULL;
    }
};
struct RelativeResourceRecord {
    union {
        u8 unk00[0xc8];
        struct {
            u8 prefix[0xc4];
            u32 count;
        } elementList;
    };
    ResourceRelativePointer<ResourceRelativePointer<void> > elements; // 0xc8

    ResourceRelativePointer<void> *begin() const { return elements.get(); }
    ResourceRelativePointer<void> *end() const { return elements.get() + elementList.count; }
};
struct RelativeResourceEntry {
    ResourceRelativePointer<RelativeResourceRecord> record;
    u8 unk04[0x0c];
};
struct RelativeResourceTable {
    u8 unk00[0x28];
    RelativeResourceEntry entries[1]; // 0x28, stride0x10
};
struct GraphicsModelDictionaryEntry {
    u8 prefix[0xC];
    ResourceRelativePointer<RelativeResourceRecord> model;
};
struct GraphicsModelDictionary {
    u8 prefix[0x1C];
    GraphicsModelDictionaryEntry entries[1];
};
struct RelativeResourceBlob {
    union {
        u8 unk00[0x20];
        struct {
            u8 prefix[0x1C];
            u32 modelCount;
        } models;
    };
    union {
        ResourceRelativePointer<RelativeResourceTable> table; // 0x20
        ResourceRelativePointer<GraphicsModelDictionary> modelDictionary; // 0x20
    };
};
struct RelativeResourceView {
    u8 unk00[0x18];
    RelativeResourceBlob *blob; // 0x18
};
struct RelativeResourceWrapper {
    u32 unk00;
    RelativeResourceView *view; // 0x04
};
struct RelativeResourceOwner {
    u8 unk00[8];
    RelativeResourceWrapper *resource; // 0x08
};
struct GraphicsResourceFile {
    RelativeResourceBlob *data;

    GraphicsModelDictionaryEntry *begin() const
    {
        GraphicsModelDictionary *dictionary = data->modelDictionary.get();
        return dictionary ? dictionary->entries : NULL;
    }
    GraphicsModelDictionaryEntry *end() const { return begin() + data->models.modelCount; }
};
typedef char GraphicsResourceGraphLayoutCheck[
    sizeof(RelativeResourceRecord) == 0xCC && sizeof(RelativeResourceBlob) == 0x24 &&
    sizeof(GraphicsModelDictionaryEntry) == 0x10 && sizeof(GraphicsResourceFile) == 4 &&
    __INTADDR__(&((RelativeResourceRecord *)0)->elementList.count) == 0xC4 &&
    __INTADDR__(&((GraphicsModelDictionary *)0)->entries) == 0x1C &&
    __INTADDR__(&((RelativeResourceBlob *)0)->models.modelCount) == 0x1C &&
    __INTADDR__(&((RelativeResourceBlob *)0)->modelDictionary) == 0x20 ? 1 : -1];

#endif
