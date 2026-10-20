#include "common.h"

extern "C" {

u64 FUN_001623d4(void);

/* Stores the 64-bit value returned by FUN_001623d4 in `*out`. */
void FUN_00103796(u64 *out)
{
    *out = FUN_001623d4();
}

} /* extern "C" */
