/* NON_MATCHING: Retail mov r3, r1 differs from recovered mov r3, r1. */
#include "common.h"

struct ExtSaveDataInfoView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
};

struct FileSystemHandleView {
    u32 unk00; // 0x00
};

struct FileSystemStateView {
    u8 unk00[0x10]; // 0x00
    u32 unk10;     // 0x10
};

extern "C" {
extern FileSystemStateView DAT_00589398;

s32 FUN_0016cdc0(ExtSaveDataInfoView* info, s32 kind,
                 u32 identifierLow, u32 identifierHigh);
u32 nn_fs_ipc_FileSystem_CreateExtSaveData(
    const FileSystemHandleView* handle, const ExtSaveDataInfoView* info,
    u32 creationOption0, u32 creationOption1,
    unsigned long long sizeLimit, u32 extraOption0, u32 extraOption1);

// Creates extended save data and normalizes module-17 errors 220 through 229.
u32 FUN_0042a068(u32 identifierLow, u32 identifierHigh,
                 u32 extraOption0, u32 extraOption1,
                 u32 creationOption0, u32 creationOption1)
{
    ExtSaveDataInfoView info;
    FUN_0016cdc0(&info, 1, identifierLow, identifierHigh);

    FileSystemHandleView handle;
    handle.unk00 = DAT_00589398.unk10;
    u32 result = nn_fs_ipc_FileSystem_CreateExtSaveData(
        &handle, &info, creationOption0, creationOption1,
        ~0ULL, extraOption0, extraOption1);

    s32 module = static_cast<s32>(result & 0x3fc00) >> 10;
    if (module == 17) {
        s32 description = result & 0x3ff;
        if (description >= 220 && description <= 229) {
            result = 0xc8804482;
        }
    }
    return result;
}
}
