#include "shard/Shard0031.h"

extern "C" {

extern HolderOf9100 *DAT_0057f290;

u8 region9100IsClear(void)
{
    Region9100 *region = &DAT_0057f290->region;

    return region->flag == 0;
}

} /* extern "C" */
