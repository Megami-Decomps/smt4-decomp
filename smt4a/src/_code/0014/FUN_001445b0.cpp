#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` with its low byte cleared in the word at 0x8 of the global block at 0x5B3D54. */
void FUN_001445b0(u32 value)
{
    g_asdTextDefaults.unk08 = value & 0xFFFFFF00;
}

} /* extern "C" */
