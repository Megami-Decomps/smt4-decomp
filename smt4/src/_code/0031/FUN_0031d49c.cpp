/* NON_MATCHING: the limits now come from g_gameState (literal g_gameState+0x200 matches); retail keeps the global loads in program order, the build hoists the deferred-model pointer and the minimum limit. */
/* Recomputes the map's remaining entry budget: the limit minus the entries in use (a third of the active, slot and map
 * object counts plus the deferred models), never below the minimum. */
#include "common.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"
#include "game/GameState.h"

extern "C" {
struct CountedBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};

struct DeferredModels {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 count;
};


extern CountedBlock *g_mapStateSlots;
extern CountedBlock *g_mapObj;
extern DeferredModels *g_deferredMapModels;

void FUN_0031d49c(void)
{
    s32 limit = g_gameState.map.entryLimit;
    s32 used = (mapCountActiveEntries() + (g_mapStateSlots->count + g_mapObj->count)) / 3;
    s32 budget = limit - (used + g_deferredMapModels->count);

    if (budget < g_gameState.map.entryMinimum) {
        budget = g_gameState.map.entryMinimum;
    }
    g_gameState.event.entryBudget = budget;
}
}
