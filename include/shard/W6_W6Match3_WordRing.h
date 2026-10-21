#ifndef SHARD_W6_W6MATCH3_WORDRING_H
#define SHARD_W6_W6MATCH3_WORDRING_H

#include "common.h"

struct WordRing {
    u32 unk00;          // 0x00
    u32* items;         // 0x04
    u32* end;           // 0x08
    u32* storageEnd;    // 0x0c
    u32 head;           // 0x10
    u32 tail;           // 0x14
    u32 count;          // 0x18
    u32 capacity;       // 0x1c
};

extern "C" WordRing* ringInitialize(WordRing* ring, u32 capacity);

#endif
