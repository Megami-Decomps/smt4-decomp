#include "battle/BattleEventAction.h"
#include "battle/btlMain.h"

extern "C" {
extern BtlAuxA *g_btlAux;
void FUN_004f741c(BtlAuxA *aux);
u32 btlAuxAreResourcesReady(BtlAuxA *aux);
void FUN_004f89e8(BtlAuxA *aux);
s32 FUN_004f9c2c(BtlAuxA *aux);
void sysPlaySe(u32 sound);
} /* extern "C" */

enum {
    BTL_EVENT_A_PREPARE_AUX = 0,
    BTL_EVENT_A_WAIT_AUX = 1,
    BTL_EVENT_A_WAIT_AUX_OPERATION = 2,
    BTL_EVENT_A_AUX_READY = 3,
    BTL_EVENT_A_PENDING_CHANGE_TYPE = 5,
    BTL_EVENT_A_PENDING_CHANGE_SOUND = 223
};

/* Starts the chosen script entry and applies its pending battle state: the START_SCRIPT step, also defined in
 * FUN_004d800c's unit for its START_SCRIPT arm. */
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

/* Prepares the auxiliary battle resources and starts the event's script when they are ready. */
extern "C" u32 battleEventPrepareAuxAndStartScript(BattleEventAssetLoadState *event, BtlMainStateA *battle)
{
    switch (event->stage) {
    case BTL_EVENT_A_PREPARE_AUX:
        FUN_004f741c(g_btlAux);
        event->stage = BTL_EVENT_A_WAIT_AUX;
        /* fall through */
    case BTL_EVENT_A_WAIT_AUX:
        if (!btlAuxAreResourcesReady(g_btlAux)) {
            return 0;
        }
        FUN_004f89e8(g_btlAux);
        event->stage = BTL_EVENT_A_WAIT_AUX_OPERATION;
        /* fall through */
    case BTL_EVENT_A_WAIT_AUX_OPERATION:
        if (!FUN_004f9c2c(g_btlAux)) {
            return 0;
        }
        event->stage = BTL_EVENT_A_AUX_READY;
        break;
    }
    event->state = BTL_EVENT_A_START_SCRIPT;
    return btlEventStartScriptA(event, battle);
}
