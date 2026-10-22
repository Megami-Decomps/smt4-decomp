#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

/* Returns whether the flag byte at 0x10F of the screen at 0x57F118 is set. */
u8 FUN_002e2014(void)
{
    return g_campCecEdit->unk10F != 0;
}

} /* extern "C" */
