#include "shard/Shard0047.h"

extern "C" {

extern u32 DAT_00573cd8[];

void FUN_0047f7ac(u32 index, u32 value)
{
    if (index < 2) {
        DAT_00573cd8[index] = value;
    }
}

} /* extern "C" */
