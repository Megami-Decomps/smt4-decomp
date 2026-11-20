/* The loading states of a battle event (Apocalypse; battle/BattleEventStates.h is Shin Megami Tensei IV's).
 * Every state function ends by calling the next state's, so the compiler inlined them into one another:
 * the copies live here. */
#ifndef BATTLE_BATTLEEVENTSTATESA_H
#define BATTLE_BATTLEEVENTSTATESA_H

#include "common.h"
#include "runtime/Stdio.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "addon/AocSystemA.h"
#include "battle/BattleEventAssets.h"
#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern const char DAT_00528588[];

/* Queue an event file of an add-on archive. */
void aocQueueType1e(AocSystemA *system, u32 archive, void **output, const char *path);
void aocQueueType20(AocSystemA *system, u32 archive, void **output, const char *path);
void aocQueueType1f(AocSystemA *system, u32 archive, void **output, const char *path);

/* BTL_EVENT_A_LOAD_MESSAGES and BTL_EVENT_A_CREATE_SCRIPT. */
u32 FUN_004d83b4(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source);
u32 FUN_004d7e20(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source);

} /* extern "C" */

/* BTL_EVENT_A_WAIT_SCRIPT: waits for the script file. */
static __inline u32 btlEventWaitScriptA(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    if (event->script == NULL)
        return 0;
    event->state = BTL_EVENT_A_CREATE_SCRIPT;
    return FUN_004d7e20(event, source);
}

/* BTL_EVENT_A_LOAD_SCRIPT: requests the script file (battle/event/%s/%s.bf), from an add-on archive when one holds it. */
static __inline u32 btlEventLoadScriptA(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    __2sprintf(path, DAT_00528588, source->name, source->name);
    if (FUN_0046c4b4((u32)g_aocSystem, source->archiveId))
        aocQueueType1f(g_aocSystem, source->archiveId, &event->script, path);
    else
        asdLoadFileAsyncSimple(path, (u32 *)&event->script, 0);
    event->state = BTL_EVENT_A_WAIT_SCRIPT;
    return btlEventWaitScriptA(event, source);
}

/* BTL_EVENT_A_WAIT_MESSAGES: waits for the message bank. */
static __inline u32 btlEventWaitMessagesA(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    if (event->messages == NULL)
        return 0;
    event->state = BTL_EVENT_A_LOAD_SCRIPT;
    return btlEventLoadScriptA(event, source);
}

#endif
