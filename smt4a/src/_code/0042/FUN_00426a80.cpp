#include "common.h"

extern "C" {

extern u32 FUN_00426a84(u8 *out);

/* Forwards to the IPC request FUN_00426a84. */
u32 FUN_00426a80(u8 *out)
{
    return FUN_00426a84(out);
}

} /* extern "C" */
