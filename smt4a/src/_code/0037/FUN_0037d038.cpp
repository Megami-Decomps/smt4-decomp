#include "shard/Shard0037.h"

extern "C" {

extern u32 g_scrCommGlobalTable[];

void FUN_0037d038(u32 index, u32 value)
{
    if (index < 0x20) {
        g_scrCommGlobalTable[index] = value;
    }
}

} /* extern "C" */
