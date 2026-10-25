/* NON_MATCHING: readable rebuild of the file open/read/close helper; the on-stack file object is initialised by retail with address constants (0x420B78, 0x420BF0) written as separate stores, and the media dispatch is a chain of compares that armcc here compiles from the switches. */
#include "nn/Result.h"
#include "common.h"

/* A file object living on the caller's stack: a vtable pair and open state. */
struct FileObject {
    const void *vtable;
    const void *vtableSecond;
    u32 state[5];
};

typedef s32 FileResult;

extern "C" {
extern u8 DAT_00420b20;
extern u8 DAT_004651e8;

FileResult FUN_0024ab94(FileObject *file, s32 path, u32 mode);
FileResult FUN_001ff93c(FileObject *file);
FileResult FUN_002cbfe8(FileObject *file);
FileResult FUN_001ffaf0(void);
FileResult FUN_002cbe94(FileObject *file, s32 path, u32 size);
FileResult FUN_00220330(FileObject *file);
FileResult FUN_002e1380(void);
void FUN_002cbf90(void);
void FUN_00220438(void);
void FUN_002e1458(void);
FileResult fileObjSeekRead(FileObject *file, s32 position, u32 buffer, u32 size);
void FUN_002104c8(void);
void FUN_002d5f90(void);
FileResult fileOwnerCloseA(FileObject *file);
FileResult fileOwnerCloseB(FileObject *file);
FileResult fileOwnerCloseC(FileObject *file);
FileResult fileOwnerCloseD(void);
void fileHandleClose(FileObject *file, s32 arg);

#define FILE_INVALID_MEDIA ((FileResult)0xE7E3FFFF)

/* Whether a failed open is the retryable "file not yet available" error (module 0x11, range 100..179). */
static bool isRetryable(FileResult result)
{
    return (result & 0x3FC00) == 0x4400 && (result & 0x3FF) >= 100 && (result & 0x3FF) < 0xB4;
}

/* Opens a file on one of the four media (`media`: 0 archive, 1 save, 2 extra, 3 raw), reads from it
 * into `buffer` and closes it again; returns 1 on success and 0 on any error. */
u32 FUN_002f55cc(s32 media, s32 path, u32 buffer, u32 size)
{
    FileObject file;
    file.vtable = &DAT_00420b20 + 0x58;
    file.vtableSecond = (const void *)0x420BF0;
    for (s32 i = 0; i < 5; i++)
        file.state[i] = 0;

    FileResult result = FILE_INVALID_MEDIA;
    switch (media) {
    case 0:
        result = FUN_0024ab94(&file, path, 1);
        break;
    case 1:
        result = FUN_001ff93c(&file);
        break;
    case 2:
        result = FUN_002cbfe8(&file);
        break;
    case 3:
        result = FUN_001ffaf0();
        break;
    }
    if (isRetryable(result) || nnResultIsFailure(result)) {
        switch (media) {
        case 0:
            result = FUN_002cbe94(&file, path, size);
            break;
        case 1:
            result = FUN_00220330(&file);
            break;
        case 2:
            result = FUN_002e1380();
            break;
        default:
            result = FILE_INVALID_MEDIA;
            break;
        }
        if (nnResultIsFailure(result)) {
            if (path != 0) {
                if (media == 0)
                    FUN_002cbf90();
                else if (media == 1)
                    FUN_00220438();
                else if (media == 2)
                    FUN_002e1458();
            } else {
                *(u32 *)(&DAT_004651e8 + 0x10) = 0xC8804464;
            }
            switch (media) {
            case 0:
                result = FUN_002cbe94(&file, path, size);
                break;
            case 1:
                result = FUN_00220330(&file);
                break;
            case 2:
                result = FUN_002e1380();
                break;
            default:
                result = FILE_INVALID_MEDIA;
                break;
            }
        }
    }
    if (nnResultIsSuccess(result)) {
        FileResult readResult = FILE_INVALID_MEDIA;
        if (media == 0) {
            readResult = fileObjSeekRead(&file, 0, buffer, size);
        } else if (media == 1) {
            FUN_002104c8();
            readResult = 0;
        } else if (media == 2) {
            FUN_002d5f90();
            readResult = 0;
        }
        if (readResult >= 0) {
            FileResult closeResult = FILE_INVALID_MEDIA;
            switch (media) {
            case 0:
                closeResult = fileOwnerCloseC(&file);
                break;
            case 1:
                closeResult = fileOwnerCloseB(&file);
                break;
            case 2:
                closeResult = fileOwnerCloseA(&file);
                break;
            case 3:
                closeResult = fileOwnerCloseD();
                break;
            }
            if (closeResult >= 0) {
                fileHandleClose(&file, 0);
                return 1;
            }
        }
    }
    fileHandleClose(&file, 0);
    return 0;
}

} /* extern "C" */
