#include "common.h"

extern "C" {

typedef struct Globals {
    /* 0x000 */ u8 unk000[0xFE];
    /* 0x0FE */ u8 active;
    /* 0x0FF */ u8 unk0FF;
    /* 0x100 */ u16 value;
    /* 0x102 */ u8 unk102[2];
    /* 0x104 */ u8 text[4];
} Globals;

extern Globals g_gameState;

int libc_strcpy(void *dst, u32 arg);
u32 scrGetArgString(u32 index);
u16 scrGetArg(int index);

/* Script command: activates the global entry with value = script argument 0 and passes argument 1 (via scrGetArgString) to libc_strcpy for its text. */
u32 gameStateSetActiveFromScript(int firstArg)
{
    u16 value = scrGetArg(firstArg);
    u32 arg = scrGetArgString(1);

    g_gameState.active = 1;
    g_gameState.value = value;
    libc_strcpy(g_gameState.text, arg);
    return 1;
}

} /* extern "C" */
