/* The item fields the stack-limit lookup reads: the item's category, and the per-category records
 * that carry a limit bitfield. */
#ifndef SHARD_ITEMSTACKLIMIT_H
#define SHARD_ITEMSTACKLIMIT_H

#include "common.h"

struct ItemCategoryEntry {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 storage;      /* 0: unlimited, 1: limited per type */
};

struct ItemRecordA {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 unk44Low : 8;
    /* 0x44 */ u32 limit : 24;
};

struct ItemRecordB {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u16 unk72Low : 2;
    /* 0x72 */ u16 limit : 5;
    /* 0x72 */ u16 unk72High : 9;
};

#endif
