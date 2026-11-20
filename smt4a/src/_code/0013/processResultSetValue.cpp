#include "shard/GlobalBlocks.h"
#include "sys/ProcessResult.h"

extern "C" {

/* Stores `value` in the word at 0x10 of the global block at 0x005b40b4. */
void processResultSetValue(u32 value)
{
    g_processResultState.lastResult = value;
}

} /* extern "C" */
