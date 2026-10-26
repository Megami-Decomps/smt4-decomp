/* NON_MATCHING: Retail mov r6, r3 differs from recovered mov r6, r3. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "util/vcallSlot12IfValid.h"

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
void sysFatalBreak(void);

// Positions the file, transfers data, and releases a valid handle on failure.
s32 FUN_00341824(FileView* file, u32 offset, void* buffer, u32 size)
{
    FUN_0013ebd8(file->vtable->unk18(file, offset));

    u32 transferred;
    s32 result = file->vtable->unk34(file, &transferred, buffer, size, 1);
    FUN_0013ebd8(result);

    if (nnResultIsFailure(result)) {
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
