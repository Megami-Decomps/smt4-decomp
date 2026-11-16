/* NON_MATCHING: prologue and the kept-result return now match; retail retests the module before each error range (no jump threading), keeps the recreate call inline after the first range, and does not merge the two delete paths. */
#include "sys/ProcessResult.h"
#include "nn/Result.h"

extern "C" {
nn::Result FUN_001db820(u64 id, u32 directories, u32 files, const char *iconPath);
nn::Result nn_fs_DeleteExtSaveData(u64 id);

// Recreate missing or corrupt external save data while preserving unrelated filesystem errors.
nn::Result FUN_00309a60(nn::Result result, u64 id, u32 directories, u32 files, const char *iconPath)
{
    if ((s32)(result & 0x80000000) < 0) {
        u32 module = nnResultModule(result);
        s32 description = nnResultDescription(result);
        bool recreate = false;
        if (module == 17 && description >= 100 && description < 180) {
            recreate = description < 130;
        } else if (module == 17 && description >= 340 && description < 360) {
            result = nn_fs_DeleteExtSaveData(id);
            FUN_002c3510(result);
            recreate = (s32)(result & 0x80000000) >= 0;
        } else if (module == 17 && description >= 360 && description < 390) {
            /* These errors are returned unchanged. */
        } else if (module == 17 && description >= 390 && description < 400) {
            result = nn_fs_DeleteExtSaveData(id);
            FUN_002c3510(result);
            recreate = (s32)(result & 0x80000000) >= 0;
        }
        if (recreate) {
            result = FUN_001db820(id, directories, files, iconPath);
            FUN_002c3510(result);
        }
    }
    return result;
}
}
