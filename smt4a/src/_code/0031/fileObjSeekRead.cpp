/* NON_MATCHING: the success return value is built as `mov r4, #0`; retail has `mov r0, #0; mov r4, r0` (one more instruction). */
#include "nn/Result.h"

extern "C" {

struct FileObj;

typedef struct FileObjVtbl {
    /* 0x00 */ void *unk00[6];
    /* 0x18 */ s32 (*seek)(struct FileObj *file, u64 offset);
    /* 0x1C */ void *unk1c[6];
    /* 0x34 */ s32 (*read)(struct FileObj *file, u32 *outSize, u32 buffer, u32 size, s32 flag);
} FileObjVtbl;

/* A file wrapper; `handle` is the nn::fs file handle with the low bit marking a handle that is not owned. */
typedef struct FileObj {
    /* 0x0 */ FileObjVtbl *vtbl;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 handle;
} FileObj;

extern void FUN_0013ebd8(void);
extern void sysFatalBreak(void);
extern void vcallSlot12IfValid(u32 handle);

/* Seeks to `offset` and reads `size` bytes into `buffer`; on failure closes the handle and returns the error. */
s32 fileObjSeekRead(FileObj *file, u32 offset, u32 buffer, u32 size)
{
    u32 readSize;
    s32 result;

    file->vtbl->seek(file, offset);
    FUN_0013ebd8();
    result = file->vtbl->read(file, &readSize, buffer, size, 1);
    FUN_0013ebd8();
    if (!nnResultIsSuccess(result)) {
        if ((file->handle & ~1) != 0) {
            if ((file->handle & 1) != 0) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(file->handle & ~1);
            file->handle = 0;
        }
        return result;
    }
    s32 ok = 0;

    FUN_0013ebd8();
    return ok;
}

}
