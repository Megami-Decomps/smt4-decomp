#include "common.h"

extern "C" {

int nn_fs_ipc_File_OpenLinkFile(int *handle, u32 arg);
extern int fileGetHandleChecked(void);

/* Calls fileGetHandleChecked for a value and passes it to nn_fs_ipc_File_OpenLinkFile by address. */
void nn_fs_OpenLinkFile(u32 unused, u32 arg)
{
    int handle = fileGetHandleChecked();

    nn_fs_ipc_File_OpenLinkFile(&handle, arg);
}

} /* extern "C" */
