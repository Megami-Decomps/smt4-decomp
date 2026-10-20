#include "shard/Shard0036.h"

extern "C" {

extern Entry30 *dataTable4CGetEntry(u32 index);

s32 FUN_003683b8(u32 index)
{
    return dataTable4CGetEntry(index)->unk2C;
}

} /* extern "C" */
