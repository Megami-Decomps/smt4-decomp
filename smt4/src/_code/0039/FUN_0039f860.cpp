#include "shard/NaviMain.h"

extern "C" {

void FUN_0039f860(u32 unused, u32 value)
{
    *(u32 *)((u8 *)g_naviMain + 0x2c) = value;
}

} /* extern "C" */
