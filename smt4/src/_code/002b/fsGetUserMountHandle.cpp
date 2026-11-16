#include "nn/Result.h"

/* The user file system mount: its handle and the pointer to itself handed to the file layer. */
struct FsMount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ FsMount *self;
};

extern "C" {

extern FsMount DAT_0044e640;
extern u32 g_fsArchiveHandleWords; /* the mount's handle, as the mount check sees it */
void sysReportCheckFailure(u32 key, u32 address);

/* Returns the user file system mount's handle, reporting a fault (the not-mounted result and the
 * address of the check) when the file system is not mounted yet. */
u32 fsGetUserMountHandle(void)
{
    if (g_fsArchiveHandleWords == 0) {
        nn::Result result(0xE0A046DB);
        sysReportCheckFailure(result, __current_pc());
    }
    return DAT_0044e640.handle;
}
}
