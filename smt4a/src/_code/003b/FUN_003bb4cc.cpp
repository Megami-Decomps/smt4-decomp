#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void gameOptionsRememberUniqueId(s32 kind);

/* Script command: remembers the unique id named by its first argument (the second is read and ignored). */
s32 FUN_003bb4cc(void)
{
    s32 kind = scrGetArg(0);
    scrGetArg(1);
    gameOptionsRememberUniqueId((s16)kind);
    return 1;
}
}
