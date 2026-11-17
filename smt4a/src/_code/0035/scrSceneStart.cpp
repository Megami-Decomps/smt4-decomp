/* Starts the new scene: records the current scrGetArg value and (re)initializes the transition state with scrGetArgString(1); returns 1. */
#include "common.h"
#include "game/GameStateA.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern u32 scrGetArgString(u32 arg);
extern void libc_strcpy(void *transition, u32 value);

u32 scrSceneStart(void)
{
    u32 value = scrGetArg(0);
    u32 transition = scrGetArgString(1);

    g_gameState.entryValue = value;
    libc_strcpy(g_gameState.entryText, transition);
    return 1;
}

}
