/* NON_MATCHING: The lookup key stack frame prevents the retail final tail delegation. */
#include "gamedata/DataTable.h"
struct TextureReadinessEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ s16 textureIndex;
};
extern "C" {
void* libc_bsearch(const void*, const void*, u32, u32, s32 (*)(const void*, const void*));
s32 FUN_002321f8(const void*, const void*);
void* textureGetIndexedResource(u32);
s32 asdTMTexTableNodeIsLoaded(u32, u32);
}

static __inline const TextureReadinessEntry* textureFindReadinessEntry(u32 id)
{
    void* table = dataTableGet(0x47, 0);
    void* entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    u16 key = (u16)id;
    return (const TextureReadinessEntry*)libc_bsearch(&key, entries, count,
        sizeof(TextureReadinessEntry), FUN_002321f8);
}

extern "C" s32 FUN_0028520c(u32 id)
{
    const TextureReadinessEntry* entry = textureFindReadinessEntry(id);
    if (entry == NULL || entry->textureIndex < 0) {
        return 0;
    }
    u32 textureIndex = entry->textureIndex;
    if (textureGetIndexedResource(0x34) == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(0x34, textureIndex);
}
