#include "common.h"

extern "C" {

/* Global block: a value at 0x54 and a sub-object at 0x5c. */
typedef struct {
    u8 unk00[0x54];
    u32 value;          /* 0x54 */
    u8 unk58[4];
    u8 sub[1];          /* 0x5c */
} GlobalBlock;

extern GlobalBlock g_gameState;

u32 scrGetArg(...);
u32 FUN_002592d8(u32 index);
int FUN_002bf694(u8 *sub, u32 value);

/* Stores the current scrGetArg value in the global block and updates its sub-object from entry 1; always reports success. */
u32 FUN_002e2914(void)
{
    u32 value = scrGetArg();
    u32 entry = FUN_002592d8(1);

    g_gameState.value = value;
    FUN_002bf694(g_gameState.sub, entry);
    return 1;
}

} /* extern "C" */
