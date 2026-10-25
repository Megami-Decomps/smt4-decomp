#include "camp/ScriptPanelResources.h"
#include "map/mapDepart.h"
#include "camp/Camp.h"
extern "C" {
extern GameStateA g_gameState;
void asdMemFree(void *memory);
void scrScriptProcessDestroy(ScriptProcess *process);
void asdTMTexTableReleaseNode(s32 table, u32 node);
void FUN_0019f548(u32 handle);
void FUN_00214da4(void);

/* Release both script panels and, unless retained globally, their cached data. */
void FUN_004b7a54(CampScriptPanelResources *work)
{
    if (work->scriptA != NULL) {
        scrScriptProcessDestroy(work->scriptA);
        work->scriptA = NULL;
    }
    if (work->scriptFileA != NULL) {
        asdMemFree(work->scriptFileA);
        work->scriptFileA = NULL;
    }
    if (work->messageFileA != NULL) {
        asdMemFree(work->messageFileA);
        work->messageFileA = NULL;
    }
    if (work->scriptB != NULL) {
        scrScriptProcessDestroy(work->scriptB);
        work->scriptB = NULL;
    }
    if (work->scriptFileB != NULL) {
        asdMemFree(work->scriptFileB);
        work->scriptFileB = NULL;
    }
    if (work->messageFileB != NULL) {
        asdMemFree(work->messageFileB);
        work->messageFileB = NULL;
    }
    asdTMTexTableReleaseNode(24, work->textureNode);
    campGetState();
    struct CacheRetentionView {
        u8 prefix[0x38];
        u8 retain;
    };
    if (work->cacheLoaded && !reinterpret_cast<const CacheRetentionView *>(&g_gameState)->retain) {
        work->cacheLoaded = 0;
        FUN_0019f548(work->cacheHandle);
        for (s32 index = 0; index < 10; ++index) {
            if (work->cachedFiles[index] != NULL) {
                asdMemFree(work->cachedFiles[index]);
                work->cachedFiles[index] = NULL;
            }
        }
    }
    if (!work->keepUi)
        FUN_00214da4();
}
}
