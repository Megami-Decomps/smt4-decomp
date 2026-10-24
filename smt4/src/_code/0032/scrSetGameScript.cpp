#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;
u32 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
/* Stores the script's named game-state entry. */
s32 scrSetGameScript()
{
    u32 id = scrGetArg(0);
    const char *text = scrGetArgString(1);
    g_gameState.scriptPending = 1;
    g_gameState.scriptId = id;
    libc_strcpy(g_gameState.scriptName, text);
    return 1;
}
}
