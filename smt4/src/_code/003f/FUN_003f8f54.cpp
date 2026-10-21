/* NON_MATCHING: retail uses vmov s0, r0 where the compiled block uses vldr s0, [r4, #12]. */
#include "common.h"

struct FloatRange {
    u32 unk00;       // 0x00
    u32 unk04;       // 0x04
    f32 scale;       // 0x08
    f32 bias;        // 0x0C
};

extern "C" const u32* FUN_003f89f8(const FloatRange* range);

extern "C" f32 FUN_003f8f54(const FloatRange* range)
{
    const u32* sample = FUN_003f89f8(range);
    const u32 value = *sample >> 12;
    return static_cast<f32>(value) * range->scale + range->bias;
}
