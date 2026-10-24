#include "common.h"

extern "C" s32 padButtonIsPressed(u32 button);

/* Script command: true when button 0 is pressed. */
extern "C" s32 FUN_003cbaf4(void)
{
    return padButtonIsPressed(0) != 0;
}
