#include "common.h"
#include "game/GameStateA.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern const char *scrGetArgString(u32 index);
extern char *libc_strcpy(char *dst, const char *src);

/* Script command: stores argument 0 and copies string argument 1 into the game state. */
u32 scrComm_SetGameStateText(void)
{
    u32 value = scrGetArg(0);
    const char *text = scrGetArgString(1);

    g_gameState.scriptValue = value;
    libc_strcpy(g_gameState.scriptText, text);
    return 1;
}

} /* extern "C" */
