/* NON_MATCHING: armcc branches around the fault call (bne; mov r1, pc; ldr r0, key; bl) where retail if-converts it (ldreq key; moveq r1, pc; bleq). */
#include "common.h"

/* The user file system mount: its handle and the pointer to itself handed to the file layer. */
struct FsMount {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ FsMount *self;
};

extern "C" {

extern FsMount DAT_0044e640;
extern u32 g_fsArchiveHandleWords; /* the mount's handle, as the mount check sees it */
void FUN_002bbb2c(u32 key, u32 address);

/* Returns the user file system mount's handle, reporting a fault (key and the address of the
 * check) when the file system is not mounted yet. */
u32 FUN_002bbaf8(void)
{
    if (g_fsArchiveHandleWords == 0) {
        FUN_002bbb2c(0xE0A046DB, __current_pc());
    }
    return DAT_0044e640.handle;
}
}
