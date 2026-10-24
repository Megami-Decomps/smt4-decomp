#include "common.h"

extern "C" {

void messageArmMenuAnimation(s32 value);
s32 scrGetArg(s32 index);

/* Script command: starts the arm menu animation selected by the first argument. */
u32 FUN_0034e6f0(void)
{
    messageArmMenuAnimation(scrGetArg(0));
    return 1;
}

} /* extern "C" */
