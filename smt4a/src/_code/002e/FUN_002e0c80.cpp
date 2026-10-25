/* NON_MATCHING: failure test allocates r0 (retail ands r1 with the arg move hoisted above bpl); success path materializes 0 in r4 before r0 */
#include "sys/ProcessResult.h"
#include "nn/Result.h"

extern "C" {

struct FileReader;

typedef struct FileReaderVtbl {
    void *unk00[6];
    s32 (*seek)(struct FileReader *self, s64 position);                              /* 0x18 */
    void *unk1C[6];
    s32 (*read)(struct FileReader *self, s32 *readSize, void *buffer, u32 size, bool flush); /* 0x34 */
} FileReaderVtbl;

typedef struct FileReader {
    FileReaderVtbl *vtbl; /* 0x00 */
    u32 unk04;
    u32 handle;           /* 0x08: file handle, bit 0 set when the handle is invalid */
} FileReader;

void FUN_0032ca54(s32 result);
void sysFatalBreak(void);
void vcallSlot12IfValid(u32 handle);

/* Reads size bytes at offset into buffer; on failure reports the result and closes the file. */
s32 FUN_002e0c80(FileReader *reader, u32 offset, void *buffer, u32 size)
{
    s32 readSize;
    s32 result;

    FUN_0013ebd8(reader->vtbl->seek(reader, offset));
    result = reader->vtbl->read(reader, &readSize, buffer, size, true);
    FUN_0013ebd8(result);
    if (!nnResultIsSuccess(result)) {
        FUN_0032ca54(result);
        if ((reader->handle & ~1u) != 0) {
            if (reader->handle & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(reader->handle & ~1u);
            reader->handle = 0;
        }
        return result;
    }
    result = 0;
    FUN_0013ebd8(result);
    return result;
}

} /* extern "C" */
