#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void eventEffectStartAlert(s32 value);

/* Script command: passes its first argument to eventEffectStartAlert. */
s32 FUN_00348be8(void)
{
    eventEffectStartAlert(scrGetArg(0));
    return 1;
}
}
