#include "common.h"

extern "C" {

s32 padIsButtonPressed(s32 button);

/* Reports whether button 0 is pressed. */
u32 FUN_00324644(void)
{
    return padIsButtonPressed(0) != 0;
}

} /* extern "C" */
