#include "shard/Shard0050.h"

extern "C" {

/* Section `index` of a table whose count is at +0x14 followed by (unused, offset) pairs. */
u8 *getTableSectionByIndex(u8 *base, u32 index)
{
    u32 *table = (u32 *)(base + 0x14);

    if (index >= table[0]) {
        return NULL;
    }
    return (u8 *)table + table[index * 2 + 2];
}

} /* extern "C" */
