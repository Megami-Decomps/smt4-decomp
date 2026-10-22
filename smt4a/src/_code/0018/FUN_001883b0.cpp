/* NON_MATCHING: Device null testing and descriptor-address lifetime use different saved registers and stack layout. */
#include "nn/fs/ArchivePath.h"
#include "nn/Result.h"
extern "C" {
ArchivePathDevice* FUN_00197c78(const u16*);

u32 FUN_001883b0(u32* output, const u16* fullPath, u32 flags)
{
    ArchivePathDevice* device = FUN_00197c78(fullPath);
    if (device == NULL) {
        return 0xC8804465;
    }
    u32 handle;
    ArchivePathDescriptor descriptor(fullPath);
    u32 status = device->open(&handle, &descriptor, flags);
    if (nnResultIsSuccess(status)) {
        *output = handle;
    }
    return status;
}
}
