#include "common.h"

extern "C" {

int nn_fs_ipc_File_OpenLinkFile(int *handle, u32 arg);
extern int FUN_00239ab8(void);

/* Calls FUN_00239ab8 for a value and passes it to nn_fs_ipc_File_OpenLinkFile by address. */
void nn_fs_OpenLinkFile(u32 unused, u32 arg)
{
    int handle = FUN_00239ab8();

    nn_fs_ipc_File_OpenLinkFile(&handle, arg);
}

} /* extern "C" */
