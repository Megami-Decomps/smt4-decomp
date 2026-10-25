#include "common.h"
#include "nn/Result.h"
struct ResultOwner { u8 unk00[20]; u8 operation; };
extern "C" {
s32 FUN_00439c50(void *operation);
/* Returns only the operation's negative failure result. */
s32 windowGetOperationFailure(ResultOwner *owner)
{
    s32 result = FUN_00439c50(&owner->operation);
    return nnResultIsFailure(result) ? result : 0;
}
}
