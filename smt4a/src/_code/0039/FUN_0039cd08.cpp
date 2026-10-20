/* Script command: applies its argument to the object FUN_004d0cd4 returns, and returns that object as the result. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
void FUN_002d8b34(u32 arg);
void dispatchIfFound(u32 result, u32 arg, s32 flag);
u32 FUN_004d0cd4(void);

extern u32 DAT_0057a9c8;
__weak void FUN_0039cd08_hook(u32 value);

u32 FUN_0039cd08(void)
{
    u32 arg = scrGetArg(0);
    u32 result = FUN_004d0cd4();

    FUN_002d8b34(arg);
    dispatchIfFound(result, arg, 0);
    FUN_0039cd08_hook(DAT_0057a9c8);
    scrSetResult(result);
    return 1;
}

}
