/* NON_MATCHING: retail uses ldr r0, [pc, #20] where the compiled block uses ldr r0, [pc, #16]. */
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

void linkHolderClearFlag(LinkHolder* holder);
void mapRequestGameState(void);

void FUN_002756a8(TransitionState** state)
{
    (*state)->phase = 3;
    linkHolderClearFlag(g_lmapScene->holder);
    mapRequestGameState();
}
}
