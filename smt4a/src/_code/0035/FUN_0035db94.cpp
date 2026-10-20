#include "common.h"

extern "C" {

typedef struct StateBlock {
    /* 0x0000 */ u8 unk0000[0x1378];
    /* 0x1378 */ u32 value;
} StateBlock;

typedef struct StateHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ StateBlock *block;
} StateHolder;

extern StateHolder g_gameGlobals;

/* Returns the low byte, sign-extended, of the word at offset 0x1378 of the global state block. */
int FUN_0035db94(void)
{
    return (s8)g_gameGlobals.block->value;
}

} /* extern "C" */
