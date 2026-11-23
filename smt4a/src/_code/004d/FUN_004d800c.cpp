/* NON_MATCHING: 16 lines. In BTL_EVENT_A_START_SCRIPT's two 64-bit mask operations retail holds the mask's low word
   in r2 and r3 where this build uses r3 and r2. */
#include <stdio.h>
#include "battle/BattleEventStatesA.h"
#include "gamedata/DataTable.h"
#include "battle/BtlMainAccess.h"

/* unit-local: the event module's global, of which this function reads only the pending mask */
struct BattleEventPendingMask {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 mask;
};

extern "C" {
extern BattleEventPendingMask g_btlEvent;
static const char s_proTablePathFormat[] = "battle/event/%s/ProTable_%s.tbb";
void *dataTableFileGetTable(void *file, s32 index);
u32 FUN_004d7ec0(BattleEventAssetLoadState *event, BtlMainStateA *battle);
u32 btlActionStepFinishPendingChanges(BattleEventAssetLoadState *event, BtlMainStateA *battle);
void scrScriptProcessStartEntry(void *process, s32 entry);
void sysPlaySe(u32 sound);
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
    case BTL_EVENT_A_START_SCRIPT: {
        BtlMainStateA *battle = (BtlMainStateA *)source;
        if (event->entry < 0)
            return 0;
        scrScriptProcessStartEntry(event->scriptProcess, event->entry);
        event->frames = 0;
        event->state = BTL_EVENT_A_RUN_SCRIPT;
        if (battle->stateFlags64.bits & g_btlEvent.mask)
            sysPlaySe(223);
        if (event->type == 5) {
            battle->stateFlags64.bits = g_btlEvent.mask | battle->stateFlags64.bits;
            sysPlaySe(223);
        }
        return btlActionStepFinishPendingChanges(event, battle);
    }
    case BTL_EVENT_A_RUN_SCRIPT:
        return btlActionStepFinishPendingChanges(event, (BtlMainStateA *)source);
    case BTL_EVENT_A_PREPARE:
        return FUN_004d7ec0(event, (BtlMainStateA *)source);
    default:
        return 0;
    }
}
