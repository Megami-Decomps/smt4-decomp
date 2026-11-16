#ifndef GAMEDATA_TEXTURE_ID_TABLE_H
#define GAMEDATA_TEXTURE_ID_TABLE_H

#include "gamedata/DataTable.h"

/* A 4-byte row of data table 0x47, sorted by id: the node of texture table 0x34 the id shows
 * (negative: none). */
struct TextureIdRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ s16 textureIndex;
};
typedef char TextureIdRecordSizeCheck[sizeof(TextureIdRecord) == 4 ? 1 : -1];

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));
s32 textureIdRecordCompare(const void *left, const void *right);
}

/* The row of data table 0x47 with the id, or NULL. */
static __inline const TextureIdRecord *textureIdTableFind(u32 id)
{
    void *table = dataTableGet(0x47, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    TextureIdRecord key;
    key.id = (u16)id;
    return (const TextureIdRecord *)libc_bsearch(&key, entries, count, sizeof(TextureIdRecord), textureIdRecordCompare);
}

#endif
