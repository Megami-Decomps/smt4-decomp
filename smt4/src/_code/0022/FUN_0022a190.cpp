#include "battle/BattleEventStates.h"

extern "C" {
extern const char DAT_00400950[]; /* battle/event/%s/%s.mbm */

/* BTL_EVENT_LOAD_MESSAGES: requests the battle event's message bank, from an add-on archive when one holds it. */
u32 FUN_0022a190(BtlEvent *event, BattleEventAssetSource *source)
{
    char path[128];
    memClear(path, sizeof(path));
    __2sprintf(path, DAT_00400950, source->name, source->name);
    if (FUN_0022a2c4((u32)g_aocSystem, source->archiveId))
        aocQueueType20(g_aocSystem, source->archiveId, &event->dataB, path);
    else
        asdLoadFileAsyncSimple(path, (u32 *)&event->dataB, 0);
    event->state = BTL_EVENT_WAIT_MESSAGES;
    return btlEventWaitMessages(event, source);
}

} /* extern "C" */
