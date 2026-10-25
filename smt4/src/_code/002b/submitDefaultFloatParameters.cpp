#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"

struct SixFloatParameters {
    f32 values[6];
};
extern "C" {
extern const SixFloatParameters DAT_00409970;
void FUN_002adba8(const SixFloatParameters *parameters, u32 size, s32 enabled);
}

/* Submit a writable copy of the six default floating-point parameters. */
extern "C" void submitDefaultFloatParameters()
{
    SixFloatParameters parameters = DAT_00409970;
    FUN_002adba8(&parameters, sizeof(parameters), 1);
}
