/* battle/btlEvent.c: the loading states of a battle event (Shin Megami Tensei IV). Every state function ends
 * by calling the next state's, so the compiler inlined them into one another: the copies live here. */
#ifndef BATTLE_BATTLEEVENTSTATES_H
#define BATTLE_BATTLEEVENTSTATES_H

#include "common.h"
#include "runtime/Stdio.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "addon/AocSystem.h"
#include "battle/btlEvent.h"
#include "battle/BattleEventAssets.h"
#include "code/Code0022.h"

extern "C" {

extern const char DAT_00400938[]; /* battle/event/%s/%s.bf */

/* Queue an event file of an add-on archive: the event table, the message bank, the script. */
void aocQueueType1e(AocSystem *system, u32 archive, void **output, const char *path);
void aocQueueType20(AocSystem *system, u32 archive, void **output, const char *path);
void aocQueueType1f(AocSystem *system, u32 archive, void **output, const char *path);

/* BTL_EVENT_LOAD_MESSAGES and BTL_EVENT_CREATE_SCRIPT. */
u32 FUN_0022a190(BtlEvent *event, BattleEventAssetSource *source);
u32 FUN_0022a07c(BtlEvent *event, BattleEventAssetSource *source);

} /* extern "C" */

/* BTL_EVENT_WAIT_SCRIPT: waits for the script file. */
static __inline u32 btlEventWaitScript(BtlEvent *event, BattleEventAssetSource *source)
{
    if (event->dataC == NULL)
        return 0;
    event->state = BTL_EVENT_CREATE_SCRIPT;
    return FUN_0022a07c(event, source);
}

/* BTL_EVENT_LOAD_SCRIPT: requests the event's script file, from an add-on archive when one holds it. */
static __inline u32 btlEventLoadScript(BtlEvent *event, BattleEventAssetSource *source)
{
    char path[128];
    memClear(path, sizeof(path));
    __2sprintf(path, DAT_00400938, source->name, source->name);
    if (FUN_0022a2c4((u32)g_aocSystem, source->archiveId))
        aocQueueType1f(g_aocSystem, source->archiveId, &event->dataC, path);
    else
        asdLoadFileAsyncSimple(path, (u32 *)&event->dataC, 0);
    event->state = BTL_EVENT_WAIT_SCRIPT;
    return btlEventWaitScript(event, source);
}

/* BTL_EVENT_WAIT_MESSAGES: waits for the message bank. */
static __inline u32 btlEventWaitMessages(BtlEvent *event, BattleEventAssetSource *source)
{
    if (event->dataB == NULL)
        return 0;
    event->state = BTL_EVENT_LOAD_SCRIPT;
    return btlEventLoadScript(event, source);
}

#endif
