#include "common.h"

extern "C" {

u64 FUN_002ffa92(void);
u64 FUN_002e49c4(u64 value, u64 factor);
void FUN_002ffa9c(u64 value, u64 limit);

/* Takes the 64-bit value from FUN_002ffa92, scales it with 1000000 through FUN_002e49c4 and passes the result with 0xFFB0FF0 to FUN_002ffa9c. */
void FUN_001146b8(void)
{
    u64 value;

    value = FUN_002ffa92();
    value = FUN_002e49c4(value, 1000000);
    FUN_002ffa9c(value, 0xFFB0FF0);
}

} /* extern "C" */
