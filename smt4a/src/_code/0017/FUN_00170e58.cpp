#include "shard/GlobalBlocks.h"

extern "C" {

/* Clears the byte at 0x1 of the global at 0x5891D8. */
void FUN_00170e58(void)
{
    DAT_005891d8.unk01 = 0;
}

} /* extern "C" */
