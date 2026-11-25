/* NON_MATCHING: retail classifies creation errors before cleanup, and the mount path has
 * additional call padding and different saved-register allocation. */
#include "sys/ExtendedSaveData.h"
#include "sys/ProcessResult.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "shard/GlobalBlocks.h"

extern "C" {
extern u8 DAT_005b40c9;

/* Creates the title's extended save data and mounts it if creation succeeds. */
u32 extendedSaveDataCreateAndMount(u32 titleIdLow, u32 titleIdHigh, u32 creationOption1,
                 u32 creationOption0, const char *input)
{
    u32 preparedSize;
    void *preparedData = asdLoadFileWithSize(input, &preparedSize, 0);
    u64 titleId = ((u64)titleIdHigh << 32) | titleIdLow;
    u32 result = FUN_0042a068(titleId, (u32)preparedData, preparedSize,
                             creationOption0, creationOption1);
    processResultSetValue(result);

    if ((s32)result >= 0) {
        u32 mountResult = FUN_00429fcc((const char *)FUN_00142b04(), titleId);
        processResultSetValue(mountResult);
        if ((s32)mountResult >= 0) {
            DAT_005b40c9 = 1;
        }
        processResultSetValue(mountResult);
        result = mountResult;
    }

    if (preparedData != NULL) {
        asdMemFree(preparedData);
    }
    return result;
}
} /* extern "C" */
