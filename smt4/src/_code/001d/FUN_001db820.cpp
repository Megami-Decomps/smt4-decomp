/* NON_MATCHING: retail retains side-effect-free error-category checks and linker-NOP hints omitted by this readable control flow. */
/* Creates external save data using an icon file, then mounts it and records the active state. */
#include "nn/Result.h"

extern "C" {
void *fileLoadSync(const char *path, u32 *size, u32 flags);
s32 FUN_00354e48(u64 id, const void *icon, u32 size, u32 files, u32 directories);
void FUN_002c3510(u32 result);
u32 FUN_002c3520(void);
s32 FUN_00354dac(u32 handle, u64 id);
extern u8 g_appletBusyFlag;

s32 FUN_001db820(u64 id, u32 directories, u32 files, const char *iconPath)
{
    u32 size;
    void *icon = fileLoadSync(iconPath, &size, 0);
    s32 result = FUN_00354e48(id, icon, size, files, directories);
    FUN_002c3510(result);
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_00354dac(FUN_002c3520(), id);
    FUN_002c3510(result);
    if (nnResultIsSuccess(result)) {
        g_appletBusyFlag = 1;
    }
    FUN_002c3510(result);
    return result;
}
}
