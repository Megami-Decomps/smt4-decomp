#include "shard/Shard0038.h"

extern "C" {

extern Entry30 *dataTable4CGetEntry(u32 index);

s32 FUN_003857c8(u32 index)
{
    return dataTable4CGetEntry(index)->unk00;
}

} /* extern "C" */
