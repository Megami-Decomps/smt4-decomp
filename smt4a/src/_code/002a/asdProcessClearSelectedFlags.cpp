#include "common.h"

extern "C" {

extern void jobSetFlagsByMode(s32 set, u32 handle, u32 mask, u32 mode);

/* Clears the flags in `mask` on the process (or processes) `handle` selects, per `mode`. */
void asdProcessClearSelectedFlags(u32 handle, u32 mask, u32 mode)
{
    jobSetFlagsByMode(0, handle, mask, mode);
}

} /* extern "C" */
