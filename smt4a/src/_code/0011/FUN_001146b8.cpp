#include "common.h"

extern "C" {

u64 FUN_002ffa92(void);
u64 rt_lmul(u64 value, u64 factor);
void __aeabi_uldivmod(u64 value, u64 limit);

/* Takes the 64-bit value from FUN_002ffa92, scales it with 1000000 through rt_lmul and passes the result with 0xFFB0FF0 to __aeabi_uldivmod. */
void FUN_001146b8(void)
{
    u64 value;

    value = FUN_002ffa92();
    value = rt_lmul(value, 1000000);
    __aeabi_uldivmod(value, 0xFFB0FF0);
}

} /* extern "C" */
