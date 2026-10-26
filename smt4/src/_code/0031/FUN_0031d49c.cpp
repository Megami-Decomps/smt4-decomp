/* NON_MATCHING: register numbering and constant-pool order only */
/* Recomputes the map's remaining entry budget: the limit minus the entries in use (a third of the active, slot and map
 * object counts plus the deferred models), never below the minimum. */
#include "common.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
/* The map's budget limits. */
struct MapBudget {
    /* 0x00 */ u8 unk00[0x7A];
    /* 0x7A */ s16 limit;
    /* 0x7C */ s16 minimum;
};

struct CountedBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};

struct DeferredModels {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 count;
};

/* The game state field that receives the budget. */
struct BudgetState {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ s32 entryBudget;
};

extern MapBudget DAT_0049fb1c;
extern CountedBlock *g_mapStateSlots;
extern CountedBlock *g_mapObj;
extern DeferredModels *g_deferredMapModels;
extern BudgetState g_gameState;

void FUN_0031d49c(void)
{
    MapBudget *limits = &DAT_0049fb1c;
    s32 limit = limits->limit;
    s32 used = (mapCountActiveEntries() + (g_mapStateSlots->count + g_mapObj->count)) / 3;
    s32 budget = limit - (used + g_deferredMapModels->count);

    if (budget < limits->minimum) {
        budget = limits->minimum;
    }
    g_gameState.entryBudget = budget;
}
}
