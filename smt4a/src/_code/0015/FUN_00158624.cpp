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
void FUN_0016cdc0(u8 *specifier, s32 mediaType, u32 saveId, u32 unused);
s32 FUN_0016d090(MountedDevice **device, const u8 *specifier);
s32 FUN_001aeefc(const char *name, MountedDevice *device, u8 downloadable, u8 flags);

// Opens the extra save data `saveId` as a device and registers it under `name`; releases it again on failure.
s32 FUN_00158624(const char *name, u32 saveId)
{
    u8 specifier[12];
    MountedDevice *device;
    FUN_0016cdc0(specifier, 0, saveId, 0);
    s32 result = FUN_0016d090(&device, specifier);
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_001aeefc(name, device, 0, 0);
    if (nnResultIsFailure(result)) {
        device->vtable->release(device);
        return result;
    }
    return 0;
}
}
