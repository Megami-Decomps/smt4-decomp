#include "common.h"

extern "C" {

extern u32 FUN_004311ec(u32 arg, u64 *out);

/* Forwards to the IPC request FUN_004311ec. */
u32 FUN_004311e8(u32 arg, u64 *out)
{
    return FUN_004311ec(arg, out);
}

} /* extern "C" */
