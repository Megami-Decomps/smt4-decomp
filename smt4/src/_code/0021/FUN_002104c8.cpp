#include "sys/ProcessResult.h"
#include "nn/Result.h"

extern "C" {

struct FileReader;

typedef struct FileReaderVtbl {
    void *unk00[6];
    nn::Result (*seek)(struct FileReader *self, u64 position);                              /* 0x18 */
    void *unk1C[6];
    nn::Result (*read)(struct FileReader *self, s32 *readSize, void *buffer, u32 size, bool flush); /* 0x34 */
} FileReaderVtbl;

typedef struct FileReader {
    FileReaderVtbl *vtbl; /* 0x00 */
    u32 unk04;
    u32 handle;           /* 0x08: file handle, bit 0 set when the handle is invalid */
} FileReader;

void FUN_00254824(u32 result, ...);
static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_002c3510(result);
    return result;
}

void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Reads size bytes at offset into buffer; on failure reports the result and closes the file. */
nn::Result FUN_002104c8(FileReader *reader, u32 offset, void *buffer, u32 size)
{
    s32 readSize;
    nn::Result result;

    u64 position = offset;
    FUN_002c3510(reader->vtbl->seek(reader, position));
    result = reader->vtbl->read(reader, &readSize, buffer, size, true);
    FUN_002c3510(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        if ((reader->handle & ~1u) != 0) {
            if (reader->handle & 1) {
                asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(reader->handle & ~1u);
            reader->handle = 0;
        }
        return result;
    }
    return fileRecordResult(0);
}

} /* extern "C" */
