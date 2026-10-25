/* NON_MATCHING: retail moves the arguments r0 -> r2 first and omits the branch after the final conditional load of the service result code. */
#include "nn/Result.h"
extern "C" {
s32 FUN_004268ec(u8 *value, u8 mode, u32 first, u32 second);
/* Maps the query's absent and nonzero-value cases to their service result codes. */
s32 FUN_00427bf0(u32 first, u32 second)
{
    u8 value;
    u32 result = FUN_004268ec(&value, 1, first, second);
    if (result == 0xD8A083FA)
        return 0;
    if (nnResultIsFailure(result))
        return result;
    if (value)
        return (s32)0xE0A13899;
    return 0;
}
}
