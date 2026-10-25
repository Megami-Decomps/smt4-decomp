/* NON_MATCHING: register allocation only (the global base, kind * 3 and the entry pointer land in r7/r5/r4 in retail, r8/r7/r5 here). */
#include "event/2dEvent/EventEffect.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct EventFilterWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 timer;
    f32 scale;
    f32 offset;
    u32 kind;
    s32 duration;
};

extern "C" {

extern EventEffectGlobalsA g_eventEffect;
void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void *textureGetIndexedResource(u32 index);

/* Stop the event filter: release its texture, drop the shared filter texture when unused, and free the work. */
void FUN_0039b7fc(void)
{
    EventFilterWork *work = g_eventEffect.filterState.work;
    u32 kind = work->kind;

    if (kind < 6) {
        EventFilterTexture *textures = g_eventEffect.filterTextures;
        if (textures[kind].requested) {
            if (asdTMTexTableNodeIsLoaded(textures[kind].table, textures[kind].node)) {
                asdTMTexTableReleaseNode(textures[kind].table, textures[kind].node);
            }
            textures[kind].requested = 0;
        }
        if (g_eventEffect.textureUsers > 0) {
            g_eventEffect.textureUsers--;
        } else if (textureGetIndexedResource(0x35) != NULL) {
            asdTMTexTableFreeEntry(0x35);
            g_eventEffect.textureUsers = 0;
        }
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_eventEffect.filterState.work = NULL;
}

} /* extern "C" */
