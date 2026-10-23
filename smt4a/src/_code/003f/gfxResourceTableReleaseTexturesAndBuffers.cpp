#include "shard/W5_W5Match2_PlainData.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystemA *g_aocSystem;
void asdTextureRelease(AsdTexture *texture);
void asdTMTexTableReleaseNode(s32 mode, s32 index);
void FUN_001b2d54(AocSystemA *system, s32 mode, s32 index);
void aocClearFlagD_C(AocSystemA *system, s32 id);
void aocClearFlagD_10(AocSystemA *system, s32 id);
void asdMemFree(void *memory);
void FUN_00419e38(void *resource);

// Release table-managed and independent textures, then clear the owner's loaded allocations.
void gfxResourceTableReleaseTexturesAndBuffers(ResourceTableView *table)
{
    // The allocation members extend beyond the shared table-view prefix.
    struct ResourceOwnerView {
        ResourceTableView table;
        void *auxiliary[4];
        void *buffer;
        void *scratch;
        void *staging;
        u8 unk34[8];
        u8 loaded;
        u8 pending;
        u8 unk3E[6];
        void *resource;
    };
    typedef char ResourceOwnerViewOffsets[__INTADDR__(&((ResourceOwnerView *)0)->buffer) == 0x28 && __INTADDR__(&((ResourceOwnerView *)0)->resource) == 0x44 ? 1 : -1];
    ResourceOwnerView *owner = reinterpret_cast<ResourceOwnerView *>(table);
    if (owner->table.entries) {
        for (s32 index = 0; index < owner->table.header->count; ++index) {
            TableResourceEntry *entry = &owner->table.entries[index];
            if (entry->resource) {
                if (entry->textureIndex >= 0) {
                    asdTMTexTableReleaseNode(owner->table.identity.mode, entry->textureIndex);
                    FUN_001b2d54(g_aocSystem, owner->table.identity.mode, entry->textureIndex);
                } else {
                    asdTextureRelease(static_cast<AsdTexture *>(entry->resource));
                }
                entry->resource = 0;
                entry->textureIndex = -1;
            }
        }
    }
    if (owner->buffer) {
        if (owner->table.identity.mode == 6)
            aocClearFlagD_10(g_aocSystem, owner->table.identity.id);
        else
            aocClearFlagD_C(g_aocSystem, owner->table.identity.id);
        asdMemFree(owner->buffer);
        owner->table.header = 0;
        owner->table.entries = 0;
        owner->auxiliary[0] = 0;
        owner->auxiliary[1] = 0;
        owner->auxiliary[2] = 0;
        owner->auxiliary[3] = 0;
        owner->buffer = 0;
        owner->loaded = 0;
        owner->pending = 0;
    }
    if (owner->scratch) {
        asdMemFree(owner->scratch);
        owner->scratch = 0;
    }
    if (owner->staging) {
        asdMemFree(owner->staging);
        owner->staging = 0;
    }
    if (owner->resource) {
        FUN_00419e38(owner->resource);
        if (owner->resource) {
            asdMemFree(owner->resource);
            owner->resource = 0;
        }
    }
    owner->table.identity.id = 0;
}
}
