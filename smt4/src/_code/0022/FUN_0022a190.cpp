/* NON_MATCHING: event asset loader register scheduling has not matched retail. */
#include "runtime/Stdio.h"
#include "battle/btlEvent.h"
#include "battle/BattleEventAssets.h"
#include "AsdSDK/AsdMemUtil.h"
#include "code/Code0022.h"

extern "C" {
extern void *g_aocSystem;
extern const char DAT_00400950[]; /* battle/event/%s/%s.mbm */
extern const char DAT_00400938[]; /* battle/event/%s/%s.bf */
void aocQueueType20(void *system, u32 archive, void **output, const char *path);
void aocQueueType1f(void *system, u32 archive, void **output, const char *path);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
void FUN_0022a07c(BtlEvent *event, BattleEventAssetSource *source);

/* Load the battle event's message bank and script, using add-on archives when available. */
void FUN_0022a190(BtlEvent *event, BattleEventAssetSource *source)
{
    char messagePath[128];
    char scriptPath[128];
    memClear(messagePath, sizeof(messagePath));
    __2sprintf(messagePath, DAT_00400950, source->name, source->name);
    if (FUN_0022a2c4(reinterpret_cast<u32>(g_aocSystem), source->archiveId) != 0)
        aocQueueType20(g_aocSystem, source->archiveId, &event->dataB, messagePath);
    else
        asdLoadFileAsyncSimple(messagePath, &event->dataB, 0);
    event->state = 4;
    if (event->dataB != NULL) {
        event->state = 5;
        memClear(scriptPath, sizeof(scriptPath));
        __2sprintf(scriptPath, DAT_00400938, source->name, source->name);
        if (FUN_0022a2c4(reinterpret_cast<u32>(g_aocSystem), source->archiveId) != 0)
            aocQueueType1f(g_aocSystem, source->archiveId, &event->dataC, scriptPath);
        else
            asdLoadFileAsyncSimple(scriptPath, &event->dataC, 0);
        event->state = 6;
        if (event->dataC != NULL) {
            event->state = 7;
            FUN_0022a07c(event, source);
        }
    }
}
}
