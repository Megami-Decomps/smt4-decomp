/* NON_MATCHING: close: retail forms the self-pointer slot as a separate address (add r1, r0, #8; str r0, [r1]; add r0, r1, #0), hoists the zero priority into r4 and ends with a pop/branch tail call instead of a conditional tail call; the build folds the slot address and uses blne. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "util/PlatformResultCheck.h"
#include "code/Code002c_Result.h"

/* The user file system mount: its handle and the pointer to itself handed to the file layer. */
struct FsMount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ FsMount *self;
};

extern "C" {

extern FsMount g_fsUserMount;
extern u32 g_fsArchiveHandleWords; /* the mount's handle, as the first mount check sees it */
extern const char DAT_00407ec3[]; /* "fs:USER" */

u32 libc_strlen(const char *text);
s32 srvGetServiceHandle(u32 *handle, const char *name, u32 nameLength, u32 flags); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_0011bb34(u32 handle);
void FUN_0011bb90(FsMount **mount);
u32 fsGetUserMountHandle(void);
s32 nn_fs_ipc_FileSystem_SetPriority(u32 *session, s32 priority);

// Mounts the user file system once: initializes the service, opens "fs:USER" and applies the
// default priority; each failure is reported with its program counter.
void fsInitializeUserMount(void)
{
    if (g_fsArchiveHandleWords != 0) {
        return;
    }
    s32 result = (s32)srvInitialize();
    if (result != 0x08a067f9) {
        checkPlatformResult(result, __current_pc());
    }
    result = srvGetServiceHandle(&g_fsArchiveHandleWords, DAT_00407ec3, libc_strlen(DAT_00407ec3), 0);
    checkPlatformResult(result, __current_pc());
    FUN_0011bb34(g_fsUserMount.handle);
    g_fsUserMount.self = &g_fsUserMount;
    FUN_0011bb90(&g_fsUserMount.self);
    u32 session = fsGetUserMountHandle();
    result = nn_fs_ipc_FileSystem_SetPriority(&session, 0);
    checkPlatformResult(result, __current_pc());
}

}
