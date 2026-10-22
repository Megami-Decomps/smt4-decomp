/* NON_MATCHING: the key search loop allocates differently (retail keeps the table in sl and tests the result sign with lsrs); logic matches. */
#include "common.h"

extern "C" {

typedef struct ResourceKey {
    /* 0x0 */ u32 id;
    /* 0x4 */ u8 type;
    /* 0x5 */ u8 variant;
    /* 0x6 */ u8 unk6[2];
} ResourceKey;

typedef struct ResourceKeyTable {
    /* 0x0 */ ResourceKey *entries;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 count;
} ResourceKeyTable;

u32 FUN_002b5c44(void);
s32 tokenResolveAddress(u32 context, ResourceKeyTable **table, u32 token);

/* Look up each of `count` keys in the token's table and copy the matching entries to `out`;
 * returns 0, the resolve error, or 0xC8813890 when a key is missing. */
s32 FUN_003df3b4(u32 *token, ResourceKey *out, const ResourceKey *keys, u32 count)
{
    ResourceKeyTable *table;
    s32 result = tokenResolveAddress(FUN_002b5c44(), &table, *token);
    u32 i;
    u32 j;

    if (result < 0) {
        return result;
    }
    for (i = 0; i < count; i++) {
        for (j = 0;; j++) {
            if (j >= table->count) {
                return 0xC8813890;
            }
            if (keys[i].type == table->entries[j].type && keys[i].id == table->entries[j].id &&
                keys[i].variant == table->entries[j].variant) {
                break;
            }
        }
        out[i] = table->entries[j];
    }
    return 0;
}

} /* extern "C" */
