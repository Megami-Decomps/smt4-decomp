#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 FUN_0029c1fc(void);
void FUN_0029c1c8(s32 object, s32 value, s32 flag);

/* Script command: applies its first argument to the object FUN_0029c1fc returns. */
s32 FUN_002cd76c(void)
{
    FUN_0029c1c8(FUN_0029c1fc(), scrGetArg(0), 0);
    return 1;
}
}
