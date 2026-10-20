#include "common.h"

extern "C" {

extern u32 *jobGetWork(void);

/* Advances a frame counter (mod 0x28) and sets flag 0x200 once it passes 0x14. */
u32 FUN_0038f8d0(void)
{
    u32 *work = jobGetWork();
    u32 *counter = work + 0x5e6;
    u32 value = (*counter + 1) % 0x28;

    *counter = value;
    if (value > 0x14) {
        *work = *work | 0x200;
    }
    return 0;
}

} /* extern "C" */
