#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {



u32 scrGetArgString(u32 index);
u16 scrGetArg(int index);

/* Script command: activates the global entry with value = script argument 0 and passes argument 1 (via scrGetArgString) to libc_strcpy for its text. */
u32 gameStateSetActiveFromScript(void)
{
    u16 value = scrGetArg(0);
    u32 arg = scrGetArgString(1);

    g_gameState.activeEntrySet = 1;
    g_gameState.event.activeEntryValue = value;
    libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.event.activeEntryText), reinterpret_cast<unsigned int *>(arg));
    return 1;
}

} /* extern "C" */
