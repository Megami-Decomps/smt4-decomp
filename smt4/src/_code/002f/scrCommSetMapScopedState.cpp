/* NON_MATCHING: resume/create paths join a bottom return instead of branching to retail's earlier return, changing tail alignment NOPs. */
#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void FUN_0027581c(void);
s8 FUN_001fb4d8(void);
void FUN_00275714(void);
void FUN_001b49c0(s32 map, s32 section);
extern s32 g_gameState[2];

// Switch map-scoped state, creating it for the current map when absent.
u32 scrCommSetMapScopedState(s32 argument)
{
    if (scrGetArg(argument) != 0) {
        FUN_0027581c();
        return 1;
    }
    if (FUN_001fb4d8() != 0) {
        FUN_00275714();
        return 1;
    }
    FUN_001b49c0(g_gameState[0], g_gameState[1]);
    return 1;
}
}
