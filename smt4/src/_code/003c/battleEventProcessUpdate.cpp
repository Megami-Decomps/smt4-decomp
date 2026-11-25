#include "battle/BattleEventStates.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "script/ScriptEntry.h"

extern "C" {
extern void *g_btlAux;
extern const char DAT_00400968[]; /* battle/event/%s/%s.tbb */
void *dataTableFileGetTable(void *file, u32 index);
s32 FUN_003c7760(BtlEvent *event, BtlMainState *state);
void buttonHelpSetPreset(s32 preset);
void btlEffectLoadTransitionFiles(void *state);
s32 btlEventAreResourcesReady(void *state);
void FUN_003dbe68(void *state);
s32 FUN_003dcc34(void *state);
}

/* BTL_EVENT_WAIT_TABLE: waits for the event table, then reads its records. */
static __inline u32 btlEventWaitTable(BtlEvent *event, BattleEventAssetSource *source)
{
    if (event->dataA == NULL)
        return 0;
    void *table = dataTableFileGetTable(event->dataA, 0);
    event->entries = dataTableGetEntries(table);
    event->entryCount = dataTableGetCount(table);
    event->state = BTL_EVENT_LOAD_MESSAGES;
    return FUN_0022a190(event, source);
}

/* BTL_EVENT_START_SCRIPT: starts the chosen script entry once there is one. */
static __inline u32 btlEventStartScript(BtlEvent *event, BtlMainState *state)
{
    if (event->entry < 0)
        return 0;
    scrScriptProcessStartEntry(event->process, event->entry);
    event->frames = 0;
    event->state = BTL_EVENT_RUN_SCRIPT;
    if (state->battleFlags & 0x100000)
        buttonHelpSetPreset(0xdd);
    return FUN_003c7760(event, state);
}

/* Loads and runs a battle event: one call steps the event through every state whose wait is over. */
extern "C" u32 battleEventProcessUpdate(BtlEvent *event, BtlMainState *state)
{
    /* The state block starts with the event's archive and name. */
    BattleEventAssetSource *source = (BattleEventAssetSource *)state;

    switch (event->state) {
    case BTL_EVENT_LOAD_TABLE: {
        char path[128];
        memClear(path, sizeof(path));
        __2sprintf(path, DAT_00400968, source->name, source->name);
        if (FUN_0022a2c4((u32)g_aocSystem, source->archiveId))
            aocQueueType1e(g_aocSystem, source->archiveId, &event->dataA, path);
        else
            asdLoadFileAsyncSimple(path, (u32 *)&event->dataA, 0);
        event->state = BTL_EVENT_WAIT_TABLE;
        return btlEventWaitTable(event, source);
    }
    case BTL_EVENT_WAIT_TABLE:
        return btlEventWaitTable(event, source);
    case BTL_EVENT_LOAD_MESSAGES:
        return FUN_0022a190(event, source);
    case BTL_EVENT_WAIT_MESSAGES:
        return btlEventWaitMessages(event, source);
    case BTL_EVENT_LOAD_SCRIPT:
        return btlEventLoadScript(event, source);
    case BTL_EVENT_WAIT_SCRIPT:
        return btlEventWaitScript(event, source);
    case BTL_EVENT_CREATE_SCRIPT:
        return FUN_0022a07c(event, source);
    case BTL_EVENT_START_SCRIPT:
        return btlEventStartScript(event, state);
    case BTL_EVENT_RUN_SCRIPT:
        return FUN_003c7760(event, state);
    case BTL_EVENT_PREPARE:
        /* Bring the battle's auxiliary resources up in three stages. */
        switch (event->stage) {
        case 0:
            btlEffectLoadTransitionFiles(g_btlAux);
            event->stage = 1;
            /* fall through */
        case 1:
            if (!btlEventAreResourcesReady(g_btlAux))
                return 0;
            FUN_003dbe68(g_btlAux);
            event->stage = 2;
            /* fall through */
        case 2:
            if (!FUN_003dcc34(g_btlAux))
                return 0;
            event->stage = 3;
        }
        event->state = BTL_EVENT_START_SCRIPT;
        return btlEventStartScript(event, state);
    default:
        return 0;
    }
}
