#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {



u32 scrGetArgString(u32 index);
u32 scrGetArg(int index);

/* Script command: stores script argument 0 in the global value and passes argument 1 (via scrGetArgString) to libc_strcpy for the global text. */
u32 gameStateSetFromScript(void)
{
    u32 value = scrGetArg(0);
    u32 arg = scrGetArgString(1);

    g_gameState.entryValue = value;
    libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.entryText), reinterpret_cast<unsigned int *>(arg));
    return 1;
}

} /* extern "C" */
