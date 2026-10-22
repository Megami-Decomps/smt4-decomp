#include "common.h"

extern "C" {

extern void FUN_002a2d28(s32 set, u32 handle, u32 mask, u32 mode);

/* Clears the flags in `mask` on the process (or processes) `handle` selects, per `mode`. */
void asdProcessClearSelectedFlags(u32 handle, u32 mask, u32 mode)
{
    FUN_002a2d28(0, handle, mask, mode);
}

} /* extern "C" */
