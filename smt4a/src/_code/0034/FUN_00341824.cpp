/* NON_MATCHING: retail copies the result into r0 before the failure test (`ands r1,r5; mov r0,r5; bpl`) and again after the release path; the build copies it once at the end. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"

struct FileView;

struct FileVtableView {
    u8 unk00[0x18]; // 0x00
    nn::Result (*unk18)(FileView* file, unsigned long long offset); // 0x18
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
void sysFatalBreak(void);

// Positions the file, transfers data, and releases a valid handle on failure.
nn::Result FUN_00341824(FileView* file, u32 offset, void* buffer, u32 size)
{
    FUN_0013ebd8(file->vtable->unk18(file, offset));

    u32 transferred;
    nn::Result result = file->vtable->unk34(file, &transferred, buffer, size, 1);
    FUN_0013ebd8(result);

    if (!nnResultIsSuccess(result)) {
        if ((file->unk08 & ~1U) != 0) {
            if ((file->unk08 & 1U) != 0) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(file->unk08 & ~1U);
            file->unk08 = 0;
        }
    }
    return result;
}
}
