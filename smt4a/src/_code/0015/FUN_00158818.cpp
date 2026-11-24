#include "common.h"

struct TitleContentFileSystem {
    u8 unk00[0x10];
    u32 handle;
};

extern "C" {
extern TitleContentFileSystem g_titleContentFileSystem;
void nn_fs_ipc_FileSystem_InitializeWithSdkVersion(u32 *handle, u32 sdkVersion);

s32 FUN_00158818(u32 handle)
{
    u32 local[1];
    g_titleContentFileSystem.handle = handle;
    local[0] = handle;
    nn_fs_ipc_FileSystem_InitializeWithSdkVersion(local, 0x0B0101C8);
    return 0;
}
}
