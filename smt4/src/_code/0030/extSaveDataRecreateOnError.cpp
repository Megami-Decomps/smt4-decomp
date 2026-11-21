/* NON_MATCHING: 4 lines: the last range's pooled bound 390 goes to r2 in retail, r1 (the dead module) here. */
#include "sys/ProcessResult.h"
#include "nn/FsResult.h"

extern "C" {
nn::Result FUN_001db820(u64 id, u32 directories, u32 files, const char *iconPath);
nn::Result nn_fs_DeleteExtSaveData(u64 id);

// Recreate missing or corrupt external save data while preserving unrelated filesystem errors.
nn::Result extSaveDataRecreateOnError(nn::Result result, u64 id, u32 directories, u32 files, const char *iconPath)
{
    if ((s32)(result & 0x80000000) < 0) {
        if (fsResultInRange100(result)) {
            if (nnResultDescriptionBits(result) < 130) {
                result = FUN_001db820(id, directories, files, iconPath);
                processResultSetValue(result);
            }
            return result;
        }
        if (fsResultInRange340(result)) {
            result = nn_fs_DeleteExtSaveData(id);
            processResultSetValue(result);
            if ((s32)(result & 0x80000000) >= 0) {
                result = FUN_001db820(id, directories, files, iconPath);
                processResultSetValue(result);
            }
            return result;
        }
        if (fsResultInRange360(result))
            return result;
        if (fsResultInRange390(result)) {
            result = nn_fs_DeleteExtSaveData(id);
            processResultSetValue(result);
            if ((s32)(result & 0x80000000) >= 0) {
                result = FUN_001db820(id, directories, files, iconPath);
                processResultSetValue(result);
            }
        }
    }
    return result;
}
}
