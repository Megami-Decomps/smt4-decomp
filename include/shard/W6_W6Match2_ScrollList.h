#ifndef SHARD_W6_W6MATCH2_SCROLL_LIST_H
#define SHARD_W6_W6MATCH2_SCROLL_LIST_H

#include "common.h"

struct ScrollList {
    u8 unk00[0x10]; // 0x00
    s32 visible;    // 0x10
    u8 unk14[8];    // 0x14
    s32 count;      // 0x1c
    s32 top;        // 0x20
    s32 offset;     // 0x24
};

struct ScrollSelectionOwner {
    ScrollList primary; // 0x00
    ScrollList list; // 0x28
    s32 entryCount; // 0x50
    u8 unk54[0x0D]; // 0x54
    u8 changed;     // 0x61
    u8 locked;      // 0x62
};

extern "C" u32 scrollListSetSelection(ScrollList* list, s32 index);

#endif
