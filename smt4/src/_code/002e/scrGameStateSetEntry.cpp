#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {

/* Global block: a value at 0x54 and a sub-object at 0x5c. */
typedef struct {
    u8 unk00[0x54];
    u32 value;          /* 0x54 */
    u8 unk58[4];
    u8 sub[1];          /* 0x5c */
} GlobalBlock;


u32 scrGetArg(...);
u32 scrGetArgString(u32 index);

/* Stores the current scrGetArg value in the global block and updates its sub-object from entry 1; always reports success. */
u32 scrGameStateSetEntry(void)
{
    u32 value = scrGetArg(0);
    u32 entry = scrGetArgString(1);

    g_gameState.entryValue = value;
    libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.entryText), reinterpret_cast<unsigned int *>(entry));
    return 1;
}

} /* extern "C" */
