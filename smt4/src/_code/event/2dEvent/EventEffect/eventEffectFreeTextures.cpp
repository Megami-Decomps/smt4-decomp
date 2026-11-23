/* NON_MATCHING: retail addresses the textures from the work pointer's pool word (g_eventEffect + 0x18: EventEffect.cpp
 * defines both, with 0x14 unknown bytes between them); declared extern here, they take a second pool word. */
#include "event/2dEvent/BlinkFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern BlinkFadeWork *g_eventEffect;
extern BlinkFadeTexture DAT_0043df00[2];
void asdTMTexTableReleaseNode(u32 table, u32 node);
void *textureGetIndexedResource(u32 table);
void jobStop(u32 job, s32 flags);
void asdMemFree(void *memory);

/* Releases the blink fade's texture nodes and table entries, stops its job and frees its work. */
void eventEffectFreeTextures(void)
{
    BlinkFadeWork *work = g_eventEffect;
    s32 i;

    for (i = 0; i < 2; i++) {
        if (DAT_0043df00[i].ownsNode) {
            if (asdTMTexTableNodeIsLoaded(DAT_0043df00[i].table, DAT_0043df00[i].node)) {
                asdTMTexTableReleaseNode(DAT_0043df00[i].table, DAT_0043df00[i].node);
            }
            DAT_0043df00[i].ownsNode = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (DAT_0043df00[i].ownsTable) {
            if (textureGetIndexedResource(DAT_0043df00[i].table) != NULL) {
                asdTMTexTableFreeEntry(DAT_0043df00[i].table);
            }
            DAT_0043df00[i].ownsTable = 0;
        }
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_eventEffect = NULL;
}
}
