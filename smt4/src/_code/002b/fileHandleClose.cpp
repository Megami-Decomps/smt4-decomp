#include "common.h"

extern "C" {

typedef struct FileHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;  /* low bit set: handle is not closable */
} FileHandle;

void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Closes the file handle the object holds; returns the object. */
FileHandle *fileHandleClose(FileHandle *file)
{
    u32 *handle = &file->handle;

    if ((*handle & ~1u) != 0) {
        if ((*handle & 1) != 0) {
            asdFatalError();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*handle & ~1u);
        *handle = 0;
    }
    return file;
}

} /* extern "C" */
