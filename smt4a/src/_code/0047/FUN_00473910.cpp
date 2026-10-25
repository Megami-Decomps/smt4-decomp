#include "shard/Shard0047.h"
#include "shard/FUN_00473910.h"

extern "C" {

extern u32 dataTableValueOrZero(u32 index);
extern void fileSectionGetData(u32 handle, s32 id, u32 *out);

s32 FUN_00473910(u8 *unused, u32 id)
{
    u32 handle = dataTableValueOrZero(0x40);

    if (id != -1) {
        fileSectionGetData(handle, id, 0);
    }
}

} /* extern "C" */
