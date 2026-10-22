/* NON_MATCHING: cache receivers occupy opposite r4/r5 roles and address writeback differs from retail. */
#include "shard/Shard0039.h"

extern "C" {
u32 requestIdToCode(u32 request);
s32 asdTMTexTableNodeIsLoaded(u32 group, u32 code);
void asdTMTexLoadMainHeap(u32 group, u32 code);

/* Queue a texture only when it is neither loaded nor already pending. */
void textureRequestCacheGet(TextureRequestCache *cache, u32 request)
{
    if (cache == NULL) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(46, requestIdToCode(request)) == 0) {
        u32 *state = &cache->states[request];
        if (*state != 3 && *state != 2) {
            asdTMTexLoadMainHeap(46, requestIdToCode(request));
            *state = 2;
        }
    }
}
}
