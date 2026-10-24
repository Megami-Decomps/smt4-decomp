#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 scriptValue;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ char scriptText[1];
} GameState;

extern GameState g_gameState; /* 0x5f15fc */

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
