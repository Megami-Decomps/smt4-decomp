#include "shard/Shard0038.h"

extern "C" {

extern u32 aocDataBlockResolveEntries(u32 a, s32 b);

u8 aocDataBlockHasEntries(u32 a, s32 b)
{
    return aocDataBlockResolveEntries(a, b) != 0;
}

} /* extern "C" */
