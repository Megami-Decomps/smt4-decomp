#include "common.h"

struct ResourceHolder0050094c {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *resource;
};

extern "C" {

void *FUN_0050096c(ResourceHolder0050094c *holder);
u32 nn_fs_ipc_File_GetSize(u32 *file, s64 *size);

/* Returns the size of the file the holder's resource names. */
u32 FUN_0050094c(ResourceHolder0050094c *holder, s64 *size)
{
    u32 file = (u32)FUN_0050096c(holder);
    return nn_fs_ipc_File_GetSize(&file, size);
}

} /* extern "C" */
