#include "common.h"
#include "nn/Result.h"
struct ResultOwner { u8 unk00[20]; u8 operation; };
extern "C" {
s32 FUN_0035fdc8(void *operation);
/* Returns only the operation's negative failure result. */
s32 windowGetOperationFailure(ResultOwner *owner)
{
    s32 result = FUN_0035fdc8(&owner->operation);
    return nnResultIsFailure(result) ? result : 0;
}
}
