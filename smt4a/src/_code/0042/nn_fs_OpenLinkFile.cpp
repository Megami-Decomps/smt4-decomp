#include "common.h"

extern "C" {

int FUN_0042c070(int *handle, u32 arg);
extern int fileGetHandleChecked(void);

/* Calls fileGetHandleChecked for a value and passes it to FUN_0042c070 by address. */
void nn_fs_OpenLinkFile(u32 unused, u32 arg)
{
    int handle = fileGetHandleChecked();

    FUN_0042c070(&handle, arg);
}

} /* extern "C" */
