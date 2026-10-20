#include "common.h"

extern "C" {

extern void (*DAT_004734c8[2])(u32 *message);

/* Dispatches a message by its type word: 0x80000000 to handler 0, 0x40000000 to handler 1. */
void FUN_002a2058(u32 **messagePtr)
{
    u32 *message = *messagePtr;

    if (*message == 0x80000000) {
        DAT_004734c8[0](message);
        return;
    }
    if (*message == 0x40000000) {
        DAT_004734c8[1](message);
        return;
    }
}

} /* extern "C" */
