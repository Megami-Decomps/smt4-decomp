#include "common.h"

extern "C" {

typedef struct Globals {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 value;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u8 text[4];
} Globals;

extern Globals g_gameState;

int FUN_002bf694(void *dst, u32 arg);
u32 FUN_002592d8(u32 index);
u32 scrGetArg(int index);

/* Script command: stores script argument 0 in the global value and passes argument 1 (via FUN_002592d8) to FUN_002bf694 for the global text. */
u32 FUN_002eef0c(int firstArg)
{
    u32 value = scrGetArg(firstArg);
    u32 arg = FUN_002592d8(1);

    g_gameState.value = value;
    FUN_002bf694(g_gameState.text, arg);
    return 1;
}

} /* extern "C" */
