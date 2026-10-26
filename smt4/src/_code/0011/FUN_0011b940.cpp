#include "common.h"
#include "nn/Result.h"

namespace {
struct MountedDevice;
struct MountedDeviceVtable {
    u8 prefix00[0x30];
    void (*release)(MountedDevice *device);
};
struct MountedDevice {
    const MountedDeviceVtable *vtable;
};
}

extern "C" {
void nn_fs_ExtSaveDataSpecifier_Make(u8 *specifier, s32 mediaType, u32 saveId, u32 unused);
s32 FUN_001272fc(MountedDevice **device, const u8 *specifier);
s32 FUN_002bb99c(const char *name, MountedDevice *device, u8 downloadable, u8 flags);

// Opens the extra save data `saveId` as a device and registers it under `name`; releases it again on failure.
s32 FUN_0011b940(const char *name, u32 saveId)
{
    u8 specifier[12];
    MountedDevice *device;
    nn_fs_ExtSaveDataSpecifier_Make(specifier, 0, saveId, 0);
    s32 result = FUN_001272fc(&device, specifier);
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_002bb99c(name, device, 0, 0);
    if (nnResultIsFailure(result)) {
        device->vtable->release(device);
        return result;
    }
    return 0;
}
}
