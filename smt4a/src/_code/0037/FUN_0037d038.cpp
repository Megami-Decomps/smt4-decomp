#include "shard/Shard0037.h"

extern "C" {

extern u32 DAT_005e2194[];

void FUN_0037d038(u32 index, u32 value)
{
    if (index < 0x20) {
        DAT_005e2194[index] = value;
    }
}

} /* extern "C" */
