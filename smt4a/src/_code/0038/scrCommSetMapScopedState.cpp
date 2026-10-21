/* NON_MATCHING: resume/create paths join a bottom return instead of branching to retail's earlier return, changing tail alignment NOPs. */
#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void FUN_00249a08(void);
s8 FUN_002b950c(void);
void FUN_002b9520(void);
void FUN_00249ac4(s32 map, s32 section);
extern s32 g_gameState[2];

// Switch map-scoped state, creating it for the current map when absent.
u32 scrCommSetMapScopedState(s32 argument)
{
    if (scrGetArg(argument) != 0) {
        FUN_00249a08();
        return 1;
    }
    if (FUN_002b950c() != 0) {
        FUN_002b9520();
        return 1;
    }
    FUN_00249ac4(g_gameState[0], g_gameState[1]);
    return 1;
}
}
