#include "common.h"

extern "C" s32 inputConfirmPressed(void);

/* Script command: true when inputConfirmPressed reports anything. */
extern "C" s32 FUN_00330f34(void)
{
    return inputConfirmPressed() != 0;
}
