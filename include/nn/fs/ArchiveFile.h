#ifndef NN_FS_ARCHIVEFILE_H
#define NN_FS_ARCHIVEFILE_H

#include "common.h"
#include <stddef.h>

/* The FileServerArchive file, whose stored handle is passed to the file IPC layer. */
struct FsArchiveFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
};
typedef char FsArchiveFileLayoutCheck[offsetof(FsArchiveFile, handle) == 0x04 ? 1 : -1];

extern "C" u32 fileGetHandleChecked(FsArchiveFile *file);

#endif
