#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

typedef struct Globals {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 value;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u8 text[4];
} Globals;

extern Globals g_gameState;

u32 scrGetArgString(u32 index);
u32 scrGetArg(int index);

/* Script command: stores script argument 0 in the global value and passes argument 1 (via scrGetArgString) to libc_strcpy for the global text. */
u32 gameStateSetFromScript(void)
{
    u32 value = scrGetArg(0);
    u32 arg = scrGetArgString(1);

    g_gameState.value = value;
    libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.text), reinterpret_cast<unsigned int *>(arg));
    return 1;
}

} /* extern "C" */
