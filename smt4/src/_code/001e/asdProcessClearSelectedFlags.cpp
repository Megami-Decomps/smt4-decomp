#include "common.h"

extern "C" {

void FUN_001ec9e4(s32 set, u32 id, u32 mask, s32 mode);

/* Clears the flag bits `mask` of the process nodes `id` and `mode` select (the setter below with set = 0). */
void asdProcessClearSelectedFlags(u32 id, u32 mask, s32 mode)
{
    FUN_001ec9e4(0, id, mask, mode);
}

} /* extern "C" */
