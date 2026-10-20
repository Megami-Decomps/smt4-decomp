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

int FUN_002bf694(void *dst, u32 arg);
u32 FUN_002592d8(u32 index);
u16 scrGetArg(int index);

/* Script command: activates the global entry with value = script argument 0 and passes argument 1 (via FUN_002592d8) to FUN_002bf694 for its text. */
u32 FUN_0031c234(int firstArg)
{
    u16 value = scrGetArg(firstArg);
    u32 arg = FUN_002592d8(1);

    g_gameState.active = 1;
    g_gameState.value = value;
    FUN_002bf694(g_gameState.text, arg);
    return 1;
}

} /* extern "C" */
