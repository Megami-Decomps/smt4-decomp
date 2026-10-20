#include "common.h"

extern "C" {

s32 FUN_0018973c(void *buffer, u32 size, u32 arg);

/* Forwards unchanged to the IPC request below. */
s32 FUN_00189738(void *buffer, u32 size, u32 arg)
{
    return FUN_0018973c(buffer, size, arg);
}

} /* extern "C" */
