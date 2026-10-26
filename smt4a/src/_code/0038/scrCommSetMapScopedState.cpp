#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void resourceTableReleaseHandles(void);
s8 FUN_002b950c(void);
void FUN_002b9520(void);
void FUN_00249ac4(s32 map, s32 section);
extern s32 g_gameState[2];

// Switch map-scoped state, creating it for the current map when absent.
u32 scrCommSetMapScopedState(void)
{
    if (scrGetArg(0) == 0) {
        if (FUN_002b950c() != 0) {
            FUN_002b9520();
        } else {
            FUN_00249ac4(g_gameState[0], g_gameState[1]);
        }
    } else {
        resourceTableReleaseHandles();
    }
    return 1;
}
}
