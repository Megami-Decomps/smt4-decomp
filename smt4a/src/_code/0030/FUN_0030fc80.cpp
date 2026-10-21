/* NON_MATCHING: counter-product registers differ and the frequency copy uses LDRD/STRD instead of retail's two-register LDM/STM. */
#include "common.h"

extern "C" {
u64 FUN_00159aa4();
u64* FUN_001593ac(u64* divisor, const u64* value);
extern const u64 DAT_00589370;

// Convert the current counter to microseconds using the configured counter frequency.
void FUN_0030fc80(u64* output)
{
    u64 scaled = FUN_00159aa4() * 1000000;
    u64 frequency = DAT_00589370;
    *output = *FUN_001593ac(&frequency, &scaled);
}
}
