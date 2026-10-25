#include "shard/GlobalBlocks.h"
#include "sys/ProcessResult.h"

extern "C" {

/* Stores `value` in the word at 0x10 of the global block at 0x005b40b4. */
void FUN_0013ebd8(u32 value)
{
    DAT_005b40b4.unk10 = value;
}

} /* extern "C" */
