/* NON_MATCHING: compiler collapses filesystem error-category tests and duplicate delete branches. */
#include "nn/Result.h"

extern "C" {
s32 FUN_001db820(u64 id, u32 directories, u32 files, const char *iconPath);
void FUN_002c3510(u32 result);
s32 nn_fs_DeleteExtSaveData(u64 id);

// Recreate missing or corrupt external save data while preserving unrelated filesystem errors.
s32 FUN_00309a60(s32 result, u64 id, u32 directories, u32 files, const char *iconPath)
{
    if (nnResultIsSuccess(result))
        return result;
    u32 module = nnResultModule(result);
    s32 description = nnResultDescription(result);
    if (module == 17 && description >= 100 && description < 180) {
        if (description >= 130)
            return result;
    } else {
        if (module == 17 && description >= 340 && description < 360) {
            result = nn_fs_DeleteExtSaveData(id);
            FUN_002c3510(result);
        } else {
            if (module == 17 && description >= 360 && description < 390)
                return result;
            if (module != 17 || description < 390 || description >= 400)
                return result;
            result = nn_fs_DeleteExtSaveData(id);
            FUN_002c3510(result);
        }
        if (nnResultIsFailure(result))
            return result;
    }
    result = FUN_001db820(id, directories, files, iconPath);
    FUN_002c3510(result);
    return result;
}
}
