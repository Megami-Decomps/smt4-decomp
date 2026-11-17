#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include <string.h>

extern "C" {

s16 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);

// Script command: record the requested cutscene id and name; one specific request also sets a story flag.
u32 FUN_003b6e70(void)
{
    s16 id = scrGetArg(0);
    const char *name = scrGetArgString(1);
    g_gameState.requestPending = 1;
    g_gameState.requestId = id;
    libc_strcpy(g_gameState.requestName, name);
    if (g_gameState.requestId == 0x288 && strcmp(g_gameState.requestName, "e648_07") == 0) {
        gameFlagSetValue(0x593, 1, 1);
    }
    return 1;
}

} /* extern "C" */
