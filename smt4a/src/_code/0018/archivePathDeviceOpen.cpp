/* NON_MATCHING: only registers differ: retail keeps the output in r6, the flags in r7 and the path in r8 (built: r7,
 * r8, r6). */
#include "nn/fs/ArchivePath.h"
#include "nn/Result.h"
extern "C" {
ArchivePathDevice* FUN_00197c78(const u16*);

s32 archivePathDeviceOpen(u32* output, const u16* fullPath, u32 flags)
{
    ArchivePathDevice* device = FUN_00197c78(fullPath);
    if (device == NULL) {
        return 0xC8804465;
    }
    u32 handle;
    u32 status = device->open(&handle, ArchivePathDescriptor(fullPath), flags);
    if (nnResultIsSuccess(status)) {
        *output = handle;
    }
    return status;
}
}
