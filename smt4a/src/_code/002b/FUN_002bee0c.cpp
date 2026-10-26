/* NON_MATCHING: compiler merges the two access-mode branches; retail duplicates the bookkeeping reset and open call. */
#include "sys/ProcessResult.h"
#include "common.h"

struct ArchiveOpenWork {
    u32 unk00;
    u32 unk04;
    u32 handle; // 0x08
    u32 state; // 0x0c
    u32 position; // 0x10
    u32 sizeLow; // 0x14
    u32 sizeHigh; // 0x18
};
extern "C" {
void pathBuildWide(const char *path, void *convertedPath, u32 mode);
s32 FUN_001883b0(void *archive, void *convertedPath, u32 mode);

// Convert a path, reset archive bookkeeping and open it using the requested access mode.
s32 FUN_002bee0c(ArchiveOpenWork *work, const char *path, s32 mode)
{
    u8 convertedPath[500];
    pathBuildWide(path, convertedPath, 1);
    if (path) {
        work->sizeLow = 0;
        work->sizeHigh = 0;
        work->state = 0;
        work->position = 0;
        s32 result = FUN_001883b0(&work->handle, convertedPath, mode == 1 ? 2 : 1);
        FUN_0013ebd8(result);
        return result;
    }
    FUN_0013ebd8((u32)-0x1f1fb944);
    return -0x1f1fb944;
}
}
