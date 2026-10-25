/* NON_MATCHING: parameter/request copies use VFP and fewer saved registers; category tests, result propagation and failure cleanup match retail. */
#include "shard/W6_W6Match2_HandleRequest.h"
#include "nn/Result.h"
#include <stddef.h>

namespace {
struct MountedArchiveDevice;
struct MountedArchiveDeviceVtable {
    u8 prefix00[0x30];
    void (*release)(MountedArchiveDevice *device);
};
struct MountedArchiveDevice {
    const MountedArchiveDeviceVtable *vtable;
};
typedef char MountedArchiveReleaseOffsetCheck[
    offsetof(MountedArchiveDeviceVtable, release) == 0x30 ? 1 : -1];
}

extern "C" {
u32 titleContentStreamCreate(u32 *handle, const HandleRequest *request,
    u32 fileCount, u32 directoryCount, u32 buffer, u32 bytes, u32 flags);
u32 FUN_002bb99c(const char *name, u32 handle, u8 downloadable, u8 flags);

// Mount a title-backed archive using the supplied fixed workspace.
s32 FUN_00127000(const char *name, u32 mode, u64 titleId, u32 option,
    u32 fileCount, u32 directoryCount, void *buffer, u32 bytes, u32 flags)
{
    HandleRequest request;
    request.value = titleId;
    request.kind = mode;
    request.argument = option;
    u32 handle;
    u32 result = titleContentStreamCreate(&handle, &request, fileCount, directoryCount,
        reinterpret_cast<u32>(buffer), bytes, flags);
    if (nnResultIsFailure(static_cast<s32>(result)))
        return static_cast<s32>(result);
    const u32 category = static_cast<u32>(titleId >> 32);
    const bool downloadable = (category >> 14) == 0x10 && static_cast<u16>(category) == 0x8C;
    result = FUN_002bb99c(name, handle, downloadable, 0);
    if (nnResultIsFailure(static_cast<s32>(result))) {
        MountedArchiveDevice *device = reinterpret_cast<MountedArchiveDevice *>(handle);
        device->vtable->release(device);
        return static_cast<s32>(result);
    }
    return 0;
}
}
