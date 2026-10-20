/* Starts the new scene: records the current scrGetArg value and (re)initializes the transition state with FUN_002360dc(1); returns 1. */
#include "common.h"

extern "C" {

typedef struct SceneState {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 value;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u8 transition[1];
} SceneState;

extern SceneState g_gameState;

extern u32 scrGetArg(void);
extern u32 FUN_002360dc(u32 arg);
extern void FUN_002e342c(void *transition, u32 value);

u32 FUN_0035cfa0(void)
{
    u32 value = scrGetArg();
    u32 transition = FUN_002360dc(1);

    g_gameState.value = value;
    FUN_002e342c(g_gameState.transition, transition);
    return 1;
}

}
