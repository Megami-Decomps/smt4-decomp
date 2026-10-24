/* NON_MATCHING: readable rebuild of the file open/read/close helper; the on-stack file object is initialised by retail with address constants (0x420B78, 0x420BF0) written as separate stores, and the media dispatch is a chain of compares that armcc here compiles from the switches. */
#include "common.h"

/* A file object living on the caller's stack: a vtable pair and open state. */
struct FileObject {
    const void *vtable;
    const void *vtableSecond;
    u32 state[5];
};

typedef s32 FileResult;

extern "C" {
extern u8 DAT_00557fcc;
extern u8 DAT_005b40b4;

FileResult FUN_002e09b4(FileObject *file, s32 path, u32 mode);
FileResult FUN_002bee0c(FileObject *file);
FileResult FUN_0032cab4(FileObject *file);
FileResult FUN_002befc0(void);
FileResult FUN_0032c900(FileObject *file, s32 path, u32 size);
FileResult FUN_00317d48(FileObject *file);
FileResult FUN_00359608(void);
void FUN_0032c9fc(void);
void FUN_00317e50(void);
void FUN_003596e0(void);
FileResult fileObjSeekRead(FileObject *file, s32 position, u32 buffer, u32 size);
void FUN_002e0c80(void);
void FUN_00341824(void);
FileResult taggedOwnerRelease2(FileObject *file);
FileResult holderReleaseObject(FileObject *file);
FileResult taggedOwnerRelease(FileObject *file);
FileResult taggedObjectRelease(void);
void fileHandleClose(FileObject *file, s32 arg);

#define FILE_INVALID_MEDIA ((FileResult)0xE7E3FFFF)

/* Whether a failed open is the retryable "file not yet available" error (module 0x11, range 100..179). */
static bool isRetryable(FileResult result)
{
    return (result & 0x3FC00) == 0x4400 && (result & 0x3FF) >= 100 && (result & 0x3FF) < 0xB4;
}

/* Opens a file on one of the four media (`media`: 0 archive, 1 save, 2 extra, 3 raw), reads from it
 * into `buffer` and closes it again; returns 1 on success and 0 on any error. */
u32 FUN_0037adac(s32 media, s32 path, u32 buffer, u32 size)
{
    FileObject file;
    file.vtable = &DAT_00557fcc + 0x58;
    file.vtableSecond = NULL; /* smt4: the address 0x420BF0 is stored here; Apocalypse keeps no such constant */
    for (s32 i = 0; i < 5; i++)
        file.state[i] = 0;

    FileResult result = FILE_INVALID_MEDIA;
    switch (media) {
    case 0:
        result = FUN_002e09b4(&file, path, 1);
        break;
    case 1:
        result = FUN_002bee0c(&file);
        break;
    case 2:
        result = FUN_0032cab4(&file);
        break;
    case 3:
        result = FUN_002befc0();
        break;
    }
    if (isRetryable(result) || result < 0) {
        switch (media) {
        case 0:
            result = FUN_0032c900(&file, path, size);
            break;
        case 1:
            result = FUN_00317d48(&file);
            break;
        case 2:
            result = FUN_00359608();
            break;
        default:
            result = FILE_INVALID_MEDIA;
            break;
        }
        if (result < 0) {
            if (path != 0) {
                if (media == 0)
                    FUN_0032c9fc();
                else if (media == 1)
                    FUN_00317e50();
                else if (media == 2)
                    FUN_003596e0();
            } else {
                *(u32 *)(&DAT_005b40b4 + 0x10) = 0xC8804464;
            }
            switch (media) {
            case 0:
                result = FUN_0032c900(&file, path, size);
                break;
            case 1:
                result = FUN_00317d48(&file);
                break;
            case 2:
                result = FUN_00359608();
                break;
            default:
                result = FILE_INVALID_MEDIA;
                break;
            }
        }
    }
    if (result >= 0) {
        FileResult readResult = FILE_INVALID_MEDIA;
        if (media == 0) {
            readResult = fileObjSeekRead(&file, 0, buffer, size);
        } else if (media == 1) {
            FUN_002e0c80();
            readResult = 0;
        } else if (media == 2) {
            FUN_00341824();
            readResult = 0;
        }
        if (readResult >= 0) {
            FileResult closeResult = FILE_INVALID_MEDIA;
            switch (media) {
            case 0:
                closeResult = taggedOwnerRelease(&file);
                break;
            case 1:
                closeResult = holderReleaseObject(&file);
                break;
            case 2:
                closeResult = taggedOwnerRelease2(&file);
                break;
            case 3:
                closeResult = taggedObjectRelease();
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
