/* NON_MATCHING: retail addresses the images from the state's pool word (DAT_0043df28 + 0x18: SmokeFade.cpp defines
 * both, with 0x14 unknown bytes between them); declared extern here, they take a second pool word. */
#include "event/2dEvent/SmokeFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern SmokeFadeState *DAT_0043df28;
extern SmokeFadeImage DAT_0043df40[2];

void asdMemFree(void *memory);
void asdTMTexTableReleaseNode(u32 table, u32 node);
s32 textureGetIndexedResource(u32 table);
void jobStop(u32 job, s32 arg);

/* Frees the smoke fade's table file, releases its texture nodes and entries, stops its job and frees the state. */
void smokeFadeDestroy(void)
{
    SmokeFadeState *state = DAT_0043df28;
    s32 i;

    asdMemFree(state->file);
    for (i = 0; i < 2; i++) {
        if (DAT_0043df40[i].loadedNode) {
            if (asdTMTexTableNodeIsLoaded(DAT_0043df40[i].table, DAT_0043df40[i].node)) {
                asdTMTexTableReleaseNode(DAT_0043df40[i].table, DAT_0043df40[i].node);
            }
            DAT_0043df40[i].loadedNode = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (DAT_0043df40[i].loadedTable) {
            if (textureGetIndexedResource(DAT_0043df40[i].table)) {
                asdTMTexTableFreeEntry(DAT_0043df40[i].table);
            }
            DAT_0043df40[i].loadedTable = 0;
        }
    }
    jobStop(state->job, 0);
    asdMemFree(state);
    DAT_0043df28 = NULL;
}

} /* extern "C" */
