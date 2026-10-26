/* NON_MATCHING: readable rewrite; retail copies the two stack arguments with an integer ldm into r6/ip and keeps the shared zero in r7 (push {r4-r7, lr}); the build copies them through VFP and keeps zero in r0. */
#include "common.h"
#include "nn/Result.h"
#include "util/PlatformResultCheck.h"

namespace {
struct MountedDevice;
struct MountedDeviceVtable {
    u8 prefix00[0x30];
    void (*release)(MountedDevice *device);
};
struct MountedDevice {
    const MountedDeviceVtable *vtable;
};
struct DeviceOpenRequest {
    explicit DeviceOpenRequest(u32 requestKind) : kind(requestKind), unk04(0), unk08(0) {}
    u32 kind;
    u32 unk04;
    u32 unk08;
};
}

extern "C" {
s32 FUN_0016cf30(u32 *handle, u32 first, u32 second, void *buffer, u32 size, u32 mode,
                 const DeviceOpenRequest *request);
u32 FUN_001aeefc(const char *name, u32 handle, u8 downloadable, u8 flags);

// Open the device behind `device` and register it, releasing it again when registration fails.
u32 FUN_001589a0(const char *device, u32 first, u32 second, void *buffer, u32 size, u32 mode)
{
    u32 handle = 0;
    DeviceOpenRequest request(0);
    MountedDevice *opened;
    s32 result = FUN_0016cf30(&handle, first, second, buffer, size, mode, &request);
    if (!nnResultIsFailure(result)) {
        opened = reinterpret_cast<MountedDevice *>(handle);
        result = 0;
    }
    checkPlatformResult(result, __current_pc());
    result = static_cast<s32>(FUN_001aeefc(device, reinterpret_cast<u32>(opened), 0, 0));
    if ((s32)(result & 0x80000000) < 0) {
        opened->vtable->release(opened);
        checkPlatformResult(result, __current_pc());
    }
    return 0;
}
}
