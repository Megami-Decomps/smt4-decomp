#include "shard/Sys4651e8.h"
#include "sys/ProcessResult.h"

extern "C" {

void processResultSetValue(u32 value)
{
    DAT_004651e8.unk10 = value;
}

} /* extern "C" */
