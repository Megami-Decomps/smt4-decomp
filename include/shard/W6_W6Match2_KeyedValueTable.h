#ifndef SHARD_W6_W6MATCH2_KEYED_VALUE_TABLE_H
#define SHARD_W6_W6MATCH2_KEYED_VALUE_TABLE_H

#include "common.h"
#include <stddef.h>

struct NodeEnableNode;

struct KeyedValueSlot {
    union {
        u32 value;       // 0x00
        NodeEnableNode *model;
    };
    s32 firstKey;    // 0x04
    s32 secondKey;   // 0x08
    union {
        u8 unk0c[0x1c]; // 0x0c
        struct {
            u8 unk0cBeforeAction[0x10];
            s32 index; // 0x1c
            u32 unk20;
            u32 flags; // 0x24
        } action;
    };
};

struct KeyedValueTable {
    u8 unk000[0x190];        // 0x000
    KeyedValueSlot slots[50]; // 0x190
};

typedef char KeyedValueSlotActionOffsets[
    sizeof(KeyedValueSlot) == 0x28 &&
    offsetof(KeyedValueSlot, model) == 0 &&
    offsetof(KeyedValueSlot, action.index) == 0x1C &&
    offsetof(KeyedValueSlot, action.flags) == 0x24 &&
    offsetof(KeyedValueTable, slots) == 0x190 ? 1 : -1];

#endif
