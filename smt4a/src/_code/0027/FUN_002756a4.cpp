#include "common.h"

struct TransitionState {
    u8 unk00[0x64];
    u32 phase; // 0x64
};

struct LinkHolder;

struct LocalMapScene {
    u8 unk00[0x1A8];
    LinkHolder* holder; // 0x1A8
};

extern "C" {
extern LocalMapScene* g_lmapScene;
extern TransitionState *g_mapTrap;

void linkHolderClearFlag(LinkHolder* holder);
void mapRequestGameState(void);

void FUN_002756a4(void)
{
    g_mapTrap->phase = 3;
    linkHolderClearFlag(g_lmapScene->holder);
    mapRequestGameState();
}
}
