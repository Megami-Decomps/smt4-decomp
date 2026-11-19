#include "nn/fs/ArchiveFile.h"

extern "C" {

u32 nn_fs_ipc_File_GetSize(u32 *file, s64 *size);

/* Returns the size of the file the holder's resource names. */
u32 FUN_0050094c(FsArchiveFile *holder, s64 *size)
{
    u32 file = fileGetHandleChecked(holder);
    return nn_fs_ipc_File_GetSize(&file, size);
}

} /* extern "C" */
