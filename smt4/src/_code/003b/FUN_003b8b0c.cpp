/* NON_MATCHING: compiler folds each released member's address into owner-relative stores; retail preserves a separate member pointer across release calls. */
#include "camp/CampScriptCleanup.h"
#include "map/mapDepart.h"
#include "camp/Camp.h"

extern "C" {
extern GameState g_gameState;
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *buffer);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void FUN_002a4bac(u32 list);
void FUN_002636b0(void);
}

static inline void releaseScriptProcess(void **process)
{
    if (*process != NULL) {
        scrScriptProcessDestroy(*process);
        *process = NULL;
    }
}
static inline void releaseScriptBuffer(void **buffer)
{
    if (*buffer != NULL) {
        asdMemFree(*buffer);
        *buffer = NULL;
    }
}

// Release both script resource sets and any list buffers not retained across the camp transition.
extern "C" void FUN_003b8b0c(CampScriptCleanup *work)
{
    releaseScriptProcess(&work->firstProcess);
    releaseScriptBuffer(&work->firstMessages);
    releaseScriptBuffer(&work->firstScript);
    releaseScriptProcess(&work->secondProcess);
    releaseScriptBuffer(&work->secondMessages);
    releaseScriptBuffer(&work->secondScript);
    asdTMTexTableReleaseNode(33, work->textureNode);
    campGetState();
    if (work->ownsList != 0 && g_gameState.campCleanup.retainCampResources == 0) {
        work->ownsList = 0;
        FUN_002a4bac(work->list);
        for (s32 index = 0; index < 10; ++index) {
            releaseScriptBuffer(&work->buffers[index]);
        }
    }
    if (work->keepShared == 0) {
        FUN_002636b0();
    }
}
