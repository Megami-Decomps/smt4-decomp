/* The item fields the stack-limit lookup reads: the item's category, and the per-category records
 * that carry a limit bitfield. */
#ifndef SHARD_ITEMSTACKLIMIT_H
#define SHARD_ITEMSTACKLIMIT_H

#include "common.h"

/* One id range of the item category table at 0x531158 (12 bytes per entry). */
struct ItemCategoryEntry {
    /* 0x00 */ u32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 storage;      /* 0: unlimited, 1: limited per type */
    /* 0x0A */ u8 unk0A[2];
};

typedef char ItemCategoryEntrySizeCheck[sizeof(ItemCategoryEntry) == 0xC ? 1 : -1];

/* Finds the category entry whose id range contains `id` (NULL when none does). */
extern "C" ItemCategoryEntry *itemCategoryFindByItemId(u32 id);

#endif
