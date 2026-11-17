#include "common.h"
#include "map/LmapGlobals.h"

struct TransitionState {
    u8 unk00[0x64];
    u32 phase; // 0x64
};

extern "C" {
extern TransitionState *g_mapTrap;

void linkHolderClearFlag(void *holder);
void mapRequestGameState(void);

void FUN_002756a4(void)
{
    g_mapTrap->phase = 3;
    linkHolderClearFlag(g_lmapScene->playerModel);
    mapRequestGameState();
}
}
