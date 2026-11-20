#include "battle/BattleEventStatesA.h"

extern "C" {
extern const char DAT_005285a0[];

/* BTL_EVENT_A_LOAD_MESSAGES: requests the battle event's message bank (battle/event/%s/%s.mbm), from an add-on archive when one holds it. */
u32 FUN_004d83b4(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    __2sprintf(path, DAT_005285a0, source->name, source->name);
    if (FUN_0046c4b4((u32)g_aocSystem, source->archiveId))
        aocQueueType20(g_aocSystem, source->archiveId, &event->messages, path);
    else
        asdLoadFileAsyncSimple(path, (u32 *)&event->messages, 0);
    event->state = BTL_EVENT_A_WAIT_MESSAGES;
    return btlEventWaitMessagesA(event, source);
}

} /* extern "C" */
