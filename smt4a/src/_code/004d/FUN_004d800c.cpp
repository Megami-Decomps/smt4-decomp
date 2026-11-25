/* NON_MATCHING: 10 lines. In BTL_EVENT_A_START_SCRIPT (btlEventStartScriptA) retail loads the battle flags with
   ldm before the pending mask's words when it ORs them; this build loads the mask's low word first. */
#include <stdio.h>
#include "battle/BattleEventStatesA.h"
#include "gamedata/DataTable.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleEventAction.h"
#include "battle/btlMain.h"

extern "C" {
static const char s_proTablePathFormat[] = "battle/event/%s/ProTable_%s.tbb";
void *dataTableFileGetTable(void *file, s32 index);
void sysPlaySe(u32 sound);
}

enum {
    BTL_EVENT_A_PENDING_CHANGE_TYPE = 5,
    BTL_EVENT_A_PENDING_CHANGE_SOUND = 223
};

/* Starts the chosen script entry and applies its pending battle state: the START_SCRIPT step, also defined in
 * battleEventPrepareAuxAndStartScript's unit, which runs it once the auxiliary resources are ready. */
static __inline u32 btlEventStartScriptA(BattleEventAssetLoadState *event, BtlMainStateA *battle)
{
    if (event->entry < 0) {
        return 0;
    }
    scrScriptProcessStartEntry(event->scriptProcess, event->entry);
    event->frames = 0;
    event->state = BTL_EVENT_A_RUN_SCRIPT;
    if (battle->stateFlags64.bits & g_btlEvent.pendingMask) {
        sysPlaySe(BTL_EVENT_A_PENDING_CHANGE_SOUND);
    }
    if (event->type == BTL_EVENT_A_PENDING_CHANGE_TYPE) {
        battle->stateFlags64.bits |= g_btlEvent.pendingMask;
        sysPlaySe(BTL_EVENT_A_PENDING_CHANGE_SOUND);
    }
    return btlActionStepFinishPendingChanges(event, battle);
}

/* BTL_EVENT_A_WAIT_TABLE: waits for the event table, then reads its records. */
static __inline u32 btlEventWaitTableA(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    if (event->table == NULL)
        return 0;
    void *table = dataTableFileGetTable(event->table, 0);
    event->entries = dataTableGetEntries(table);
    event->entryCount = dataTableGetCount(table);
    event->state = BTL_EVENT_A_LOAD_MESSAGES;
    return FUN_004d83b4(event, source);
}

/* Loads and runs a battle event: one call steps the event through every state whose wait is over. */
extern "C" u32 FUN_004d800c(BattleEventAssetLoadState *event, const BattleEventAssetSourceA *source)
{
    switch (event->state) {
    case BTL_EVENT_A_LOAD_TABLE: {
        char path[128];
        sysMemClear(path, sizeof(path));
        sprintf(path, s_proTablePathFormat, source->name, source->name);
        if (FUN_0046c4b4((u32)g_aocSystem, source->archiveId))
            aocQueueType1e(g_aocSystem, source->archiveId, &event->table, path);
        else
            asdLoadFileAsyncSimple(path, (u32 *)&event->table, 0);
        event->state = BTL_EVENT_A_WAIT_TABLE;
        return btlEventWaitTableA(event, source);
    }
    case BTL_EVENT_A_WAIT_TABLE:
        return btlEventWaitTableA(event, source);
    case BTL_EVENT_A_LOAD_MESSAGES:
        return FUN_004d83b4(event, source);
    case BTL_EVENT_A_WAIT_MESSAGES:
        return btlEventWaitMessagesA(event, source);
    case BTL_EVENT_A_LOAD_SCRIPT:
        return btlEventLoadScriptA(event, source);
    case BTL_EVENT_A_WAIT_SCRIPT:
        return btlEventWaitScriptA(event, source);
    case BTL_EVENT_A_CREATE_SCRIPT:
        return FUN_004d7e20(event, source);
    case BTL_EVENT_A_START_SCRIPT:
        return btlEventStartScriptA(event, (BtlMainStateA *)source);
    case BTL_EVENT_A_RUN_SCRIPT:
        return btlActionStepFinishPendingChanges(event, (BtlMainStateA *)source);
    case BTL_EVENT_A_PREPARE:
        return battleEventPrepareAuxAndStartScript(event, (BtlMainStateA *)source);
    default:
        return 0;
    }
}
