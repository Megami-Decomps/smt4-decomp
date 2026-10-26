#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "shard/S1AsdTexTable.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern void* g_sWin;
extern AocSystemA* g_aocSystem;
TexTableNamedEntry* textureGetIndexedResource(u32 index);
void* libc_bsearch(const void* key, const void* entries, u32 count, u32 size,
                   s32 (*compare)(const void*, const void*));
s32 FUN_002321f8(const void* key, const void* record);
u32 aocRunByName(AocSystemA* system, u32 slot, s32 resource, u32 flags);
void FUN_001a6568(AocSystemA* system, u32 slot, s32 resource, u32 heap);

// Queue a window texture selected by id, preferring its downloadable resource when present.
void sWinRequestMappedTexture(s32 id, u32 options)
{
    struct RequestView {
        u8 unk00[8];
        u32 pending;
        u32 status;
        u32 unk10;
        s32 id;
        u32 phase;
        u8 unk1C[8];
        u32 options;
    };
    struct TextureIndexMapping {
        u16 id;
        s16 resource;
    };
    typedef char RequestOffsets[offsetof(RequestView, pending) == 8 &&
        offsetof(RequestView, status) == 0xC && offsetof(RequestView, id) == 0x14 &&
        offsetof(RequestView, phase) == 0x18 && offsetof(RequestView, options) == 0x24 ? 1 : -1];
    typedef char TextureIndexMappingLayout[sizeof(TextureIndexMapping) == 4 &&
        offsetof(TextureIndexMapping, resource) == 2 ? 1 : -1];
    RequestView* request = static_cast<RequestView*>(g_sWin);
    if (textureGetIndexedResource(52) == NULL) {
        return;
    }
    request->status = 0;
    request->pending = 1;
    request->phase = 0;
    request->options = options;
    static_cast<RequestView*>(g_sWin)->id = id;
    void* table = dataTableGet(0x47, 0);
    const void* entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    s32 resource;
    {
        const u16 key = (u16)id;
        const TextureIndexMapping* mapping = static_cast<const TextureIndexMapping*>(
            libc_bsearch(&key, entries, count, sizeof(TextureIndexMapping), FUN_002321f8));
        if (mapping == NULL) {
            return;
        }
        resource = mapping->resource;
    }
    if (resource < 0) {
        return;
    }
    if (aocRunByName(g_aocSystem, 52, resource, 1) != 0) {
        return FUN_001a6568(g_aocSystem, 52, resource, 0x10000);
    }
    asdTMTexLoadMainHeap(52, resource);
}
}
