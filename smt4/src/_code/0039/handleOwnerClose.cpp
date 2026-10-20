/* NON_MATCHING: retail closes the handle with an inline `svc 0x23`; the build calls the svcCloseHandle stub (software_interrupt) instead (svc intrinsics are not allowed) */
#include "common.h"

extern "C" {

typedef struct HandleOwner003943bc {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 started;
} HandleOwner003943bc;

void FUN_00351ca0(void);
void software_interrupt(s32 number);

/* Stops the owner if it was started and closes its handle. */
HandleOwner003943bc *handleOwnerClose(HandleOwner003943bc *owner)
{
    if (owner->started == 1) {
        FUN_00351ca0();
        owner->started = 0;
    }
    if (owner->handle != 0) {
        software_interrupt(0x23);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
