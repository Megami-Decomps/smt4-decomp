#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x2C of the global block at 0x005b3d54. */
void FUN_001445a0(u32 value)
{
    g_asdTextDefaults.unk2C = value;
}

} /* extern "C" */
