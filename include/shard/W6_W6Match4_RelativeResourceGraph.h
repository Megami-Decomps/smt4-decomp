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
    u8 unk00[0xc8];
    ResourceRelativePointer<ResourceRelativePointer<void> > elements; // 0xc8
};
struct RelativeResourceEntry {
    ResourceRelativePointer<RelativeResourceRecord> record;
    u8 unk04[0x0c];
};
struct RelativeResourceTable {
    u8 unk00[0x28];
    RelativeResourceEntry entries[1]; // 0x28, stride0x10
};
struct RelativeResourceBlob {
    u8 unk00[0x20];
    ResourceRelativePointer<RelativeResourceTable> table; // 0x20
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

#endif
