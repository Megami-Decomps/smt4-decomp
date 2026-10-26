#include "common.h"

extern "C" s32 fsArchiveGetWorkspaceSize(u32 mode, const char *file, u64 titleId,
                            u32 option, u32 fileCount, u32 directoryCount)
{
    return static_cast<s32>(fileCount * 0x20 + directoryCount * 0x18);
}
