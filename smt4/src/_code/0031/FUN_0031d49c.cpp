/* NON_MATCHING: the limits now come from g_gameState (literal g_gameState+0x200 matches); retail keeps the global loads in program order, the build hoists the deferred-model pointer and the minimum limit. */
/* Recomputes the map's remaining entry budget: the limit minus the entries in use (a third of the active, slot and map
 * object counts plus the deferred models), never below the minimum. */
#include "common.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
struct CountedBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};

struct DeferredModels {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 count;
};

/* The game state fields the budget uses. */
struct BudgetState {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ s32 entryBudget;
    /* 0x1C8 */ u8 unk1C8[0xB2];
    /* 0x27A */ s16 limit;
    /* 0x27C */ s16 minimum;
};

extern CountedBlock *g_mapStateSlots;
extern CountedBlock *g_mapObj;
extern DeferredModels *g_deferredMapModels;
extern BudgetState g_gameState;

void FUN_0031d49c(void)
{
    s32 limit = g_gameState.limit;
    s32 used = (mapCountActiveEntries() + (g_mapStateSlots->count + g_mapObj->count)) / 3;
    s32 budget = limit - (used + g_deferredMapModels->count);

    if (budget < g_gameState.minimum) {
        budget = g_gameState.minimum;
    }
    g_gameState.entryBudget = budget;
}
}
