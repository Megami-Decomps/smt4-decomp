#include "event/2dEvent/SmokeFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
/* SmokeFade.cpp's state pointer and the two fade images after it. The file defines them: armcc addresses the
 * images from the state's pool word (state + 4), as retail does here, only for data defined in the same file. */
SmokeFadeState *g_smokeFadeState;
SmokeFadeImage g_smokeFadeImages[2] = {{0x22, 4}, {0x22, 5}};

void asdMemFree(void *memory);
void asdTMTexTableReleaseNode(u32 table, u32 node);
s32 textureGetIndexedResource(u32 table);
void jobStop(u32 job, s32 arg);

/* Frees the smoke fade's table file, releases its texture nodes and entries, stops its job and frees the state. */
void smokeFadeDestroy(void)
{
    SmokeFadeState *state = g_smokeFadeState;
    s32 i;

    asdMemFree(state->file);
    for (i = 0; i < 2; i++) {
        if (g_smokeFadeImages[i].loadedNode) {
            if (asdTMTexTableNodeIsLoaded(g_smokeFadeImages[i].table, g_smokeFadeImages[i].node)) {
                asdTMTexTableReleaseNode(g_smokeFadeImages[i].table, g_smokeFadeImages[i].node);
            }
            g_smokeFadeImages[i].loadedNode = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (g_smokeFadeImages[i].loadedTable) {
            if (textureGetIndexedResource(g_smokeFadeImages[i].table)) {
                asdTMTexTableFreeEntry(g_smokeFadeImages[i].table);
            }
            g_smokeFadeImages[i].loadedTable = 0;
        }
    }
    jobStop(state->job, 0);
    asdMemFree(state);
    g_smokeFadeState = NULL;
}

} /* extern "C" */
