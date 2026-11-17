/* NON_MATCHING: retail calls the callee with `bl` inside a push {r4, lr} frame where armcc emits a tail `b`; the callee takes no argument. */
#include "common.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

void uiSelectionRefresh(void)
{
    if (g_gameState.selection != g_gameState.previousSelection) {
        g_gameState.previousSelection = g_gameState.selection;
    }
    mapEnvironmentApplySelectedEntry();
}

} /* extern "C" */
