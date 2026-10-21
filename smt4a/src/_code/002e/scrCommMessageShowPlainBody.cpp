#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

/* Queues a message without extra window options. */
static void showMessage(u32 unit, u32 arg, u32 value, s32 kind)
{
    FUN_0021bdac(unit, arg, value, kind, 0, 0);
}

/* Script body for a plain message associated with the given unit. */
void scrCommMessageShowPlainBody(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();
    showMessage(unit, arg, value, 7);
}
}
