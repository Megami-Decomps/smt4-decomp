#include "common.h"

struct GameStringState {
    /* 0x0000 */ u8 unk00[0x145];
    /* 0x0145 */ u8 active;
    /* 0x0146 */ u8 unk146[2];
    /* 0x0148 */ u32 id;
    /* 0x014c */ char text[1];
};
extern "C" {
extern GameStringState g_gameState;
u32 scrGetArg();
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
/* Stores the script's named game-state entry. */
s32 FUN_00323ec0()
{
    u32 id = scrGetArg();
    const char *text = scrGetArgString(1);
    g_gameState.active = 1;
    g_gameState.id = id;
    libc_strcpy(g_gameState.text, text);
    return 1;
}
}
