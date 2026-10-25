/* NON_MATCHING: success value: retail builds it in r0 then copies it to r4 (`mov r0, #0; mov r4, r0`); built `mov r4, #0; mov r0, r4`. */
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

extern void FUN_002c3510(u32 result);
extern void asdFatalError(void);
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Seeks to `offset` and reads `size` bytes into `buffer`; on failure closes the handle and returns the error. */
s32 fileObjSeekRead(FileObj *file, u32 offset, u32 buffer, u32 size)
{
    u32 readSize;
    s32 result;

    FUN_002c3510(file->vtbl->seek(file, offset));
    result = file->vtbl->read(file, &readSize, buffer, size, 1);
    FUN_002c3510(result);
    if (!nnResultIsSuccess(result)) {
        if ((file->handle & ~1) != 0) {
            if ((file->handle & 1) != 0) {
                asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file->handle & ~1);
            file->handle = 0;
        }
        return result;
    }
    result = 0;

    FUN_002c3510(result);
    return result;
}

}
