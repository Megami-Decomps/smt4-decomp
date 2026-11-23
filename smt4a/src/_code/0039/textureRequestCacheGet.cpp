#include "shard/Shard003B.h"
#include "saveLoadUI/SaveLoadUIBase.h"

struct TextureNode;
extern "C" {
TextureNode *asdTMTexLoadMainHeap(u32 group, u32 code);

/* Starts loading portrait texture `request` of the set unless it is loaded or already loading. */
void textureRequestCacheGet(ResSet *set, u32 request)
{
    if (set == NULL)
        return;
    if (!requestTextureIsLoaded(request)) {
        if (set->states[request] != RES_SET_TEXTURE_LOADED && set->states[request] != RES_SET_TEXTURE_LOADING) {
            asdTMTexLoadMainHeap(RES_SET_TEXTURE_TABLE, requestIdToCode(request));
            set->states[request] = RES_SET_TEXTURE_LOADING;
        }
    }
}
}
