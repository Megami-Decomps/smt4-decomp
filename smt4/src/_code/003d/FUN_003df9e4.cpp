/* NON_MATCHING: retail loads the four halves of the two 64-bit fields separately (ldr x4) where armcc here uses ldm/ldr with writeback. */
#include "common.h"

extern "C" {

struct Span {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u64 start;
    /* 0x10 */ u64 end;
};

/* Stores the length of the span in the output and reports success. */
s32 FUN_003df9e4(const Span *span, u64 *length)
{
    *length = span->end - span->start;
    return 0;
}

} /* extern "C" */
