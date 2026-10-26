#include "common.h"
#include "nn/Result.h"
extern "C" {
s32 queryResultFailureOnly(const u32 *value);
/* Queries with `value` (passed by address) and stores it to `output` unless the query fails. */
s32 FUN_00428308(u32 *output, u32 value)
{
    s32 result = queryResultFailureOnly(&value);
    if (nnResultIsFailure(result))
        return result;
    *output = value;
    return 0;
}
}
