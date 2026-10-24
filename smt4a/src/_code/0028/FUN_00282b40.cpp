#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void gameDataCounterSpend(u32 amount);

/* Script command: spends its first argument from the game data counter when it is positive. */
s32 FUN_00282b40(void)
{
    s32 amount = scrGetArg(0);
    if (amount > 0) {
        gameDataCounterSpend((u16)amount);
    }
    return 1;
}
}
