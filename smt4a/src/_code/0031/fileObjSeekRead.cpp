#include "sys/ProcessResult.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"

extern "C" {

struct FileObj;

typedef struct FileObjVtbl {
    /* 0x00 */ void *unk00[6];
    /* 0x18 */ nn::Result (*seek)(struct FileObj *file, u64 offset);
    /* 0x1C */ void *unk1c[6];
    /* 0x34 */ nn::Result (*read)(struct FileObj *file, u32 *outSize, u32 buffer, u32 size, s32 flag);
} FileObjVtbl;

/* A file wrapper; `handle` is the nn::fs file handle with the low bit marking a handle that is not owned. */
typedef struct FileObj {
    /* 0x0 */ FileObjVtbl *vtbl;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 handle;
} FileObj;

static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_0013ebd8(result);
    return result;
}

extern void sysFatalBreak(void);

/* Seeks to `offset` and reads `size` bytes into `buffer`; on failure closes the handle and returns the error. */
nn::Result fileObjSeekRead(FileObj *file, u32 offset, u32 buffer, u32 size)
{
    u32 readSize;
    nn::Result result;

    u64 position = offset;
    FUN_0013ebd8(file->vtbl->seek(file, position));
    result = file->vtbl->read(file, &readSize, buffer, size, 1);
    FUN_0013ebd8(result);
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
    return fileRecordResult(0);
}

}
