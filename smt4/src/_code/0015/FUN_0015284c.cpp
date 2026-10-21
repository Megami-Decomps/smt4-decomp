/* NON_MATCHING: retail uses a software floating-point conversion with overflow branches; armcc emits VFP conversion. */
#include "common.h"

extern "C" {

/* Converts the base-PCS floating-point argument to a signed word. */
s32 FUN_0015284c(u32 valueBits)
{
    union { u32 bits; f32 value; } input;
    input.bits = valueBits;
    return (s32)input.value;
}

} /* extern "C" */
