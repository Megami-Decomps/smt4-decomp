#include "common.h"
#include "game/GameStateA.h"

extern "C" {

s32 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);

s32 scrCommSetGameStateText(void)
{
    u32 id = scrGetArg(0);
    const char *text = scrGetArgString(1);
    g_gameState.textActive = 1;
    g_gameState.textId = id;
    libc_strcpy(g_gameState.text, text);
    return 1;
}

} /* extern "C" */
