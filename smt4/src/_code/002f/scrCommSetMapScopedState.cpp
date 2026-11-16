#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void resourceTableReleaseHandles(void);
s8 FUN_001fb4d8(void);
void soundActorQueueStartPending(void);
void FUN_001b49c0(s32 map, s32 section);
extern s32 g_gameState[2];

// Switch map-scoped state, creating it for the current map when absent.
u32 scrCommSetMapScopedState(void)
{
    if (scrGetArg(0) == 0) {
        if (FUN_001fb4d8() != 0) {
            soundActorQueueStartPending();
        } else {
            FUN_001b49c0(g_gameState[0], g_gameState[1]);
        }
    } else {
        resourceTableReleaseHandles();
    }
    return 1;
}
}
