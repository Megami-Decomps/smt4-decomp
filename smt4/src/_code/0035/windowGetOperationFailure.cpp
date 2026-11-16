#include "common.h"
#include "nn/Result.h"
struct ResultOwner { u8 unk00[20]; u8 operation; };
extern "C" {
s32 ipcRequestWithString(void *operation);
/* Returns only the operation's negative failure result. */
s32 windowGetOperationFailure(ResultOwner *owner)
{
    s32 result = ipcRequestWithString(&owner->operation);
    return nnResultIsFailure(result) ? result : 0;
}
}
