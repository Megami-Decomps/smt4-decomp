/* NON_MATCHING: near (205 rows against 207): retail keeps the texture resource in r3 and copies it to r4 per kind, shares one release-callback tail for kinds 0, 1 and 3, and uses r6/r8/fp/sl for the node, callback, bucket and zero; ours assigns those registers differently and expands the callback call per kind. Cleanup order and the per-kind release sequence follow retail. */
#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match7_TextureBinding.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

#define TEXTURE_CACHE_BUCKETS 512
#define TEXTURE_FACE_COUNT 6

/* A cached texture resource (observed fields): faces from 0x34, a heap handle, and six sub-resources
 * for the multi-part kind. */
struct TextureResource {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ u32 storage;
    /* 0x030 */ u8 unk030[4];
    /* 0x034 */ DefaultTextureStorage face[TEXTURE_FACE_COUNT];
    /* 0x1CC */ u8 unk1CC[0x638];
    /* 0x804 */ void *part[6];
};

/* A node of a cache bucket chain. */
struct TextureCacheNode {
    /* 0x00 */ TextureResource *resource;
    /* 0x04 */ u32 kind;             /* 0 single face, 1 six faces, 2 plain block, 3 multi-part */
    /* 0x08 */ u32 unk08;
    /* 0x0C */ TextureCacheNode *next;
};

/* The texture binding cache (observed fields). */
struct TextureCache {
    /* 0x000 */ TextureResource *defaultPrimary;
    /* 0x004 */ TextureResource *defaultSecondary;
    /* 0x008 */ void *storage;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ TextureCacheNode *bucket[TEXTURE_CACHE_BUCKETS];
};

typedef char TextureCacheLayoutCheck[
    sizeof(TextureCacheNode) == 0x10 && offsetof(TextureCache, bucket) == 0x10 &&
    offsetof(TextureResource, part) == 0x804 && sizeof(DefaultTextureStorage) == 0x44 ? 1 : -1];

extern "C" {

extern void (*g_gfxReleaseCallback)(u32 heap, u32 alignment, u32 flags, void *block);
extern TextureBindingState *g_textureBindingState;
extern TextureCache *g_textureBindingCache;

void gfxTextureStorageUnbind(DefaultTextureStorage *face);
void gfxTextureStorageRelease(u32 storage, DefaultTextureStorage *face);
void memClear(void *memory, u32 size);

/* Releases every block through the graphics release callback, if one is installed. */
#define GFX_RELEASE(block) \
    do { \
        if (g_gfxReleaseCallback != NULL) { \
            g_gfxReleaseCallback(0x10000, 0x100, 0, (block)); \
        } \
    } while (0)

/* Frees every cached texture binding (by kind), the binding bookkeeping and the cache itself. */
void FUN_00112014(void)
{
    TextureBindingState *state;
    s32 bucket;
    s32 i;

    if (g_textureBindingCache == NULL) {
        return;
    }
    state = g_textureBindingState;
    for (bucket = 0; bucket < TEXTURE_CACHE_BUCKETS; bucket++) {
        TextureCacheNode *node = g_textureBindingCache->bucket[bucket];

        while (node != NULL) {
            TextureResource *resource = node->resource;
            TextureCacheNode *next = node->next;

            if (resource != NULL) {
                if (node->kind == 0) {
                    gfxTextureStorageUnbind(&resource->face[0]);
                    gfxTextureStorageRelease(resource->storage, &resource->face[0]);
                    GFX_RELEASE(resource);
                } else if (node->kind == 1) {
                    for (i = 0; i < TEXTURE_FACE_COUNT; i++) {
                        gfxTextureStorageUnbind(&resource->face[i]);
                        gfxTextureStorageRelease(resource->storage, &resource->face[i]);
                    }
                    GFX_RELEASE(resource);
                } else if (node->kind == 2) {
                    GFX_RELEASE(resource);
                } else if (node->kind == 3) {
                    if (resource->part[0] != NULL) {
                        GFX_RELEASE(resource->part[0]);
                    }
                    if (resource->part[1] != NULL) {
                        GFX_RELEASE(resource->part[1]);
                    }
                    if (resource->part[2] != NULL) {
                        GFX_RELEASE(resource->part[2]);
                    }
                    if (resource->part[3] != NULL) {
                        GFX_RELEASE(resource->part[3]);
                    }
                    if (resource->part[4] != NULL) {
                        GFX_RELEASE(resource->part[4]);
                    }
                    if (resource->part[5] != NULL) {
                        GFX_RELEASE(resource->part[5]);
                    }
                    GFX_RELEASE(resource);
                } else {
                    GFX_RELEASE(node);
                    node = next;
                    continue;
                }
                node->resource = NULL;
            }
            GFX_RELEASE(node);
            node = next;
        }
    }
    state->sources.primary[0] = NULL;
    state->sources.secondary[0] = NULL;
    state->sources.primary[1] = NULL;
    state->sources.secondary[1] = NULL;
    state->sources.primary[2] = NULL;
    state->sources.secondary[2] = NULL;
    memClear(state->sources.unk1c, 0x80);
    *(u32 *)((u8 *)state + 0xF4) = 0;
    {
        TextureResource *primary = g_textureBindingCache->defaultPrimary;

        gfxTextureStorageUnbind(&primary->face[0]);
        gfxTextureStorageRelease(primary->storage, &primary->face[0]);
        GFX_RELEASE(primary);
    }
    {
        TextureResource *secondary = g_textureBindingCache->defaultSecondary;

        for (i = 0; i < TEXTURE_FACE_COUNT; i++) {
            gfxTextureStorageUnbind(&secondary->face[i]);
            gfxTextureStorageRelease(secondary->storage, &secondary->face[i]);
        }
        GFX_RELEASE(secondary);
    }
    GFX_RELEASE(g_textureBindingCache->storage);
    g_textureBindingCache = NULL;
}

} /* extern "C" */
