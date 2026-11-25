#include "sys/ExtendedSaveData.h"
#include "sys/ProcessResult.h"
#include "nn/Result.h"
#include "shard/GlobalBlocks.h"

extern "C" {

extern u8 DAT_005b40c9;

/* Mounts the title's extended save-data archive. */
s32 extendedSaveDataMount(u64 titleId)
{
    const char *archiveName = (const char *)FUN_00142b04();
    s32 result = FUN_00429fcc(archiveName, titleId);
    processResultSetValue(result);

    if (nnResultIsSuccess(result)) {
        DAT_005b40c9 = 1;
    }

    return result;
}
} /* extern "C" */
