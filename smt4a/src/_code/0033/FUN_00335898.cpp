#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 gameDataFlagTestBit(s32 bit);
/* Script command: tests a game data flag bit and sets the result. */
s32 FUN_00335898(void)
{
    scrSetResult(gameDataFlagTestBit(scrGetArg(0)));
    return 1;
}
}
