#include "nn/Result.h"
#include "sys/PlatformFault.h"

/* The user file system mount: its handle and the pointer to itself handed to the file layer. */
struct FsMount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ FsMount *self;
};

extern "C" {

extern FsMount g_fsUserMount;
extern u32 g_fsArchiveHandleWords; /* the mount's handle, as the mount check sees it */

/* Returns the user file system mount's handle, reporting a fault (the not-mounted result and the
 * address of the check) when the file system is not mounted yet. */
u32 fsGetUserMountHandle(void)
{
    if (g_fsArchiveHandleWords == 0) {
        nn::Result result(0xE0A046DB);
        sysReportCheckFailure(result, __current_pc());
    }
    return g_fsUserMount.handle;
}
}
