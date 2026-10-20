#include "common.h"

extern "C" {

extern void (*DAT_0044e8e0[2])(u32 *message);

/* Dispatches a message by its type word: 0x80000000 to handler 0, 0x40000000 to handler 1. */
void FUN_0015d91c(u32 **messagePtr)
{
    u32 *message = *messagePtr;

    if (*message == 0x80000000) {
        DAT_0044e8e0[0](message);
        return;
    }
    if (*message == 0x40000000) {
        DAT_0044e8e0[1](message);
        return;
    }
}

} /* extern "C" */
