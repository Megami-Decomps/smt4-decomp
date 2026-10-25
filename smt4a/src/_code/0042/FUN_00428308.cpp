/* NON_MATCHING: retail reserves an 8-byte frame (push {r0, r1, r4, lr}) and passes sp+4 to the query; the build uses a 4-byte slot. */
#include "common.h"
#include "nn/Result.h"
extern "C" {
s32 queryResultFailureOnly(const u32 *value);
/* Reads the result value only when the query succeeds. */
s32 FUN_00428308(u32 *output)
{
    u32 value;
    s32 result = queryResultFailureOnly(&value);
    if (nnResultIsFailure(result))
        return result;
    *output = value;
    return 0;
}
}
