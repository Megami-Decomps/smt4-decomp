#include "gfx/NamedTextureCache.h"

extern "C" {
extern BattleEffectTextureSlot g_pendingTextures[26];
extern NamedTextureCache g_textureCache;
s32 libc_strcmp(const char *left, const char *right);
void sysMemClear(void *data, u32 size);
char *strncpy(char *destination, const char *source, u32 count);
AsdTexture *asdTextureCreate(u32 flags);
}

static __inline AsdTexture *findNamedTexture(const char *name)
{
    BattleEffectTextureSlot *entry = g_pendingTextures;
    for (s32 index = 0; index < 26; ++index, ++entry) {
        if (libc_strcmp(entry->name, name) == 0) {
            return entry->texture;
        }
    }
    entry = g_textureCache.entries;
    for (s32 index = 0; index < g_textureCache.count; ++index, ++entry) {
        if (entry->texture != 0 && libc_strcmp(entry->name, name) == 0) {
            return entry->texture;
        }
    }
    return 0;
}

// Reuse a named texture when available; otherwise reserve a dynamic cache entry.
extern "C" u32 effectTextureFindOrReserve(const char *name)
{
    AsdTexture *texture = findNamedTexture(name);
    if (texture != NULL) {
        return reinterpret_cast<u32>(texture);
    }
    if (g_textureCache.count >= 64) {
        return 0;
    }
    sysMemClear(&g_textureCache.entries[g_textureCache.count], sizeof(BattleEffectTextureSlot));
    strncpy(g_textureCache.entries[g_textureCache.count].name, name, 64);
    texture = asdTextureCreate(0);
    g_textureCache.entries[g_textureCache.count].texture = texture;
    ++g_textureCache.count;
    return reinterpret_cast<u32>(texture);
}
