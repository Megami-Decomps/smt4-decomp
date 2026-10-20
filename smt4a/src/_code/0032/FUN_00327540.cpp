#include "shard/Shard0035.h"

extern "C" {

extern Entry30 *dataTable4CGetEntry(u32 index);

u8 FUN_00327540(u32 index)
{
    return dataTable4CGetEntry(index)->unk08 != 0;
}

} /* extern "C" */
