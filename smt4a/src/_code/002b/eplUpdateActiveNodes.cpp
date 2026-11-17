#include "common.h"
#include "game/GameStateA.h"

extern "C" {
struct EffectNode;

typedef struct EplWork {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ EffectNode *target;
    /* 0x60 */ u8 active;
    /* 0x61 */ u8 unk61[3];
} EplWork; /* 0x64 */

typedef struct EplSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EplWork work[16];
} EplSlots;

void effectNodeUpdatePlacedChildren(EffectNode *node);

extern EplSlots *g_eplSlots;

static inline bool eplWorkIsActive(EplWork *work)
{
    return work->target != NULL && work->active != 0;
}

/* Runs effectNodeUpdatePlacedChildren for each of the 16 effect works that has a target and is active, unless the game state is paused. */
void eplUpdateActiveNodes(void)
{
    s32 i;

    if (g_eplSlots != NULL && g_gameState.departLoading == 0) {
        for (i = 0; i < 16; i++) {
            EplWork *work = &g_eplSlots->work[i];
            if (eplWorkIsActive(work)) {
                effectNodeUpdatePlacedChildren(work->target);
            }
        }
    }
}

} /* extern "C" */
