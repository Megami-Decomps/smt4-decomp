/* NON_MATCHING: close: retail forms the self-pointer slot as a separate address (add r1, r0, #8; str r0, [r1]; add r0, r1, #0), hoists the zero priority into r4 and ends with a pop/branch tail call instead of a conditional tail call; the build folds the slot address and uses blne. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

/* The user file system mount: its handle and the pointer to itself handed to the file layer. */
struct FsMount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ FsMount *self;
};

extern "C" {

extern FsMount DAT_0044e640;
extern u32 g_fsArchiveHandleWords; /* the mount's handle, as the first mount check sees it */
extern const char DAT_00407ec3[]; /* "fs:USER" */

s32 FUN_002c1398(void);
u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *handle, const char *name, u32 nameLength, u32 flags);
void FUN_0011bb34(u32 handle);
void FUN_0011bb90(FsMount **mount);
u32 FUN_002bbaf8(void);
s32 nn_fs_ipc_FileSystem_SetPriority(u32 *session, s32 priority);

static __inline void reportIfFailed(s32 result, u32 location)
{
    u32 failed = (u32)result >> 31;
    if (failed) {
        FUN_002bbb2c(result, location);
    }
}

// Mounts the user file system once: initializes the service, opens "fs:USER" and applies the
// default priority; each failure is reported with its program counter.
void FUN_0010f5dc(void)
{
    if (g_fsArchiveHandleWords != 0) {
        return;
    }
    s32 result = FUN_002c1398();
    if (result != 0x08a067f9) {
        reportIfFailed(result, __current_pc());
    }
    result = asdModelForwardChecked(&g_fsArchiveHandleWords, DAT_00407ec3, libc_strlen(DAT_00407ec3), 0);
    reportIfFailed(result, __current_pc());
    FUN_0011bb34(DAT_0044e640.handle);
    DAT_0044e640.self = &DAT_0044e640;
    FUN_0011bb90(&DAT_0044e640.self);
    u32 session = FUN_002bbaf8();
    result = nn_fs_ipc_FileSystem_SetPriority(&session, 0);
    reportIfFailed(result, __current_pc());
}

}
