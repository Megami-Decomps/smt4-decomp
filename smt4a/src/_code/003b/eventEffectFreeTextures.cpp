/* NON_MATCHING: registers and instructions match except the texture array takes its own pool word.
 * Retail addresses it at g_eventEffect + 0x1C because EventEffect.cpp defines both objects. */
#include "event/2dEvent/EventEffect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {

extern EventEffectGlobalsA g_eventEffect;

void asdTMTexTableReleaseNode(u32 table, u32 node);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *ptr);

/* Releases the blink fade's texture nodes and table entries, stops its job and frees its work. */
void eventEffectFreeTextures(void)
{
    EventBannerWork *work = g_eventEffect.filterState.banner;
    s32 i;

    for (i = 0; i < 2; i++) {
        if (g_eventBannerTextures[i].requested) {
            if (asdTMTexTableNodeIsLoaded(g_eventBannerTextures[i].table, g_eventBannerTextures[i].node)) {
                asdTMTexTableReleaseNode(g_eventBannerTextures[i].table, g_eventBannerTextures[i].node);
            }
            g_eventBannerTextures[i].requested = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (g_eventBannerTextures[i].entryRequested) {
            if (textureGetIndexedResource(g_eventBannerTextures[i].table) != NULL) {
                asdTMTexTableFreeEntry(g_eventBannerTextures[i].table);
            }
            g_eventBannerTextures[i].entryRequested = 0;
        }
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_eventEffect.filterState.banner = NULL;
}

} /* extern "C" */
