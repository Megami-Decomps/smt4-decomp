/* Closes the CEC ranking screen: releases its text objects, heap blocks and resource, kills its
 * task and frees the work area. */
#include "common.h"
#include "camp/CampCec/CampCecRanking.h"

extern "C" {

int jobStop(u32 task, int flags);     /* kill a task */
int asdMemFree(void *ptr);               /* heap free */
int FUN_0019a7f4(int type, int index);
int scrScriptProcessDestroy(u32 handle);
int FUN_00237210(u32 text);

extern CampCecRanking *g_campCecRanking;

void campCecRankingDestroy(void)
{
    CampCecRanking *ranking = g_campCecRanking;
    int i;

    FUN_0019a7f4(0x2e, 1);
    for (i = 0; i < RANK_PLAYERS; i++) {
        FUN_00237210(ranking->playerText[i]);
    }
    for (i = 0; i < RANK_CATEGORIES; i++) {
        FUN_00237210(ranking->categoryText[i]);
    }
    if (ranking->heapA != NULL) {
        asdMemFree(ranking->heapA);
    }
    if (ranking->heapB != NULL) {
        asdMemFree(ranking->heapB);
    }
    if (ranking->handle != 0) {
        scrScriptProcessDestroy(ranking->handle);
    }
    jobStop(ranking->task, 0);
    asdMemFree(ranking);
    g_campCecRanking = NULL;
}

} /* extern "C" */
