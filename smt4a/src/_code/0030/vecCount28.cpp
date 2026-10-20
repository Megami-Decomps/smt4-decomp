/* Element count of a vector of 28-byte elements: the byte span (end - begin) divided by 28 via the runtime divide. */
#include "common.h"

extern "C" {

typedef struct {
    u8 *begin; /* 0x00 */
    u8 *end;   /* 0x04 */
} ByteRange;

s32 __aeabi_idivmod(s32 numerator, s32 denominator);

s32 vecCount28(const ByteRange *range)
{
    return __aeabi_idivmod(range->end - range->begin, 28);
}

} /* extern "C" */
