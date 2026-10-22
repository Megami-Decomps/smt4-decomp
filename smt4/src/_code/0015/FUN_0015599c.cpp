/* NON_MATCHING: the double argument uses the observed soft-float ABI, but MPCore compilation still introduces VFP moves and a stack spill instead of retail's push/loads. */
#include "runtime/Float.h"

/* Return the runtime's zero, subnormal, normal, infinity, or NaN class flags. */
extern "C" __softfp u32 FUN_0015599c(f64 value)
{
    RuntimeDoubleWords bits;
    bits.value = value;
    u32 signlessHigh = bits.words.high << 1;
    u32 result = (bits.words.low | (signlessHigh << 11)) != 0 ? 4 : 0;
    if ((signlessHigh >> 21) != 0) {
        result |= 1;
    }
    if ((signlessHigh >> 21) == 0x7FF) {
        result |= 2;
    }
    if (result == 1) {
        result = 5;
    }
    return result;
}
