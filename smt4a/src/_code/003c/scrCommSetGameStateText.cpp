#include "common.h"

extern "C" {

struct GameState { u8 unk000[0x17a]; u8 active; u8 unk17b; u32 id; char text[1]; };
extern GameState g_gameState;
s32 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);

s32 scrCommSetGameStateText(u32 index)
{
    u32 id = scrGetArg(index);
    const char *text = scrGetArgString(1);
    g_gameState.active = 1;
    g_gameState.id = id;
    libc_strcpy(g_gameState.text, text);
    return 1;
}

} /* extern "C" */
