#include "common.h"

extern "C" {

/* Clears byte `b` of row `a` (rows are 2 bytes wide) and reports success. */
u32 FUN_001532e8(u8 *table, s32 a, s32 b)
{
    (table + a * 2)[b] = 0;
    return 1;
}

} /* extern "C" */
