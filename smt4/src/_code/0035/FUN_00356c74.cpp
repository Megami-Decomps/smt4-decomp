/* NON_MATCHING: only register numbering differs (retail keeps the tracked pointer in r6 and the value halves in r5/r4; the build uses r4 and r6/r5). */
#include "common.h"
#include "nn/Result.h"

extern "C" {
/* A 64-bit value stored as two words (the record keeps it 4-byte aligned). */
struct SplitS64 {
    u32 low;
    s32 high;

    operator s64() const { return ((s64)high << 32) | low; }
};

struct TrackedValue {
    /* 0x00 */ u32 handle;     /* bit 0 is a flag */
    /* 0x04 */ SplitS64 minimum;
    /* 0x0C */ SplitS64 current;

    void setCurrent(s64 value)
    {
        current.high = (s32)(value >> 32);
        current.low = (u32)value;
    }

    void lowerMinimum(s64 value)
    {
        SplitS64 old = minimum;

        if (value < (s64)old) {
            minimum.low = (u32)value;
            minimum.high = (s32)(value >> 32);
        }
    }
};

s32 FUN_00355db0(u32 handle);

/* Records a new 64-bit sample on a tracked value: stores it as the current one and lowers the minimum when it is smaller. */
s32 FUN_00356c74(TrackedValue *tracked, s64 value)
{
    s32 result = FUN_00355db0(tracked->handle & ~1U);

    if (nnResultIsSuccess(result)) {
        tracked->setCurrent(value);
        tracked->lowerMinimum(value);
    }
    return result;
}
}
