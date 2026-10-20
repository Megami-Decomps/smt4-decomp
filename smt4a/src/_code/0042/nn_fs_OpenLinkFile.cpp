#include "common.h"

extern "C" {

int FUN_0042c070(int *handle, u32 arg);
extern int FUN_0050096c(void);

/* Calls FUN_0050096c for a value and passes it to FUN_0042c070 by address. */
void nn_fs_OpenLinkFile(u32 unused, u32 arg)
{
    int handle = FUN_0050096c();

    FUN_0042c070(&handle, arg);
}

} /* extern "C" */
