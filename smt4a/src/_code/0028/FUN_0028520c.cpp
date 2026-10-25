/* NON_MATCHING: The lookup key stack frame prevents the retail final tail delegation. */
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
struct TextureReadinessEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ s16 textureIndex;
};
extern "C" {
void* libc_bsearch(const void*, const void*, u32, u32, s32 (*)(const void*, const void*));
s32 FUN_002321f8(const void*, const void*);
}

extern "C" s32 FUN_0028520c(u32 id)
{
    void* table = dataTableGet(0x47, 0);
    void* entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    TextureReadinessEntry key;
    key.id = (u16)id;
    const TextureReadinessEntry* entry = (const TextureReadinessEntry*)libc_bsearch(&key, entries, count,
        sizeof(TextureReadinessEntry), FUN_002321f8);
    if (entry == NULL || entry->textureIndex < 0) {
        return 0;
    }
    u32 textureIndex = entry->textureIndex;
    if (reinterpret_cast<void*>(textureGetIndexedResource(0x34)) == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(0x34, textureIndex);
}
