/* NON_MATCHING: counter-product registers differ and the frequency copy uses LDRD/STRD instead of retail's two-register LDM/STM (a two-u32 struct copy also gives LDRD). */
#include "common.h"

extern "C" {
u64 FUN_0011c95c();
u64* FUN_0011c264(u64* divisor, const u64* value);
extern const u64 DAT_0044e630;

// Convert the current counter to microseconds using the configured counter frequency.
void FUN_002c567c(u64* output)
{
    u64 scaled = FUN_0011c95c() * 1000000;
    u64 frequency = DAT_0044e630;
    *output = *FUN_0011c264(&frequency, &scaled);
}
}
