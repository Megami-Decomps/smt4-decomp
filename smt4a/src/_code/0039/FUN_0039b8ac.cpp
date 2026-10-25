/* NON_MATCHING: retail reads texture.requested through the retained texture pointer (r5), the build folds it into the global base (r6). */
#include "event/2dEvent/EventEffect.h"
#include "util/AsdTMTexTableNodeIsLoaded.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void jobStop(u32 job, u32 mode);
void asdMemFree(void *memory);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void *textureGetIndexedResource(u32 table);
extern EventEffectGlobalsA g_eventEffect;

void FUN_0039b8ac()
{
    EventFilterTexture *texture = &g_eventEffect.texture;
    EventEffectA *work = static_cast<EventEffectA *>(g_eventEffect.unk08);
    if (texture->requested) {
        if (asdTMTexTableNodeIsLoaded(texture->table, texture->node)) {
            asdTMTexTableReleaseNode(texture->table, texture->node);
        }
        texture->requested = 0;
    }
    if (g_eventEffect.textureUsers > 0) {
        --g_eventEffect.textureUsers;
    } else if (textureGetIndexedResource(0x35) != 0) {
        asdTMTexTableFreeEntry(0x35);
        g_eventEffect.textureUsers = 0;
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_eventEffect.unk08 = 0;
}
}
