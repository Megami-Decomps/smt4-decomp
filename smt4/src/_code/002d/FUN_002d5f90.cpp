/* NON_MATCHING: Retail mov r6, r3 differs from recovered mov r6, r3. */
#include "common.h"

struct FileView;

struct FileVtableView {
    u8 unk00[0x18]; // 0x00
    s32 (*unk18)(FileView* file, unsigned long long offset); // 0x18
    u8 unk1C[0x18]; // 0x1C
    s32 (*unk34)(FileView* file, u32* transferred, void* buffer,
                 u32 size, u32 mode); // 0x34
};

struct FileView {
    const FileVtableView* vtable; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08: tagged file handle
};

extern "C" {
void FUN_002c3510(s32 result);
void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

// Positions the file, performs a transfer, and closes its handle on failure.
s32 FUN_002d5f90(FileView* file, u32 offset, void* buffer, u32 size)
{
    FUN_002c3510(file->vtable->unk18(file, offset));

    u32 transferred;
    s32 result = file->vtable->unk34(file, &transferred, buffer, size, 1);
    FUN_002c3510(result);

    if ((result & 0x80000000U) != 0) {
        if ((file->unk08 & ~1U) != 0) {
            if ((file->unk08 & 1U) != 0) {
                asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file->unk08 & ~1U);
            file->unk08 = 0;
        }
    }

    return result;
}
}
