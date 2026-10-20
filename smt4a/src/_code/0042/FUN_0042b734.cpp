#include "common.h"

extern "C" {

/* A file handle as the nn::fs IPC layer takes it. */
typedef struct FsFile {
    u32 handle; /* 0x00 */
} FsFile;

extern u32 FUN_0050096c(void);
extern u32 nn_fs_ipc_File_OpenLinkFile(FsFile *file, u32 arg);

/* Takes a file handle and opens the link file for it. */
void FUN_0042b734(u32 unused, u32 arg)
{
    FsFile file;

    file.handle = FUN_0050096c();
    nn_fs_ipc_File_OpenLinkFile(&file, arg);
}

} /* extern "C" */
