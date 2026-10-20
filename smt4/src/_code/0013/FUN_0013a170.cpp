#include "common.h"

extern "C" {

s32 FUN_0013a174(void *buffer, u32 size, u32 arg);

/* Forwards unchanged to the IPC request below. */
s32 FUN_0013a170(void *buffer, u32 size, u32 arg)
{
    return FUN_0013a174(buffer, size, arg);
}

} /* extern "C" */
