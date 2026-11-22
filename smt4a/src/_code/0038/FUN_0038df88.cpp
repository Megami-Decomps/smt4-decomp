#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void compendiumRegisterPartyDemon(u16 value);
}

extern "C" s32 FUN_0038df88(void)
{
    compendiumRegisterPartyDemon(scrGetArg(0));
    return 1;
}
