/* NON_MATCHING: retail calls the callee with `bl` inside a push {r4, lr} frame where armcc emits a tail `b`; the callee takes no argument. */
#include "common.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

// The fields of g_gameState this refresh touches.
struct GameStateSelectionView {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ s16 selection;
    /* 0x25a */ s16 previous;
};
extern GameStateSelectionView g_gameState;

void uiSelectionRefresh(void)
{
    if (g_gameState.selection != g_gameState.previous) {
        g_gameState.previous = g_gameState.selection;
    }
    mapEnvironmentApplySelectedEntry();
}

} /* extern "C" */
