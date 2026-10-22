/* NON_MATCHING: the texture subobject is addressed from the global base instead of a retained pointer. */
#include "event/2dEvent/EventEffect.h"

extern "C" {
void jobStop(u32 job, u32 mode);
void asdMemFree(void *memory);
u32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void asdTMTexTableFreeEntry(u32 table);
void *textureGetIndexedResource(u32 table);
extern EventEffectGlobalsA g_eventEffect;

void FUN_0039b8ac()
{
    EventEffectA *work = static_cast<EventEffectA *>(g_eventEffect.unk08);
    if (g_eventEffect.texture.requested) {
        if (asdTMTexTableNodeIsLoaded(g_eventEffect.texture.table,
                                     g_eventEffect.texture.node)) {
            asdTMTexTableReleaseNode(g_eventEffect.texture.table,
                                     g_eventEffect.texture.node);
        }
        g_eventEffect.texture.requested = 0;
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
