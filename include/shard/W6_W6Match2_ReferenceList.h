#ifndef SHARD_W6_W6MATCH2_REFERENCE_LIST_H
#define SHARD_W6_W6MATCH2_REFERENCE_LIST_H

#include "shard/W6_W6Match3_ChunkPool.h"

struct SharedReference;

struct ReferenceListNode {
    ReferenceListNode* next;     // 0x00
    ReferenceListNode* previous; // 0x04
    SharedReference* value;      // 0x08
};

// Prefix only: complete pooled lists also have a node-count tail at 0x14.
// Do not use this view as a complete allocation size or array stride.
struct ReferenceList {
    ChunkPool pool;          // 0x00: allocator prefix, formerly opaque bytes
    ReferenceListNode* end;  // 0x10
};

struct ReferenceListIterator {
    ReferenceListNode* node; // 0x00

    ReferenceListIterator() {}
    explicit ReferenceListIterator(ReferenceListNode* value) : node(value) {}
};

#endif
