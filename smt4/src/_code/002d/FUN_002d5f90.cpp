/* NON_MATCHING: retail computes the failure flag into r1 and moves the result to r0 before the branch (the arguments of a result-report call that armlink removed, an empty callee); the build has no such call. */
#include "nn/Result.h"
#include "sys/ProcessResult.h"
#include "common.h"

struct FileView;

struct FileVtableView {
    u8 unk00[0x18]; // 0x00
    nn::Result (*unk18)(FileView* file, u64 offset); // 0x18
    u8 unk1C[0x18]; // 0x1C
    nn::Result (*unk34)(FileView* file, u32* transferred, void* buffer,
                 u32 size, u32 mode); // 0x34
};

struct FileView {
    const FileVtableView* vtable; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08: tagged file handle
};

extern "C" {
void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

// Positions the file, performs a transfer, and closes its handle on failure.
nn::Result FUN_002d5f90(FileView* file, u32 offset, void* buffer, u32 size)
{
    u64 position = offset;
    FUN_002c3510(file->vtable->unk18(file, position));

    u32 transferred;
    nn::Result result = file->vtable->unk34(file, &transferred, buffer, size, 1);
    FUN_002c3510(result);

    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
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
