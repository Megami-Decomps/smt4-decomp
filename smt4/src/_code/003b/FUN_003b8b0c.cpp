/* NON_MATCHING: one instruction is scheduled differently: retail sets the NULL register (mov r7, #0) between the two adds that form &work->firstProcess.
 * A copy of the parameter into a local gives IDENTICAL; not kept (a meaningless temporary; the twin takes its work directly). */
#include "camp/CampScriptCleanup.h"
#include "map/mapDepart.h"
#include "camp/Camp.h"
#include "game/GameState.h"
#include "script/scrScriptProcess.h"

extern "C" {
void asdMemFree(void *buffer);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void FUN_002a4bac(u32 list);
void FUN_002636b0(void);

// Release both script resource sets and any list buffers not retained across the camp transition.
void FUN_003b8b0c(CampScriptCleanup *work)
{
    if (work->firstProcess != NULL) {
        scrScriptProcessDestroy(work->firstProcess);
        work->firstProcess = NULL;
    }
    if (work->firstMessages != NULL) {
        asdMemFree(work->firstMessages);
        work->firstMessages = NULL;
    }
    if (work->firstScript != NULL) {
        asdMemFree(work->firstScript);
        work->firstScript = NULL;
    }
    if (work->secondProcess != NULL) {
        scrScriptProcessDestroy(work->secondProcess);
        work->secondProcess = NULL;
    }
    if (work->secondMessages != NULL) {
        asdMemFree(work->secondMessages);
        work->secondMessages = NULL;
    }
    if (work->secondScript != NULL) {
        asdMemFree(work->secondScript);
        work->secondScript = NULL;
    }
    asdTMTexTableReleaseNode(33, work->textureNode);
    campGetState();
    if (work->ownsList != 0 && g_gameState.retainCampResources == 0) {
        work->ownsList = 0;
        FUN_002a4bac(work->list);
        for (s32 index = 0; index < 10; ++index) {
            if (work->buffers[index] != NULL) {
                asdMemFree(work->buffers[index]);
                work->buffers[index] = NULL;
            }
        }
    }
    if (work->keepShared == 0) {
        FUN_002636b0();
    }
}
}
