#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x9 of the global at 0x5891D8. */
void FUN_00170a20(void)
{
    DAT_005891d8.unk09 = 1;
}

} /* extern "C" */
