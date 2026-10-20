#include "shard/Shard0031.h"

extern "C" {

extern HolderOf9100 *g_unite;

u8 region9100IsClear(void)
{
    Region9100 *region = &g_unite->region;

    return region->flag == 0;
}

} /* extern "C" */
