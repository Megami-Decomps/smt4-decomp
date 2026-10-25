/* NON_MATCHING: cache and request occupy opposite r4/r5 saved registers; direct state accesses reproduce retail addressing. */
#include "shard/Shard0039.h"

struct TextureNode;
extern "C" {
u32 requestIdToCode(u32 request);
s32 asdTMTexTableNodeIsLoaded(u32 group, u32 code);
TextureNode *asdTMTexLoadMainHeap(u32 group, u32 code);

/* Queue a texture only when it is neither loaded nor already pending. */
void textureRequestCacheGet(TextureRequestCache *cache, u32 request)
{
    if (cache == NULL)
        return;
    if (asdTMTexTableNodeIsLoaded(46, requestIdToCode(request)) == 0) {
        if (cache->states[request] != 3 && cache->states[request] != 2) {
            asdTMTexLoadMainHeap(46, requestIdToCode(request));
            cache->states[request] = 2;
        }
    }
}
}
