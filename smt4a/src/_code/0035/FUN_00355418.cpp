#include "shard/Shard0035.h"

extern "C" {

extern Entry30 *dataTable4CGetEntry(u32 index);

s32 FUN_00355418(u32 index)
{
    return dataTable4CGetEntry(index)->unk12;
}

} /* extern "C" */
