/* NON_MATCHING: name/global saved registers and cache-count reload after texture store differ. */
#include "gfx/NamedTextureCache.h"

extern "C" {
extern NamedTextureEntry g_pendingTextures[26];
extern NamedTextureEntry g_textureCache[];
extern NamedTextureCacheState DAT_005cc200;
s32 libc_strcmp(const char *left, const char *right);
void sysMemClear(void *data, u32 size);
char *strncpy(char *destination, const char *source, u32 count);
u32 asdTextureCreate(u32 flags);
}

static __inline u32 findNamedTexture(const char *name)
{
    NamedTextureEntry *entry = g_pendingTextures;
    for (s32 index = 0; index < 26; ++index, ++entry) {
        if (libc_strcmp(entry->name, name) == 0) {
            return entry->texture;
        }
    }
    entry = g_textureCache;
    for (s32 index = 0; index < DAT_005cc200.count; ++index, ++entry) {
        if (entry->texture != 0 && libc_strcmp(entry->name, name) == 0) {
            return entry->texture;
        }
    }
    return 0;
}

// Reuse a named texture when available; otherwise reserve a dynamic cache entry.
extern "C" u32 FUN_0031b53c(const char *name)
{
    u32 texture = findNamedTexture(name);
    if (texture != 0) {
        return texture;
    }
    if (DAT_005cc200.count >= 64) {
        return 0;
    }
    sysMemClear(&g_textureCache[DAT_005cc200.count], sizeof(NamedTextureEntry));
    strncpy(g_textureCache[DAT_005cc200.count].name, name, 64);
    texture = asdTextureCreate(0);
    g_textureCache[DAT_005cc200.count].texture = texture;
    ++DAT_005cc200.count;
    return texture;
}
