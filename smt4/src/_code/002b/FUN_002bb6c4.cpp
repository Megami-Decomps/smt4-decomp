/* NON_MATCHING: register allocation only: retail keeps the hoisted zero in r6 and `buffer` in r7; ours swaps them. */
#include "common.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"

struct FileObj;

struct FileObjVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ s32 (*rewind)(FileObj *file, u64 offset, s32 flag);
    /* 0x0C */ void *unk0c[10];
    /* 0x34 */ s32 (*read)(FileObj *file, u32 *outSize, u32 buffer, u32 size, s32 flag);
};

/* A file wrapper; `handle` is the nn::fs file handle with the low bit marking a handle that is not owned. */
struct FileObj {
    /* 0x0 */ FileObjVtbl *vtbl;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 handle;
};

extern "C" {
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);
void FUN_002bb648(s32 result, u32 location, u32 failed);
}

static __inline void checkFileResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_002bb648(result, location, failed);
}

static __inline void fileObjClose(FileObj *file)
{
    if ((file->handle & 0xfffffffe) != 0) {
        if ((file->handle & 1) != 0) {
            asdFatalError();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file->handle & 0xfffffffe);
        file->handle = 0;
    }
}

// Rewinds the file and reads its 0x14-byte header into `buffer`, closing the handle on any failure.
extern "C" void FUN_002bb6c4(FileObj *file, u32 buffer)
{
    u32 readSize;
    s32 result = file->vtbl->rewind(file, 0, 0);
    if ((s32)(result & 0x80000000) < 0) {
        fileObjClose(file);
        checkFileResult(result, __current_pc());
    }
    result = file->vtbl->read(file, &readSize, buffer, 0x14, 1);
    if ((s32)(result & 0x80000000) < 0) {
        fileObjClose(file);
        checkFileResult(result, __current_pc());
    }
    fileObjClose(file);
}
