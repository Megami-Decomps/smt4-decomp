/* NON_MATCHING: Device null testing and descriptor-address lifetime use different saved registers and stack layout. */
#include "nn/fs/ArchivePath.h"
#include "nn/Result.h"
extern "C" {
ArchivePathDevice* FUN_002b5a5c(const u16*);

u32 FUN_002bb5a4(u32* output, const u16* fullPath, u32 flags)
{
    ArchivePathDevice* device = FUN_002b5a5c(fullPath);
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
