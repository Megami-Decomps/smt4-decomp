#include "common.h"

extern "C" {

extern u32 *jobGetWork(u32 task);

/* Advances a frame counter (mod 0x28) and sets flag 0x200 once it passes 0x14. */
s32 FUN_0038f8d0(u32 task)
{
    u32 *work = jobGetWork(task);
    u32 *counter = work + 0x5e6;
    u32 value = (*counter + 1) % 0x28;

    *counter = value;
    if (value > 0x14) {
        *work = *work | 0x200;
    }
    return 0;
}

} /* extern "C" */
