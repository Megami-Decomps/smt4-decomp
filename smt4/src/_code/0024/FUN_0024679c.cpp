/* NON_MATCHING: retail addresses the cache through a literal 0x1000 past g_textureCache
 * (DAT_0047e200: count/state at +0x300/+0x304, the entries at -0x1000). Defining the struct, or the
 * entries/count/state as separate objects, in this unit does not reproduce that anchor (armcc keeps
 * the object base, and orders small objects first). */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct TextureCacheEntry {
    AsdTexture *texture; // 0x00
    u8 unk04[0x48];
};
struct TextureCache {
    TextureCacheEntry entries[64]; // 0x0000
    s32 count; // 0x1300
    s32 state; // 0x1304: 4 once every texture is in place
};

extern "C" {
extern TextureCache g_textureCache;

/* Returns 1 while a cached texture still has no image in place; otherwise marks the cache ready
 * and returns 0. */
s32 FUN_0024679c(void)
{
    TextureCache *cache = &g_textureCache;
    cache->state = 0;
    for (s32 i = 0; i < cache->count; i++) {
        if (cache->entries[i].texture->image.physicalAddress == 0) {
            return 1;
        }
    }
    cache->state = 4;
    return 0;
}
}
