/* Starts the new scene: records the current scrGetArg value and (re)initializes the transition state with scrGetArgString(1); returns 1. */
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
extern u32 scrGetArgString(u32 arg);
extern void libc_strcpy(void *transition, u32 value);

u32 scrSceneStart(void)
{
    u32 value = scrGetArg();
    u32 transition = scrGetArgString(1);

    g_gameState.value = value;
    libc_strcpy(g_gameState.transition, transition);
    return 1;
}

}
