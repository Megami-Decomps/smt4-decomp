#include "shard/Sys4651e8.h"
#include "sys/ProcessResult.h"

extern "C" {

void processResultSetValue(u32 value)
{
    g_processResultState.lastResult = value;
}

} /* extern "C" */
