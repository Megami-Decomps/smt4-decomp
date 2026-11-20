#include "common.h"

extern "C" {

extern void (*g_handlerTable1[2])(u32 *message);

/* Dispatches a message by its type word: 0x80000000 to handler 0, 0x40000000 to handler 1. */
void handlerTableDispatch1(u32 **messagePtr)
{
    u32 *message = *messagePtr;

    if (*message == 0x80000000) {
        g_handlerTable1[0](message);
        return;
    }
    if (*message == 0x40000000) {
        g_handlerTable1[1](message);
        return;
    }
}

} /* extern "C" */
