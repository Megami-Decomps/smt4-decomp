#include "common.h"

extern "C" {

/* A file handle as the nn::fs IPC layer takes it. */
typedef struct FsFile {
    u32 handle; /* 0x00 */
} FsFile;

extern u32 FUN_00239ab8(void);
extern u32 nn_fs_ipc_File_GetSize(FsFile *file, s64 *size);

/* Opens a handle and reads the size of the file behind it. */
void fileGetSizeOut(u32 unused, s64 *size)
{
    FsFile file;

    file.handle = FUN_00239ab8();
    nn_fs_ipc_File_GetSize(&file, size);
}

} /* extern "C" */
