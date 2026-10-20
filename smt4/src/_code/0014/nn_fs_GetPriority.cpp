#include "common.h"

extern "C" {

int nn_fs_ipc_FileSystem_GetPriority(int *priority, u32 archive);
extern int FUN_002bbaf8(void);

/* Queries the file-system priority of `archive` through the fs IPC client. */
void nn_fs_GetPriority(u32 archive)
{
    int priority = FUN_002bbaf8();

    nn_fs_ipc_FileSystem_GetPriority(&priority, archive);
}

} /* extern "C" */
