#include "shard/W6_W6Match3_MovieRead.h"

extern "C" u64 resourceGetWideHandle(s32 index);
extern "C" u64 FUN_0034e978(s32 index);

extern "C" u32 mobiclipReadIsComplete(MovieReadHandle* handle)
{
    return handle->active == 1 &&
        (s64)resourceGetWideHandle(handle->resourceIndex) > 0 &&
        resourceGetWideHandle(handle->resourceIndex) == FUN_0034e978(handle->resourceIndex);
}
