/* NON_MATCHING: the 64-bit id now moves r0:r1 -> r2:r3 in order like retail; remaining: armcc keeps a `beq` to the next instruction after the final conditional load (retail ends right after the ldrne). */
#include "nn/Result.h"
extern "C" {
s32 FUN_004268ec(u8 *value, u8 mode, u64 id);
/* Maps the query's absent and nonzero-value cases to their service result codes. */
s32 FUN_00427bf0(u64 id)
{
    u8 value;
    u32 result = FUN_004268ec(&value, 1, id);
    if (result == 0xD8A083FA)
        return 0;
    if (nnResultIsFailure(result))
        return result;
    if (value)
        return (s32)0xE0A13899;
    return 0;
}
}
